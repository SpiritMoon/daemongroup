/****************************************************************************
** Description:
** Code for UDP based transport layer
*****************************************************************************
** Copyright(C) 2005 Shabd Communications Pvt. Ltd. http://www.shabdcom.org
*****************************************************************************
** Contact:
** vkgupta@shabdcom.org
*****************************************************************************
** License :
**
** This library is free software; you can redistribute it and/or
** modify it under the terms of the GNU Lesser General Public
** License as published by the Free Software Foundation; either
** version 2.1 of the License, or (at your option) any later version.
**
** This library is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
** Lesser General Public License for more details.
**
** You should have received a copy of the GNU Lesser General Public
** License along with this library; if not, write to the Free Software
** Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*****************************************************************************/
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>
#include <pthread.h>
#include <udp.h>
#include <confasp1.h>

assoc_ctx_t	assoc_table[MAX_ASSOC];
fd_set		readfds;
pthread_t	recv_thr;

/***************************************************************************
** This function return's assoc id after creating context.
****************************************************************************/
int	make_assoc(int			fid,
                   int			tid,
				int			isServ)
{
    int			idx = fid*MAX_REMOTE_EP + tid;

    if (0 == assoc_table[idx].e_state) {
        assoc_table[idx].e_state = 1;
        assoc_table[idx].from = fid;
        assoc_table[idx].to   = tid;
        assoc_table[idx].isClient = !isServ;
        FD_SET(from[fid].sockid, &readfds);
        return idx;
    }
    return -1;
}

/***************************************************************************
** Create a local endpoint
****************************************************************************/
int	make_lep(udp_addr_t	addr)
{
    int			idx;
    struct sockaddr_in  *paddr;

    for (idx = 0; idx < MAX_LOCAL_EP; idx++) {
        if (0 == from[idx].e_state) {
            paddr = (struct sockaddr_in*)&from[idx].addr;
            paddr->sin_family		= AF_INET;
            paddr->sin_port		= htons(addr.port);
            paddr->sin_addr.s_addr	= addr.ipaddr;
            from[idx].e_state		= 1;
            from[idx].sockid = socket(AF_INET, SOCK_DGRAM, 0);
            if (-1 == bind(from[idx].sockid, (struct sockaddr*)&from[idx].addr,
                sizeof(struct sockaddr))) {
                printf("ERRNO:%d\n", errno);
                perror("E_bind_Fail");
                return -1;
            }
            return idx;
        }
    }
    return -1;
}

/***************************************************************************
** Create a remote endpoint
****************************************************************************/
int	make_rep(udp_addr_t	addr)
{
    int                 idx;
    struct sockaddr_in  *paddr;

    for (idx = 0; idx < MAX_REMOTE_EP; idx++) {
        if (0 == to[idx].e_state) {
            paddr = (struct sockaddr_in*)&to[idx].addr;
            paddr->sin_family           = AF_INET;
            paddr->sin_port             = htons(addr.port);
            paddr->sin_addr.s_addr      = addr.ipaddr;
            to[idx].e_state             = 1;
            return idx;
        }
    }
    return -1;
}

/***************************************************************************
** Initialise transport data structures.
****************************************************************************/
int	init_transport()
{
    int			idx;

    FD_ZERO(&readfds);
    for (idx = 0; idx < MAX_LOCAL_EP; idx++)
        memset((void *)&from[idx], 0, sizeof(ep_addr_t));
    for (idx = 0; idx < MAX_REMOTE_EP; idx++)
        memset((void *)&to[idx], 0, sizeof(struct sockaddr));
    for (idx = 0; idx < MAX_ASSOC; idx++)
        assoc_table[idx].e_state = 0;
    /* create thread to receive messages
    pthread_create(&recv_thr, NULL, waitfor_message, NULL); */
    return 0;
}

/***************************************************************************
** Used by M3UA to send messages on the specified assoc/stream combination.
****************************************************************************/
m3_s32	m3ua_sendmsg(m3_u32		assoc_id,
                     m3_u32		stream_id,
                     m3_u32             msglen,
                     m3_u8              *pmsg)
{
    int			ret;
    int			tid = assoc_table[assoc_id].to;
    int			fid = assoc_table[assoc_id].from;

#ifdef __M3UA_PRINT_OUTGOING_MESSAGE__
    int                 m_idx, byte;
    printf("\n<------ Outgoing Message ------>\n");
    printf("\n    Number of Bytes in Message = %d\n", msglen);
    for (m_idx = 0; m_idx < msglen; ) {
        byte = pmsg[m_idx++];
        printf("%02x ", byte);
        if (0 == m_idx%4) {
            printf("\n");
        }
    }
#endif
    ret = sendto(from[fid].sockid, pmsg, msglen, 0,
        (struct sockaddr*)&to[tid].addr, sizeof(struct sockaddr));
    if (-1 == ret) {
        printf("ERRNO:%d\n", errno);
        perror("E_sendto_Fail");
    }
    return 0;
}

/***************************************************************************
** Receive messages
****************************************************************************/
void*	waitfor_message(void	*not_used)
{
    int			ret;
    struct timeval	timeout;
    int			idx;
    fd_set		rfds;
    m3ua_mgmt_ntfy_t    ntfy;
    m3ua_user_ntfy_t    u_ntfy;
    unsigned char	msg[1024];
    unsigned int	msglen = 0;

    timeout.tv_sec  = 0;
    timeout.tv_usec = 0;
    while(1) {
        if (0 == timeout.tv_sec && 0 == timeout.tv_usec) {
            timeout.tv_sec  = 1;
            timeout.tv_usec = 0;
        }
        rfds = readfds;
        ret = select(FD_SETSIZE, &rfds, NULL, NULL, &timeout);
        if (0 == ret) {
            timeout.tv_sec  = 0;
            timeout.tv_usec = 0;
            m3timer_ckexpiry(NULL);
            um3_timer_ckexpiry(NULL);
        }
        else if (0 < ret) {
            for (idx = 0; idx < MAX_LOCAL_EP; idx++)
                if (1 == from[idx].e_state && FD_ISSET(from[idx].sockid,&rfds))
                    get_message(idx, from[idx].sockid, msg, &msglen);
        }
        else {
            printf("ERRNO:%d\n", errno);
            perror("E_select_Fail");
        }
        while (-1 != m3ua_mgmt_ntfy(&ntfy)) {
            um3_process_mgmt_ntfy(&ntfy);
        }
        while (-1 != m3ua_user_ntfy(&u_ntfy)) {
            um3_process_user_ntfy(&u_ntfy);
        }
    }
    return NULL;
}

/***************************************************************************
** read message from socket and pass it to M3UA
****************************************************************************/
int	get_message(int		fid,
                    int		sockid,
                    unsigned char  msg[1024],
                    unsigned int   *pmsglen)
{
    int			idx;
    int			tid;
    struct sockaddr_in	addr;	
    unsigned int		from_len = sizeof(struct sockaddr);

    memset(&addr, 0, sizeof(struct sockaddr));
    *pmsglen = recvfrom(sockid, msg, 1024, 0, (struct sockaddr*)&addr,
        &from_len);
    if (0 < *pmsglen) {
        /* search for association for which data is received */
        for (idx = 0; idx < MAX_REMOTE_EP; idx++) {
            if (1 == assoc_table[fid*MAX_REMOTE_EP + idx].e_state) {
                tid = assoc_table[fid*MAX_REMOTE_EP + idx].to;
                if (to[tid].addr.sin_family == addr.sin_family     &&
                    to[tid].addr.sin_port == addr.sin_port         &&
                    to[tid].addr.sin_addr.s_addr == addr.sin_addr.s_addr) {
                    m3ua_recvmsg(idx, 0, *pmsglen, msg);
                }
            }
        }
    }
    return 0;
}

