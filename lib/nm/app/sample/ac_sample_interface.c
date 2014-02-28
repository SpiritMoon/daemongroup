#include <stdio.h>
#include <fcntl.h>
#include <dbus/dbus.h>
#include <syslog.h>
#include <string.h>
#include <sys/wait.h>
#include <libxml/parser.h>
#include <libxml/tree.h>
#include <libxml/xpathInternals.h>

#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <arpa/inet.h>
#include <sys/select.h>
#include <linux/un.h>
#include <sys/time.h>
#include <unistd.h>
#include <sys/errno.h>

#include "board/board_define.h"
#include "ac_sample_dbus.h"
#include "ac_sample_err.h"
#include "ac_sample_def.h"
#include "ws_intf.h"
#include "ws_public.h"
#include "ws_dbus_def.h"
#include "ac_sample_interface.h"

/**********************acsample config file********************/

#define BAD_CAST (const xmlChar *)


void check_acsample_conf_file(void)
{
	int count=0,ret=0;
	if (access(ACSAMPLE_CONF_PATH, 0) != 0)
	{
		for (count=0; count<3; count++)
		{
			if ( !(ret=system("sudo cp /opt/www/htdocs/trap/acsampleconf_option "ACSAMPLE_CONF_PATH";sudo chmod a+rw "ACSAMPLE_CONF_PATH)))
				break;

			sleep (5);
		}
			
	}
}
/*added by stephen for cpu rt stat*/
void set_cpu_rt_default_config ( acsample_conf *acsample_cf)
{
	acsample_cf->sample_on=SAMPLE_ON;
	acsample_cf->statistics_time=DEFAULT_STATISTICS_TIME_CPURT;/*modified by stephen for cpurt stat*/
	acsample_cf->sample_interval=DEFAULT_SAMPLE_INTERVAL_CPURT;/*modified by stephen for cpurt stat*/
	acsample_cf->resend_interval=DEFAULT_RESEND_INTERVAL;
	acsample_cf->reload_config_interval=DEFAULT_CONFIG_RELOAD_INTERVAL;
	//acsample_cf->over_threshold_check_type=
	//acsample_cf->clear_check_type=1;
	acsample_cf->threshold=DEFAULT_THRESHOLD;
	return ;
}







void set_default_config ( acsample_conf *acsample_cf)
{
	acsample_cf->sample_on=SAMPLE_ON;
	acsample_cf->statistics_time=DEFAULT_STATISTICS_TIME;
	acsample_cf->sample_interval=DEFAULT_SAMPLE_INTERVAL;
	acsample_cf->resend_interval=DEFAULT_RESEND_INTERVAL;
	acsample_cf->reload_config_interval=DEFAULT_CONFIG_RELOAD_INTERVAL;
	//acsample_cf->over_threshold_check_type=
	//acsample_cf->clear_check_type=1;
	acsample_cf->threshold=DEFAULT_THRESHOLD;
	return ;
}


/*��ȡ�����ļ�*/

int acsample_read_socket_timeout_conf (unsigned int *content,char* Node_name) 
{
	xmlDocPtr doc;	 //��������ĵ�ָ��
	xmlNodePtr cur,value; //������ָ��(����Ҫ��Ϊ���ڸ��������ƶ�)
	xmlChar *key;
	check_acsample_conf_file();
	
	doc = xmlReadFile(ACSAMPLE_CONF_PATH, "utf-8", 256); //�����ļ�
	if (doc == NULL ) 
	{
		fprintf(stderr,"Document not parsed successfully. \n");
			return -1;
	}
	cur = xmlDocGetRootElement(doc); //ȷ���ĵ���Ԫ��

	/*���ȷ�ϵ�ǰ�ĵ��а�������*/

	if (cur == NULL) 
	{
	
		 fprintf(stderr,"empty document\n");
		 xmlFreeDoc(doc);
		 return -2;

	}
	if (xmlStrcmp(cur->name, (const xmlChar *) "root")) {

	 fprintf(stderr,"document of the wrong type, root node != root");

		  xmlFreeDoc(doc);

		  return -3;
		  }
	cur = cur->xmlChildrenNode;
	
	while(cur!=NULL)
	{
	
		if ((!xmlStrcmp(cur->name, (const xmlChar *)Node_name))) 
		{
			value=xmlNodeGetContent(cur);
			sscanf( value, "%u", content );
			xmlFree(value);

		}

		cur = cur->next;
	
	}	

	xmlFreeDoc(doc);	
	
	return 0;	
}

int acsample_read_conf( acsample_conf *acsample_cf, char* Node_name ) 
{
	char tmp[128] = {0};
	xmlDocPtr doc;   //��������ĵ�ָ��
	xmlNodePtr cur, tmp_node; //������ָ��(����Ҫ��Ϊ���ڸ��������ƶ�)
	xmlChar *key;

	if ( NULL==Node_name )
	{
		fprintf(stderr,"Node name is null. \n");
      		return -1;
	}
	
	check_acsample_conf_file();
	doc = xmlReadFile(ACSAMPLE_CONF_PATH, "utf-8", 256); //�����ļ�
	if (doc == NULL ) 
	{
		fprintf(stderr,"Document not parsed successfully. \n");
      		return -2;
	}
	cur = xmlDocGetRootElement(doc); //ȷ���ĵ���Ԫ��
	memset ( tmp, 0, 128 );
	/*���ȷ�ϵ�ǰ�ĵ��а�������*/

	if (cur == NULL) 
	{
	
  	     fprintf(stderr,"empty document\n");
	     xmlFreeDoc(doc);
	     return -3;

	}
	
	if (xmlStrcmp(cur->name, (const xmlChar *) "root")) 
	{

		fprintf(stderr,"document of the wrong type, root node != root");

		xmlFreeDoc(doc);

		return -4;
     	}
	cur = cur->xmlChildrenNode;
	
	while(cur!=NULL) 
	{
		tmp_node = cur->xmlChildrenNode;
		if (!xmlStrcmp(cur->name, BAD_CAST Node_name))
	  	{
	  		xmlChar *content=NULL;
	  		while(tmp_node !=NULL)
			{	
				if( (!xmlStrcmp(tmp_node->name, BAD_CAST SE_XML_ACSAMPLE_SWITCH)) )
				{
					content=xmlNodeGetContent(tmp_node);
					sscanf( content, "%d", &(acsample_cf->sample_on) );
					xmlFree(content);
				}else if ( (!xmlStrcmp(tmp_node->name, BAD_CAST SE_XML_ACSAMPLE_STATIC_TIME)) )
				{
					content=xmlNodeGetContent(tmp_node);
					sscanf( content, "%u", &(acsample_cf->statistics_time) );
					xmlFree(content);
				}else if ( (!xmlStrcmp(tmp_node->name, BAD_CAST SE_XML_ACSAMPLE_INTERVAL)) )
				{
					content=xmlNodeGetContent(tmp_node);
					sscanf( content, "%u", &(acsample_cf->sample_interval) );
					xmlFree(content);
				}else if ( (!xmlStrcmp(tmp_node->name, BAD_CAST SE_XML_ACSAMPLE_RESEND_INTERVAL)) )
				{
					content=xmlNodeGetContent(tmp_node);
					sscanf( content, "%u", &(acsample_cf->resend_interval) );
					xmlFree(content);
				}else if ( (!xmlStrcmp(tmp_node->name, BAD_CAST SE_XML_ACSAMPLE_RELOAD_INTERVAL)) )
				{
					content=xmlNodeGetContent(tmp_node);
					sscanf( content, "%u", &(acsample_cf->reload_config_interval) );
					xmlFree(content);
				}else if ( (!xmlStrcmp(tmp_node->name, BAD_CAST SE_XML_ACSAMPLE_OVER_THRESHOLD_TYPE)) )
				{
					content=xmlNodeGetContent(tmp_node);
					sscanf( content, "%u", &(acsample_cf->over_threshold_check_type) );
					xmlFree(content);
				}else if ( (!xmlStrcmp(tmp_node->name, BAD_CAST SE_XML_ACSAMPLE_CLEAR_TYPE)) )
				{
					content=xmlNodeGetContent(tmp_node);
					sscanf( content, "%u", &(acsample_cf->clear_check_type) );
					xmlFree(content);
				}else if ( (!xmlStrcmp(tmp_node->name, BAD_CAST SE_XML_ACSAMPLE_THRESHOLD)) )
				{
					content=xmlNodeGetContent(tmp_node);
					sscanf( content, "%d", &(acsample_cf->threshold) );
					xmlFree(content);
				}
				
				tmp_node = tmp_node->next;
	  		}
		}
	
	   cur = cur->next;
	}
	
	xmlFreeDoc(doc);	
	return 0;	
}

/*���������ļ�*/

int acsample_mod_conf ( char *Node_name, char *Children_name, int value )
{
	char tmp[128] = {0};
	xmlDocPtr doc;   //��������ĵ�ָ��
	xmlNodePtr cur, tmp_node; //������ָ��(����Ҫ��Ϊ���ڸ��������ƶ�)
	xmlChar *key;
	int flag=0;
	int ret=0;

	if ( NULL==Node_name )
	{
		//fprintf(stderr,"Node name is null. \n");
      		return -1;
	}
	
	check_acsample_conf_file();
	doc = xmlReadFile(ACSAMPLE_CONF_PATH, "utf-8", 256); //�����ļ�
	if (doc == NULL ) 
	{
		//fprintf(stderr,"Document not parsed successfully. \n");
      		return -2;
	}
	cur = xmlDocGetRootElement(doc); //ȷ���ĵ���Ԫ��
	memset ( tmp, 0, 128 );
	/*���ȷ�ϵ�ǰ�ĵ��а�������*/

	if (cur == NULL) 
	{
	
  	     //fprintf(stderr,"empty document\n");
	     xmlFreeDoc(doc);
	     return -3;

	}
	
	if (xmlStrcmp(cur->name, (const xmlChar *) "root")) 
	{

		//fprintf(stderr,"document of the wrong type, root node != root");

		xmlFreeDoc(doc);

		return -4;
     	}
	cur = cur->xmlChildrenNode;
	sprintf(tmp,"%d",value);
	
	while(cur!=NULL) 
	{
		tmp_node = cur->xmlChildrenNode;
		if (!xmlStrcmp(cur->name, BAD_CAST Node_name))
	  	{
	  		flag=1;
	  		xmlChar *content=NULL;
			if ( NULL==Children_name )
			{
				xmlNodeSetContent(cur, (const xmlChar *)tmp);
			}
			
	  		while(tmp_node !=NULL)
			{	
				if( (!xmlStrcmp(tmp_node->name, BAD_CAST Children_name)) )
				{
					flag=2;
					xmlNodeSetContent(tmp_node, (const xmlChar *)tmp);
				}
				
				tmp_node = tmp_node->next;
	  		}
		}
	
	   cur = cur->next;
	}
	xmlSaveFile( ACSAMPLE_CONF_PATH, doc);
	xmlFreeDoc(doc);	

	switch ( flag )
	{
		case 0:
			//fprintf(stderr,"node %s not found\n", Node_name );
			return -5;	//node found
		case 1:
			if (NULL==Children_name)
				return 0;
			//fprintf(stderr,"children node %s not found\n", Children_name );
			return -6;	//node found children node not found
			break;
		case 2:
			return 0;	
			break;
		default:
			//fprintf(stderr,"Unknown error!\n" );
			return -7;
			break;
	}
}

int
sample_get_product_info(char *filename)
{
    int fd;
    char buff[16] = {0};
    unsigned int data;

    if(NULL == filename) {
        syslog(LOG_WARNING, "sample_get_product_info: Input filename is NULL\n");
        return 0;
    }

    fd = open(filename, O_RDONLY, 0);
    if(fd >= 0) {
        if(read(fd, buff, 16) < 0) {
            syslog(LOG_WARNING, "sample_get_product_info: Read error : no value\n");
            close(fd);
            return 0;
        }    
    }
    else {        
        syslog(LOG_WARNING, "sample_get_product_info: Open file:%s error!\n", filename);
        return 0;
    }
    
    data = strtoul(buff, NULL, 10);

    close(fd);

    return data;
}


unsigned int 
sample_get_board_state(void) {
	FILE *fp = NULL;
	char temp_buf[64] = { 0 };
	unsigned int board_on_mask = 0, board_state = 0;

	if(VALID_DBM_FLAG == get_dbm_effective_flag())
	{
		fp = fopen(BOARD_MASK_FILE, "r");
	}
	if(NULL == fp){
		syslog(LOG_WARNING, "Open BOARD_MASK_FILE error\n");
		return 0;
	}
	
	if(fscanf(fp, "%u", &board_on_mask) <= 0) {
		fclose(fp);
		syslog(LOG_WARNING, "Fscanf BOARD_MASK_FILE error\n");
		return 0;
	}

	syslog(LOG_DEBUG, "The broad_on_mask is %d\n", board_on_mask);
	fclose(fp);

	int i = 0;
	for(; i < SLOT_MAX_NUM; i++) {
		if(board_on_mask & (0x1 << i)) {
			fp = NULL;
			unsigned int temp_state = 0;
				
			memset(temp_buf, 0, sizeof(temp_buf));
			sprintf(temp_buf, "/dbm/product/slot/slot%d/board_state", i + 1);
			fp = fopen(temp_buf, "r");
			if(fp) {
				fscanf(fp, "%d", &temp_state);
				fclose(fp);
				
				if(temp_state > 1) {
					board_state |= (0x1 << i);
				}
			}
		}
	}

	return board_state;
}

//rtmd provide ac interface flow

 #define INTERFACE_NAMSIZ		32
 
struct rtmd_if_stats {
	unsigned long long rx_packets;   /* total packets received       */
	unsigned long long tx_packets;   /* total packets transmitted    */
	unsigned long long rx_bytes;     /* total bytes received         */
	unsigned long long tx_bytes;     /* total bytes transmitted      */
	unsigned long long rx_errors;    /* bad packets received         */
	unsigned long long tx_errors;    /* packet transmit problems     */
	unsigned long long rx_dropped;   /* no space in linux buffers    */
	unsigned long long tx_dropped;   /* no space available in linux  */
	unsigned long long rx_multicast; /* multicast packets received   */
	unsigned long long rx_compressed;
	unsigned long long tx_compressed;
	unsigned long long collisions;

	/* detailed rx_errors: */
	unsigned long long rx_length_errors;
	unsigned long long rx_over_errors;       /* receiver ring buff overflow  */
	unsigned long long rx_crc_errors;        /* recved pkt with crc error    */
	unsigned long long rx_frame_errors;      /* recv'd frame alignment error */
	unsigned long long rx_fifo_errors;       /* recv'r fifo overrun          */
	unsigned long long rx_missed_errors;     /* receiver missed packet     */
	/* detailed tx_errors */
	unsigned long long tx_aborted_errors;
	unsigned long long tx_carrier_errors;
	unsigned long long tx_fifo_errors;
	unsigned long long tx_heartbeat_errors;
	unsigned long long tx_window_errors;
};

struct if_flow_stats {
	int tap;
	int length;
	int process_name;
	int cmd;
	char name[INTERFACE_NAMSIZ];
	struct rtmd_if_stats stats;
};

int 
set_nonblocking(int fd)
{
	int flags = 0;

	if ((flags = fcntl(fd, F_GETFL)) < 0) {
		syslog(LOG_WARNING, "fcntl(F_GETFL) failed for fd %d: %s",
			fd, strerror(errno));
		return -1;
	}
	if (fcntl(fd, F_SETFL, (flags | O_NONBLOCK)) < 0) {
		syslog(LOG_WARNING, "fcntl failed setting fd %d non-blocking: %s",
			fd, strerror(errno));
		return -1;
	}
	return 0;
}


int sample_rtmd_init_socket(struct sample_rtmd_info *info, int process, int cmd, int timeout)
{
	int ret = 0;
	int sockfd = -1;
	struct sockaddr_un servaddr;

	if (NULL == info) {
		return -1;
	}

	memset(info, 0, sizeof(struct sample_rtmd_info));
	info->sockfd = -1;
	
	servaddr.sun_family = AF_UNIX;

	if (PROCESS_NAME_SNMP == process) {
		 strncpy(servaddr.sun_path, RTM_TO_SNMP_PATH, sizeof(servaddr.sun_path));
	} else if (PROCESS_NAME_ACSAMPLE == process) {
		strncpy(servaddr.sun_path, RTM_TO_ACSAMPLE_PATH, sizeof(servaddr.sun_path));
	} else {
		return -1;
	}

	sockfd = socket(AF_UNIX, SOCK_STREAM, 0);
	if (sockfd < 0) {
		sockfd = -1;
		return AS_RTN_SOCKET_ERR;
	}

	ret = connect(sockfd, (struct sockaddr *)&servaddr, sizeof(servaddr));
	if (ret < 0) {
		close(sockfd);
		sockfd = -1;
		return AS_RTN_SOCKET_CONNECT_ERR;
	}

	ret = set_nonblocking(sockfd);
	if (ret < 0) {
		close(sockfd);
		sockfd = -1;
		return AS_RTN_SOCKET_CONNECT_ERR;
	}

	info->sockfd = sockfd;
	info->process = process;
	info->cmd = cmd;
	info->timeout = timeout;
	
	
	return AS_RTN_OK;
}

ssize_t
readn(int fd, struct if_flow_stats *vptr, size_t n,struct sample_rtmd_info *info)
{
	size_t nleft = 0;
	ssize_t nread = 0;
	struct if_flow_stats *ptr = NULL;

	struct timeval timeout = {0};
	fd_set set;
	int nready;

	if (fd < 0 || NULL == vptr || n <= 0) {
		return -1;
	}

	timeout.tv_sec = info->timeout/1000;
	timeout.tv_usec = (info->timeout%1000)*1000;
	ptr = (struct if_flow_stats *)vptr;
	nleft = n;	
	while (nleft > 0) {
		FD_ZERO(&set);
		FD_SET(info->sockfd, &set);
		if (nready=select(info->sockfd+1, &set, NULL, NULL, &timeout) <= 0) {
			syslog(LOG_WARNING, "sample_rtmd_get_interface_flow timeout\n");
			return AS_RTN_SOCKET_SET_ERR;
		}
		else if(FD_ISSET(info->sockfd, &set)){
			if ((nread = read(fd, ptr, sizeof(*vptr))) <= 0) {
				syslog(LOG_WARNING, "read error nread=%d:%s", nread, strerror(errno));
				if (errno == EINTR) {
					nread = 0;
				} else if (errno == EAGAIN) {
					continue;
				} else if(nread == 0){
					break;
				} else {
					return -1;
				}
			}
			else if (ptr->tap == 0) {
				nleft -=nread;
				return (n - nleft);
			}
			else {
				nleft -=nread;
				ptr++;
				continue;
			}
		}		
	}
	return (n - nleft);
}

ssize_t
writen(int fd, const void *vptr, size_t n)
{
	size_t nleft = 0;
	ssize_t nwritten = 0;
	const char *ptr = NULL;

	if (fd < 0 || NULL == vptr || n <= 0) {
		return -1;
	}

	ptr = vptr;
	nleft = n;
	while (nleft > 0) {
		if ((nwritten = write(fd, ptr, nleft)) <= 0) {
			syslog(LOG_WARNING, "writen error nwritten=%d:%s", nwritten, strerror(errno));
			if (nwritten < 0 && errno == EINTR) {
				nwritten = 0;
			} else {
				return -1;
			}
		}
		nleft -= nwritten;
		ptr += nwritten;
	}
	return n;
}

int sample_rtmd_get_interface_flow(struct sample_rtmd_info *info, int *ifnum, struct if_stats_list **data)
{
	struct if_stats_list *pos = NULL;
	struct if_flow_stats buf[251] = {{0}};
	
	
	
	int nbyte = 0;
	int length = sizeof(struct if_flow_stats);
	int i = 0;
	
	if (NULL == info) {
		return -1;
	}
	buf[0].length = length;
	buf[0].cmd = info->cmd;
	buf[0].process_name = info->process;
	
	if (NULL == info || NULL == ifnum || NULL == data) {
		return -1;
	}
	nbyte = writen(info->sockfd, buf, buf[0].length);
	syslog(LOG_WARNING, "sample_rtmd_get_interface_flow writen nbyte=%d, length=%d\n", nbyte, length);
	if (nbyte != length) {
		sample_rtmd_close_socket(info);
		sample_rtmd_init_socket(info, info->process, info->cmd, info->timeout);
		return AS_RTN_SOCKET_WRITE_ERR;
	}
	nbyte = readn(info->sockfd, buf, sizeof(buf),info);
	syslog(LOG_DEBUG, "sample_rtmd_get_interface_flow readn nbyte=%d, size=%d\n", nbyte, sizeof(buf));
	if (nbyte < 0) {
		sample_rtmd_close_socket(info);
		sample_rtmd_init_socket(info, info->process, info->cmd, info->timeout);
		return AS_RTN_SOCKET_READ_BYTE_ERR;
	}
	
	*ifnum = nbyte/length;
	if (nbyte%length) {
		return AS_RTN_SOCKET_READ_BYTE_ERR;
	}
	pos = (struct if_stats_list *)calloc(*ifnum, sizeof(struct if_stats_list));
	if (NULL == pos) {
		return AS_RTN_MALLOC_ERR;
	}
	for (i = 0; i < *ifnum; i++) {		
		strncpy(pos[i].ifname, buf[i].name, sizeof(pos[i].ifname));
		pos[i].stats.rx_packets = buf[i].stats.rx_packets;
		pos[i].stats.tx_packets = buf[i].stats.tx_packets;
		pos[i].stats.rx_bytes = buf[i].stats.rx_bytes;
		pos[i].stats.tx_bytes = buf[i].stats.tx_bytes;
		pos[i].stats.rx_errors = buf[i].stats.rx_errors;
		pos[i].stats.tx_errors = buf[i].stats.tx_errors;
		pos[i].stats.rx_dropped = buf[i].stats.rx_dropped;
		pos[i].stats.tx_dropped = buf[i].stats.tx_dropped;
		pos[i].stats.rx_multicast = buf[i].stats.rx_multicast;
		pos[i].stats.rx_compressed = buf[i].stats.rx_compressed;
		pos[i].stats.tx_compressed = buf[i].stats.tx_compressed;
		pos[i].stats.collisions = buf[i].stats.collisions;
		pos[i].stats.rx_length_errors = buf[i].stats.rx_length_errors;
		pos[i].stats.rx_over_errors = buf[i].stats.rx_over_errors;
		pos[i].stats.rx_crc_errors = buf[i].stats.rx_crc_errors;
		pos[i].stats.rx_frame_errors = buf[i].stats.rx_frame_errors;
		pos[i].stats.rx_fifo_errors = buf[i].stats.rx_fifo_errors;
		pos[i].stats.rx_missed_errors = buf[i].stats.rx_missed_errors;
		pos[i].stats.tx_aborted_errors = buf[i].stats.tx_aborted_errors;
		pos[i].stats.tx_carrier_errors = buf[i].stats.tx_carrier_errors;
		pos[i].stats.tx_fifo_errors = buf[i].stats.tx_fifo_errors;
		pos[i].stats.tx_heartbeat_errors = buf[i].stats.tx_heartbeat_errors;
		pos[i].stats.tx_window_errors = buf[i].stats.tx_window_errors;

		syslog(LOG_DEBUG, "sample_rtmd_get_interface_flow %d:ifname=%s tx_packets=%llu"	\
					" rx_packets=%llu tx_bytes=%llu rx_bytes=%llu\n",	\
					i, buf[i].name, buf[i].stats.tx_packets, buf[i].stats.rx_packets,
					buf[i].stats.tx_bytes, buf[i].stats.rx_bytes);
	}
	*data = pos;
	return AS_RTN_OK;
}

int sample_rtmd_close_socket(struct sample_rtmd_info *info)
{
	if (NULL == info) {
		return -1;
	}
	if (info->sockfd <= 0) {
		return -1;
	}
	close(info->sockfd);
	info->sockfd = -1;
	return AS_RTN_OK;
}

/**********************************END********************************/


#if 0
int dbus_set_sample_interval( DBusConnection *conn, unsigned int sample_interval )
{
    DBusMessage *query, *reply;
    /*DBusMessageIter	 iter;*/
    DBusError err;
    int iRet=0;

    query = dbus_message_new_method_call(
                                    AC_SAMPLE_DBUS_BUSNAME,
                                    AC_SAMPLE_DBUS_OBJPATH,
						                        AC_SAMPLE_DBUS_INTERFACE, 
						                        AC_SAMPLE_DBUS_METHOD_SET_SAMPLE_INTERVAL );
    dbus_error_init(&err);

    printf( "sample_interval = %d\n", sample_interval );
		dbus_message_append_args(   query,
										            DBUS_TYPE_UINT32, &sample_interval,
										            DBUS_TYPE_INVALID );

    reply = dbus_connection_send_with_reply_and_block ( conn, query, -1, &err );

    dbus_message_unref(query);
    
    if ( NULL == reply )
    {   
        if (dbus_error_is_set(&err))
        {
            dbus_error_free(&err);
        }
        return SAMPLE_DBUS_ERR;
    }
    else
    {
        dbus_message_get_args(  reply,
                                &err,
                                DBUS_TYPE_INT32, &iRet,
                                DBUS_TYPE_INVALID );
    }
    
    printf("iRet = %d\n", iRet );
    
    dbus_message_unref(reply);
    
    return iRet;    
}

#endif

unsigned int dbus_get_sample_param_timeout ( DBusConnection *conn , unsigned int *timeout)
{
	
    DBusMessage *query, *reply;
    DBusError err;
    int iRet=0;
    unsigned int value=0;

    query = dbus_message_new_method_call(
                                    AC_SAMPLE_DBUS_BUSNAME,
                                    AC_SAMPLE_DBUS_OBJPATH,
			                        AC_SAMPLE_DBUS_INTERFACE, 
			                        AC_SAMPLE_DBUS_METHOD_GET_SAMPLE_PARAM_TIMEOUT );
    dbus_error_init(&err);

    
	dbus_message_append_args(   query,
					        	DBUS_TYPE_INVALID );

    reply = dbus_connection_send_with_reply_and_block ( conn, query, -1, &err );

    dbus_message_unref(query);
    
    if ( NULL == reply )
    {   
        if (dbus_error_is_set(&err))
        {
            dbus_error_free(&err);
        }
        return AS_RTN_DBUS_ERR;
    }
    else
    {
        dbus_message_get_args(  reply,
                                &err,
                                DBUS_TYPE_INT32, &iRet,
                                DBUS_TYPE_UINT32, &value,
                                DBUS_TYPE_INVALID );
    }
	    
    dbus_message_unref(reply);

    //printf("iRet = %d\n", iRet );
    *timeout = value;
    
    return iRet;    

}

unsigned int dbus_set_sample_param_timeout ( DBusConnection *conn , unsigned int timeout)
{
	
    DBusMessage *query, *reply;
    DBusError err;
    int iRet=AS_RTN_OK;

    query = dbus_message_new_method_call(
                                    AC_SAMPLE_DBUS_BUSNAME,
                                    AC_SAMPLE_DBUS_OBJPATH,
			                        AC_SAMPLE_DBUS_INTERFACE, 
			                        AC_SAMPLE_DBUS_METHOD_SET_SAMPLE_PARAM_TIMEOUT );
    dbus_error_init(&err);

    
	dbus_message_append_args(   query,
							DBUS_TYPE_UINT32, &timeout,
					        	DBUS_TYPE_INVALID );

    reply = dbus_connection_send_with_reply_and_block ( conn, query, -1, &err );

    dbus_message_unref(query);
    
    if ( NULL == reply )
    {   
        if (dbus_error_is_set(&err))
        {
            dbus_error_free(&err);
        }
        return AS_RTN_DBUS_ERR;
    }
    else
    {
        dbus_message_get_args(  reply,
                                &err,
                                DBUS_TYPE_INT32, &iRet,
                                DBUS_TYPE_INVALID );
    }
	    
    dbus_message_unref(reply);

    //printf("iRet = %d\n", iRet );
    
    return iRet;    

}



/*set the param of samples(exclude cpu memory temperatrue) ! include  interval ,  STATISTICS , signal_resend_interval sample_reload_config_interval timeout  !*/
int dbus_set_sample_param_by_name ( DBusConnection *conn, char *sample_name, int type, unsigned int value )
{
	
    DBusMessage *query, *reply;
    DBusError err;
    int iRet=0;

    query = dbus_message_new_method_call(
                                    AC_SAMPLE_DBUS_BUSNAME,
                                    AC_SAMPLE_DBUS_OBJPATH,
			                        AC_SAMPLE_DBUS_INTERFACE, 
			                        AC_SAMPLE_DBUS_METHOD_SET_SAMPLE_PARAM_BY_NAME );
    dbus_error_init(&err);

    
	dbus_message_append_args(   query,
							DBUS_TYPE_STRING, &sample_name,
	                      			DBUS_TYPE_INT32,  &type,
					     		DBUS_TYPE_UINT32, &value,
					        	DBUS_TYPE_INVALID );

    reply = dbus_connection_send_with_reply_and_block ( conn, query, -1, &err );

    dbus_message_unref(query);
    
    if ( NULL == reply )
    {   
        if (dbus_error_is_set(&err))
        {
            dbus_error_free(&err);
        }
        return AS_RTN_DBUS_ERR;
    }
    else
    {
        dbus_message_get_args(  reply,
                                &err,
                                DBUS_TYPE_INT32, &iRet,
                                DBUS_TYPE_INVALID );
    }
    
    //printf("iRet = %d\n", iRet );
    
    dbus_message_unref(reply);
    
    return iRet;    

}


/*get the param of samples(exclude cpu memory temperatrue) ! include  interval ,  STATISTICS , signal_resend_interval sample_reload_config_interval timeout  !*/
int dbus_get_sample_param_by_name ( DBusConnection *conn, char *sample_name, int type )
{
	
    DBusMessage *query, *reply;
    DBusError err;
    int iRet=0;
    unsigned int value=0;

    query = dbus_message_new_method_call(
                                    AC_SAMPLE_DBUS_BUSNAME,
                                    AC_SAMPLE_DBUS_OBJPATH,
			                        AC_SAMPLE_DBUS_INTERFACE, 
			                        AC_SAMPLE_DBUS_METHOD_GET_SAMPLE_PARAM_BY_NAME );
    dbus_error_init(&err);

    
	dbus_message_append_args(   query,
							DBUS_TYPE_STRING, &sample_name,
	                      			DBUS_TYPE_INT32,  &type,
					     		DBUS_TYPE_UINT32, &value,
					        	DBUS_TYPE_INVALID );

    reply = dbus_connection_send_with_reply_and_block ( conn, query, -1, &err );

    dbus_message_unref(query);
    
    if ( NULL == reply )
    {   
        if (dbus_error_is_set(&err))
        {
            dbus_error_free(&err);
        }
        return AS_RTN_DBUS_ERR;
    }
    else
    {
        dbus_message_get_args(  reply,
                                &err,
                                DBUS_TYPE_INT32, &iRet,
                                DBUS_TYPE_INT32, &value,
                                DBUS_TYPE_INVALID );
    }
	    
    dbus_message_unref(reply);

    //printf("iRet = %d\n", iRet );
    if ( 0>iRet )
    {
    	iRet = AS_RTN_PARAM_ERR;
		return iRet;
    }
    
    return value;    

}


/*set the global  param of all sample! include  interval ,  STATISTICS , signal resend interval!*/
int dbus_set_sample_param( DBusConnection *conn, int type, unsigned int value )
{
    DBusMessage *query, *reply;
    DBusError err;
    int iRet=0;

    query = dbus_message_new_method_call(
                                    AC_SAMPLE_DBUS_BUSNAME,
                                    AC_SAMPLE_DBUS_OBJPATH,
			                        AC_SAMPLE_DBUS_INTERFACE, 
			                        AC_SAMPLE_DBUS_METHOD_SET_SAMPLE_PARAM );
    dbus_error_init(&err);

    
	dbus_message_append_args(   query,
	                            DBUS_TYPE_INT32,  &type,
					            DBUS_TYPE_UINT32, &value,
					            DBUS_TYPE_INVALID );

    reply = dbus_connection_send_with_reply_and_block ( conn, query, -1, &err );

    dbus_message_unref(query);
    
    if ( NULL == reply )
    {   
        if (dbus_error_is_set(&err))
        {
            dbus_error_free(&err);
        }
        return AS_RTN_DBUS_ERR;
    }
    else
    {
        dbus_message_get_args(  reply,
                                &err,
                                DBUS_TYPE_INT32, &iRet,
                                DBUS_TYPE_INVALID );
    }
    
    //printf("iRet = %d\n", iRet );
    
    dbus_message_unref(reply);
    
    return iRet;    
}

int dbus_get_sample_params_info_by_name 
(	DBusConnection *conn, 
		char *sample_name,
		int				*sample_on,
		unsigned int		*statistics_time,
		unsigned int		*sample_interval,
		unsigned int		*resend_interval,
		unsigned int		*reload_config_interval,
		//int				over_threshold_check_type;	//not use
		//int				clear_check_type;				//not use
		int				*threshold)
{
	
	DBusMessage *query, *reply;
	DBusError err;
	int iRet=0;

	query = dbus_message_new_method_call(
	                                AC_SAMPLE_DBUS_BUSNAME,
	                                AC_SAMPLE_DBUS_OBJPATH,
						            AC_SAMPLE_DBUS_INTERFACE, 
						            AC_SAMPLE_DBUS_METHOD_GET_SAMPLE_PARAMS_INFO_BY_NAME );
	dbus_error_init(&err);

	dbus_message_append_args(   query,
						     DBUS_TYPE_STRING, &sample_name,
					            DBUS_TYPE_INVALID );

	reply = dbus_connection_send_with_reply_and_block ( conn, query, -1, &err );

	dbus_message_unref(query);

	if ( NULL == reply )
	{   
	    if (dbus_error_is_set(&err))
	    {
	        dbus_error_free(&err);
	    }
	    return AS_RTN_DBUS_ERR;
	}
	else
	{
	    dbus_message_get_args(  reply,
	                            &err,
	                            DBUS_TYPE_INT32, &iRet,
	                            DBUS_TYPE_INT32, sample_on,
	                            DBUS_TYPE_UINT32, statistics_time,
	                            DBUS_TYPE_UINT32, sample_interval,
	                            DBUS_TYPE_UINT32, resend_interval,
	                            DBUS_TYPE_UINT32, reload_config_interval,
	                            DBUS_TYPE_INT32, threshold,
	                            DBUS_TYPE_INVALID );
	}


	dbus_message_unref(reply);

	return iRet;

}

int dbus_get_sample_param( DBusConnection *conn, 
										unsigned int *sample_interval,
										unsigned int *statistics_time,
										unsigned int *resend_interval)		//get (cpu memory temperatrue) param
{
    DBusMessage *query, *reply;
    DBusError err;
    int iRet=0;

    query = dbus_message_new_method_call(
                                    AC_SAMPLE_DBUS_BUSNAME,
                                    AC_SAMPLE_DBUS_OBJPATH,
						            AC_SAMPLE_DBUS_INTERFACE, 
						            AC_SAMPLE_DBUS_METHOD_GET_SAMPLE_PARAM );
    dbus_error_init(&err);
   
	dbus_message_append_args(   query,
					            DBUS_TYPE_INVALID );

    reply = dbus_connection_send_with_reply_and_block ( conn, query, -1, &err );

    dbus_message_unref(query);
    
    if ( NULL == reply )
    {   
        if (dbus_error_is_set(&err))
        {
            dbus_error_free(&err);
        }
        return AS_RTN_DBUS_ERR;
    }
    else
    {
        dbus_message_get_args(  reply,
                                &err,
                                DBUS_TYPE_UINT32, sample_interval,
                                DBUS_TYPE_UINT32, statistics_time,
                                DBUS_TYPE_UINT32, resend_interval,
                                DBUS_TYPE_INVALID );
    }
    
    
    dbus_message_unref(reply);
    
    return iRet;    
}


int dbus_set_sample_service_state( DBusConnection *conn, int state )
{
    DBusMessage *query, *reply;
    DBusError err;
    int iRet=0;

    query = dbus_message_new_method_call(
                                    AC_SAMPLE_DBUS_BUSNAME,
                                    AC_SAMPLE_DBUS_OBJPATH,
			                        AC_SAMPLE_DBUS_INTERFACE, 
			                        AC_SAMPLE_DBUS_METHOD_SET_SERVICE_STATE );
    dbus_error_init(&err);
    
	dbus_message_append_args(   query,
	                            DBUS_TYPE_INT32,  &state,
					            DBUS_TYPE_INVALID );

    reply = dbus_connection_send_with_reply_and_block ( conn, query, -1, &err );

    dbus_message_unref(query);
    
    if ( NULL == reply )
    {   
        if (dbus_error_is_set(&err))
        {
            dbus_error_free(&err);
        }
        return AS_RTN_DBUS_ERR;
    }
    else
    {
        dbus_message_get_args(  reply,
                                &err,
                                DBUS_TYPE_INT32, &iRet,
                                DBUS_TYPE_INVALID );
    }
        
    dbus_message_unref(reply);
    
    return iRet;    
}



int dbus_get_sample_service_state( DBusConnection *conn, int *state )
{
    DBusMessage *query, *reply;
    DBusError err;
    int iRet=0;

    query = dbus_message_new_method_call(
                                    AC_SAMPLE_DBUS_BUSNAME,
                                    AC_SAMPLE_DBUS_OBJPATH,
			                        AC_SAMPLE_DBUS_INTERFACE, 
			                        AC_SAMPLE_DBUS_METHOD_GET_SERVICE_STATE );
    dbus_error_init(&err);
    
	dbus_message_append_args(   query,
					            DBUS_TYPE_INVALID );

    reply = dbus_connection_send_with_reply_and_block ( conn, query, -1, &err );

    dbus_message_unref(query);
    
    if ( NULL == reply )
    {   
        if (dbus_error_is_set(&err))
        {
            dbus_error_free(&err);
        }
        return AS_RTN_DBUS_ERR;
    }
    else
    {
        dbus_message_get_args(  reply,
                                &err,
                                DBUS_TYPE_INT32, &iRet,
                                DBUS_TYPE_INT32, state,
                                DBUS_TYPE_INVALID );
    }
        
    dbus_message_unref(reply);
    
    return iRet;    
}


/*set  sample  on or off by sample name!*/
int dbus_set_sample_state( DBusConnection *conn, char *name, int state )
{
    DBusMessage *query, *reply;
    DBusError err;
    int iRet=0;

    query = dbus_message_new_method_call(
                                   		AC_SAMPLE_DBUS_BUSNAME,
                                   		AC_SAMPLE_DBUS_OBJPATH,
			                        AC_SAMPLE_DBUS_INTERFACE, 
			                        AC_SAMPLE_DBUS_METHOD_SET_SAMPLE_STATE );
    dbus_error_init(&err);
    
	dbus_message_append_args(   query,
								DBUS_TYPE_STRING, &name,
	                           				DBUS_TYPE_INT32,  &state,
					            		DBUS_TYPE_INVALID );

    reply = dbus_connection_send_with_reply_and_block ( conn, query, -1, &err );

    dbus_message_unref(query);
    
    if ( NULL == reply )
    {   
        if (dbus_error_is_set(&err))
        {
            dbus_error_free(&err);
        }
        return AS_RTN_DBUS_ERR;
    }
    else
    {
        dbus_message_get_args(  reply,
                                &err,
                                DBUS_TYPE_INT32, &iRet,
                                DBUS_TYPE_INVALID );
    }
        
    dbus_message_unref(reply);
    
    return iRet;    
}



int dbus_get_sample_state( DBusConnection *conn, char *name, int *state )
{
    DBusMessage *query, *reply;
    DBusError err;
    int iRet=0;

    query = dbus_message_new_method_call(
                                    AC_SAMPLE_DBUS_BUSNAME,
                                    AC_SAMPLE_DBUS_OBJPATH,
			                        AC_SAMPLE_DBUS_INTERFACE, 
			                        AC_SAMPLE_DBUS_METHOD_GET_SAMPLE_STATE );
    dbus_error_init(&err);
    
	dbus_message_append_args(   query,
								DBUS_TYPE_STRING, &name,
					            DBUS_TYPE_INVALID );

    reply = dbus_connection_send_with_reply_and_block ( conn, query, -1, &err );

    dbus_message_unref(query);
    
    if ( NULL == reply )
    {   
        if (dbus_error_is_set(&err))
        {
            dbus_error_free(&err);
        }
        return AS_RTN_DBUS_ERR;
    }
    else
    {
        dbus_message_get_args(  reply,
                                &err,
                                DBUS_TYPE_INT32, &iRet,
                                DBUS_TYPE_INT32, state,
                                DBUS_TYPE_INVALID );
    }
    
    dbus_message_unref(reply);
    
    return iRet;    
}

int dbus_get_iface_bandwidth_info( DBusConnection *conn, struct flow_data_list **resList )
{
	if (NULL == resList){
		return AS_RTN_PARAM_ERR;
	}
	*resList = NULL;
	
	DBusMessage *query = NULL;
	DBusMessage *reply = NULL;
	struct flow_data_list *tempList = NULL;


	DBusError   err;
	int  iRet = 0;

	query = dbus_message_new_method_call(AC_SAMPLE_DBUS_BUSNAME,
											AC_SAMPLE_DBUS_OBJPATH,
											AC_SAMPLE_DBUS_INTERFACE, 
											AC_SAMPLE_DBUS_METHOD_GET_IFACE_INFO);
	dbus_error_init(&err);
	dbus_message_append_args( query, 
								DBUS_TYPE_INVALID);
	reply = dbus_connection_send_with_reply_and_block ( conn, query, -1, &err );

	dbus_message_unref(query);

	if ( NULL == reply )
	{   
		if (dbus_error_is_set(&err))
		{
			dbus_error_free(&err);
		}
		return AS_RTN_DBUS_ERR;
	}
	else
	{
		DBusMessageIter	 iter;
		DBusMessageIter	 iter_array;	
		int num = 0;

		dbus_message_iter_init(reply,&iter);
		dbus_message_iter_get_basic(&iter,&iRet);
		if (AS_RTN_OK==iRet)
		{
			int ifIndex = 0;
			unsigned long long  nrxBandwidth = 0;
			unsigned long long  ntxbandwidth = 0;
			int i = 0;

			dbus_message_iter_next(&iter);
			dbus_message_iter_get_basic(&iter,&num);

			if( num > 0 )
			{
				dbus_message_iter_next(&iter);	
				dbus_message_iter_recurse(&iter,&iter_array);

				for (i = 0; i < num; i++)
				{
					DBusMessageIter iter_struct;

					dbus_message_iter_recurse(&iter_array, &iter_struct);

					dbus_message_iter_get_basic(&iter_struct, &ifIndex);
					dbus_message_iter_next(&iter_struct);

					dbus_message_iter_get_basic(&iter_struct, &nrxBandwidth);
					dbus_message_iter_next(&iter_struct);

					dbus_message_iter_get_basic(&iter_struct, &ntxbandwidth);
					dbus_message_iter_next(&iter_struct);

					dbus_message_iter_next(&iter_array);

					struct flow_data_list *temp = (struct flow_data_list *)malloc(sizeof(struct flow_data_list));
					if(NULL == temp)
						continue;

					memset(temp, 0, sizeof(struct flow_data_list));

					temp->ltdata.rtdata.index = ifIndex;
					temp->ltdata.rxsample = nrxBandwidth;
					temp->ltdata.txsample = ntxbandwidth;

					temp->next = tempList;
					tempList = temp;
                    
				}
			}
		}
		
	}

	*resList = tempList;

	dbus_message_unref(reply);

	return iRet;
}

int 
dbus_get_radius_req_info(DBusConnection *connection, struct radius_req_rate **radiusReq_array, unsigned int *radiusReq_num)
{
    if(NULL == connection || NULL == radiusReq_array || NULL == radiusReq_num){
		return AS_RTN_PARAM_ERR;
	}
	*radiusReq_array = NULL;
	*radiusReq_num = 0;
	
	DBusError   err;
	DBusMessage *query = NULL;
	DBusMessage *reply = NULL;
    
	DBusMessageIter	 iter;
	DBusMessageIter	 iter_array;	
	
	int iRet = 0;
	int temp_num = 0;
	
	query = dbus_message_new_method_call(
                                        AC_SAMPLE_DBUS_BUSNAME,
                                        AC_SAMPLE_DBUS_OBJPATH,
    						            AC_SAMPLE_DBUS_INTERFACE, 
    						            AC_SAMPLE_DBUS_METHOD_GET_RADIUS_REQ_INFO);
	dbus_error_init(&err);
	
	reply = dbus_connection_send_with_reply_and_block(connection, query, -1, &err);

    dbus_message_unref(query);
    
    if(NULL == reply ) {   
        if(dbus_error_is_set(&err)) {
            dbus_error_free(&err);
        }
        return AS_RTN_DBUS_ERR;
    }
	
	dbus_message_iter_init(reply,&iter);
	dbus_message_iter_get_basic(&iter,&iRet);
	
    dbus_message_iter_next(&iter);
    dbus_message_iter_get_basic(&iter,&temp_num);
	
	if(AS_RTN_OK == iRet && temp_num) {
					    
        struct radius_req_rate *temp_array = (struct radius_req_rate *)calloc(temp_num, sizeof(struct radius_req_rate));
        if(NULL == temp_array) {
            syslog(LOG_WARNING, "dbus_get_radius_req_info: malloc temp_array failed!\n");
            dbus_message_unref(reply);
            return AS_RTN_MALLOC_ERR;
        }

		dbus_message_iter_next(&iter);	
		dbus_message_iter_recurse(&iter,&iter_array);

        int i = 0;    
		for(i = 0; i < temp_num; i++)
		{
			DBusMessageIter iter_struct;
			
			dbus_message_iter_recurse(&iter_array, &iter_struct);
			dbus_message_iter_get_basic(&iter_struct, &(temp_array[i].local_id));
			
			dbus_message_iter_next(&iter_struct);
			dbus_message_iter_get_basic(&iter_struct, &(temp_array[i].instance_id));
			
			dbus_message_iter_next(&iter_struct);
			dbus_message_iter_get_basic(&iter_struct, &(temp_array[i].access_accept_rate));

			dbus_message_iter_next(&iter_array);
		}

		*radiusReq_array = temp_array;
		*radiusReq_num = temp_num;
	}
	
	dbus_message_unref(reply);

	return iRet;
}



#if 0
int dbus_get_interface_flow_info( DBusConnection *conn, 
										char *sample_name,
										int  type,
										unsigned int *latest,
										unsigned int *average,
										unsigned int *max )
{
	if (NULL==sample_name || NULL==*sample_name)
	{
		return AS_RTN_NULL_POINTER;
	}
	char smname[NAME_LEN] = { 0 };
	strcpy(smname,  sample_name);

	switch(type)
	{
		case RECEIVE_FLOW:
		{
			strcat(smname, UPFIX);
			break;
		}
		case TRANS_FLOW:
		{
			strcat(smname, DOWNFIX);
			break;
		}

		default:
			break;
	}

	return dbus_get_sample_info( conn, smname, latest, average, max);
}

#endif

//modified by stephen for cpu rt info
int dbus_get_cpu_rt_stat(DBusConnection *conn, cpu_in_t *final_data)
{
	DBusMessage *query, *reply;
    DBusMessageIter	 iter;
    DBusError err;
    int iRet=0;
	int m = 0;
	syslog(LOG_DEBUG, "start!!!!!!!!!!!!!!!!!!");
	//send a name ,and receive the data;
    query = dbus_message_new_method_call(
                                    AC_SAMPLE_DBUS_BUSNAME,
                                    AC_SAMPLE_DBUS_OBJPATH,
						            AC_SAMPLE_DBUS_INTERFACE, 
						            AC_SAMPLE_DBUS_METHOD_GET_CPU_RT_STAT_INFO );

	dbus_error_init(&err);

	reply = dbus_connection_send_with_reply_and_block ( conn, query, -1, &err );

	dbus_message_unref(query);

	if ( NULL == reply )
  	{   
		  if (dbus_error_is_set(&err))
		  {
			  dbus_error_free(&err);
		  }
		  return AS_RTN_DBUS_ERR;
 	}
	else{
		dbus_message_iter_init(reply, &iter);
		dbus_message_iter_get_basic(&iter, &final_data->cpu_cont);	

		dbus_message_iter_next(&iter);
		dbus_message_iter_get_basic(&iter, &final_data->cpu_average);

		for(m = 0; m < final_data->cpu_cont; m++){
			dbus_message_iter_next(&iter);
			dbus_message_iter_get_basic(&iter, &final_data->cpu_info[m]);
		}



	}
	syslog(LOG_DEBUG, "end!!!!!!!!!!!!!!!!!!");
	dbus_message_unref(reply);
	return 0;




}




int dbus_get_cpu_stat(DBusConnection *conn, cpu_in_t *final_data)
{
    DBusMessage *query, *reply;
    DBusMessageIter	 iter;
    DBusError err;
    int iRet=0;
	int m = 0;
	syslog(LOG_DEBUG, "start!!!!!!!!!!!!!!!!!!");
	//send a name ,and receive the data;
    query = dbus_message_new_method_call(
                                    AC_SAMPLE_DBUS_BUSNAME,
                                    AC_SAMPLE_DBUS_OBJPATH,
						            AC_SAMPLE_DBUS_INTERFACE, 
						            AC_SAMPLE_DBUS_METHOD_GET_CPU_STAT_INFO );

	dbus_error_init(&err);

	reply = dbus_connection_send_with_reply_and_block ( conn, query, -1, &err );

	dbus_message_unref(query);

	if ( NULL == reply )
  	{   
		  if (dbus_error_is_set(&err))
		  {
			  dbus_error_free(&err);
		  }
		  return AS_RTN_DBUS_ERR;
 	}
	else{
		dbus_message_iter_init(reply, &iter);
		dbus_message_iter_get_basic(&iter, &final_data->cpu_cont);	

		dbus_message_iter_next(&iter);
		dbus_message_iter_get_basic(&iter, &final_data->cpu_average);

		for(m = 0; m < final_data->cpu_cont; m++){
			dbus_message_iter_next(&iter);
			dbus_message_iter_get_basic(&iter, &final_data->cpu_info[m]);
		}



	}
	syslog(LOG_DEBUG, "end!!!!!!!!!!!!!!!!!!");
	dbus_message_unref(reply);
	return 0;

	
}







int dbus_get_sample_info( DBusConnection *conn, 
										char *sample_name,
										unsigned int *latest,
										unsigned int *average,
										unsigned int *max )
{
    DBusMessage *query, *reply;
    /*DBusMessageIter	 iter;*/
    DBusError err;
    int iRet=0;

    query = dbus_message_new_method_call(
                                    AC_SAMPLE_DBUS_BUSNAME,
                                    AC_SAMPLE_DBUS_OBJPATH,
						            AC_SAMPLE_DBUS_INTERFACE, 
						            AC_SAMPLE_DBUS_METHOD_GET_SAMPLE_INFO );
    dbus_error_init(&err);
   
	dbus_message_append_args(   query,
								DBUS_TYPE_STRING, &sample_name, 
					            DBUS_TYPE_INVALID );

    reply = dbus_connection_send_with_reply_and_block ( conn, query, -1, &err );

    dbus_message_unref(query);
    
    if ( NULL == reply )
    {   
        if (dbus_error_is_set(&err))
        {
            dbus_error_free(&err);
        }
        return AS_RTN_DBUS_ERR;
    }
    else
    {
        dbus_message_get_args(  reply,
                                &err,
                                DBUS_TYPE_INT32, &iRet,
                                DBUS_TYPE_UINT32, latest,
                                DBUS_TYPE_UINT32, average,
                                DBUS_TYPE_UINT32, max,
                                DBUS_TYPE_INVALID );
    }
    
    
    dbus_message_unref(reply);
    
    return iRet;    
}


int dbus_set_signal_threshold( DBusConnection *conn, 
										char *sample_name,
										unsigned int threshold )
{
    DBusMessage *query, *reply;
    /*DBusMessageIter	 iter;*/
    DBusError err;
    int iRet=0;

    query = dbus_message_new_method_call(
                                    AC_SAMPLE_DBUS_BUSNAME,
                                    AC_SAMPLE_DBUS_OBJPATH,
						            AC_SAMPLE_DBUS_INTERFACE, 
						            AC_SAMPLE_DBUS_METHOD_SET_SIGNAL_THRESHOLD );
    dbus_error_init(&err);
   
	dbus_message_append_args(   query,
								DBUS_TYPE_STRING, &sample_name,
								DBUS_TYPE_UINT32, &threshold,
					            DBUS_TYPE_INVALID );

    reply = dbus_connection_send_with_reply_and_block ( conn, query, -1, &err );

    dbus_message_unref(query);
    
    if ( NULL == reply )
    {   
        if (dbus_error_is_set(&err))
        {
            dbus_error_free(&err);
        }
        return AS_RTN_DBUS_ERR;
    }
    else
    {
        dbus_message_get_args(  reply,
                                &err,
                                DBUS_TYPE_INT32, &iRet,
                                DBUS_TYPE_INVALID );
    }
    
    
    dbus_message_unref(reply);
    
    return iRet;    
}


int dbus_get_signal_threshold( DBusConnection *conn, 
										char *sample_name,
										unsigned int *threshold )
{
    DBusMessage *query, *reply;
    /*DBusMessageIter	 iter;*/
    DBusError err;
    int iRet=0;

    query = dbus_message_new_method_call(
                                    AC_SAMPLE_DBUS_BUSNAME,
                                    AC_SAMPLE_DBUS_OBJPATH,
						            AC_SAMPLE_DBUS_INTERFACE, 
						            AC_SAMPLE_DBUS_METHOD_GET_SIGNAL_THRESHOLD );
    dbus_error_init(&err);
   
	dbus_message_append_args(   query,
								DBUS_TYPE_STRING, &sample_name,
					            DBUS_TYPE_INVALID );

    reply = dbus_connection_send_with_reply_and_block ( conn, query, -1, &err );

    dbus_message_unref(query);
    
    if ( NULL == reply )
    {   
        if (dbus_error_is_set(&err))
        {
            dbus_error_free(&err);
        }
        return AS_RTN_DBUS_ERR;
    }
    else
    {
        dbus_message_get_args(  reply,
                                &err,
                                DBUS_TYPE_INT32, &iRet,
                                DBUS_TYPE_UINT32, threshold,
                                DBUS_TYPE_INVALID );
    }
    
    
    dbus_message_unref(reply);
    
    return iRet;    
}





/*return prev  log level!*/
int dbus_set_debug_level( DBusConnection *conn, 
						  int level )
{

    DBusMessage *query, *reply;
    /*DBusMessageIter	 iter;*/
    DBusError err;
	unsigned int prelevel = 0;
	int iRet=AS_RTN_OK;

    query = dbus_message_new_method_call(
                                    AC_SAMPLE_DBUS_BUSNAME,
                                    AC_SAMPLE_DBUS_OBJPATH,
						            AC_SAMPLE_DBUS_INTERFACE, 
						            AC_SAMPLE_DBUS_METHOD_SET_DEBUG_LEVEL );
    dbus_error_init(&err);
   
	dbus_message_append_args(   query,
								DBUS_TYPE_INT32, &level,
					            DBUS_TYPE_INVALID );

    reply = dbus_connection_send_with_reply_and_block ( conn, query, -1, &err );

    dbus_message_unref(query);
    
    if ( NULL == reply )
    {   
        if (dbus_error_is_set(&err))
        {
            dbus_error_free(&err);
        }
        return AS_RTN_DBUS_ERR;
    }
    else
    {
        dbus_message_get_args(  reply,
                                &err,
                                DBUS_TYPE_INT32, &prelevel,
                                DBUS_TYPE_INVALID );
    }
    
    
    dbus_message_unref(reply);
    
    return iRet;
}





int dbus_send_signale_v( DBusConnection *conn,
								const char *obj_path,
								const char *interface_name,
								const char *signal_name, 
								int first_arg_type,
								va_list var_args  )
{
	int iret = AS_RTN_OK;
	DBusMessage *msg=NULL;
	unsigned int serial = 0;


	msg = dbus_message_new_signal(obj_path, 			/* object name of the signal */
								  interface_name,			/* interface name of the signal */
								  signal_name);		    /* name of the signal */
	if (NULL == msg) 
	{
		return AS_RTN_DBUS_ERR;
	}

	
	dbus_message_append_args_valist ( msg,
									  first_arg_type,
									  var_args );

	if (!dbus_connection_send(conn, msg, &serial)) 
	{
		dbus_message_unref(msg);
		return AS_RTN_DBUS_ERR;
	}
	
	dbus_connection_flush(conn);
	dbus_message_unref(msg);


	return iret;		
}



int dbus_send_signal( 	DBusConnection *conn,
								const char *obj_path,
								const char *interface_name,
								const char *signal_name, 
								int first_arg_type,...)
								
{
	int iret = AS_RTN_OK;
	va_list var_args;	
	

	va_start (var_args, first_arg_type);
	iret = dbus_send_signale_v( conn, 
							obj_path,
							interface_name,
							signal_name,
							first_arg_type,
							var_args );

	va_end (var_args);



	return iret;
}



#if 0

#define AC_SAMPLE_DBUS_BUSNAME_CLIENT      "aw.sample_client"
static DBusConnection *ac_sample_dbus_connection = NULL;


int ac_sample_dbus_init(void)
{
    DBusError 	dbus_error;
    int			ret = 0;

    dbus_connection_set_change_sigpipe (TRUE);

    dbus_error_init (&dbus_error);
    ac_sample_dbus_connection = dbus_bus_get (DBUS_BUS_SYSTEM, &dbus_error);
    if ( NULL == ac_sample_dbus_connection ) 
    {
		//log_err("portal ha get dbus failed,err %s", dbus_error.message);
        return AS_RTN_DBUS_ERR;
    }

    ret = dbus_bus_request_name (ac_sample_dbus_connection, AC_SAMPLE_DBUS_BUSNAME_CLIENT,0, &dbus_error);
    if( -1 == ret )
    {
		    //log_err("portal ha dbus request bus name failed %d\n",ret);		
		    if ( dbus_error_is_set (&dbus_error) ) 
        {
		        //log_err("portal ha dbus request bus name %s with error %s", AC_SAMPLE_DBUS_BUSNAME, dbus_error.message);
            return AS_RTN_DBUS_ERR;
        }
    }
    else 
    {
		    //log_dbg("portal ha dbus request bus name %s ok\n", AC_SAMPLE_DBUS_BUSNAME);
    }
	
    return AS_RTN_OK;
}




int main()
{
    DBusMessage *query, *reply;	
    /*DBusMessageIter	 iter;*/
    DBusError err; 
    //int test = 1;
    char test[] = "hello";
    int  testlen=sizeof(test);
    int i;
    int iRet = 0;

    ac_sample_dbus_init();
    
#if 0    
    if( AS_RTN_OK != dbus_set_sample_interval( ac_sample_dbus_connection,        
                                                   20 ) )
    {
        printf("dbus_set_sample_interval failed!\n");
    }
#endif    
    
    if( AS_RTN_OK != dbus_set_sample_param( ac_sample_dbus_connection, 
                                AC_SAMPLE_PARAM_TYPE_STATISTICS,
                                100 ) )
    {
        printf("dbus_set_sample_AC_SAMPLE_PARAM_TYPE_STATISTICS failed!\n");
    }

    if( AS_RTN_OK != dbus_set_sample_param( ac_sample_dbus_connection, 
                                AC_SAMPLE_PARAM_TYPE_INTERVAL,
                                10 ) )
    {
        printf("dbus_set_sample_AC_SAMPLE_PARAM_TYPE_STATISTICS failed!\n");
    }

    if( AS_RTN_OK != dbus_set_sample_param( ac_sample_dbus_connection, 
                                AC_SAMPLE_PARAM_TYPE_RESEND_INTERVAL,
                                20 ) )
    {
        printf("AC_SAMPLE_PARAM_TYPE_RESEND_INTERVAL failed!\n");
    }


	{
		unsigned int sample_interval;
		unsigned int statistics_time;
		unsigned int resend_interval;
		
		if( AS_RTN_OK != dbus_get_sample_param( ac_sample_dbus_connection, 
											&sample_interval,
											&statistics_time,
											&resend_interval ) )
		{
			printf("dbus_get_sample_param failed!\n");
		}
		else
		{
			printf("get sample_interval = %d\n", sample_interval );
			printf("get statistics_time = %d\n", statistics_time );
			printf("get resend_interval = %d\n", resend_interval );
		}
	}


dbus_set_debug_level( ac_sample_dbus_connection, 
					  LOG_AT_LEAST_ERR );


/*sample info  get*/
{
	unsigned int latest=0;
	unsigned int average=0;
	unsigned int max=0;
	if( AS_RTN_OK != dbus_get_sample_info( ac_sample_dbus_connection, 
											SAMPLE_NAME_CPU,
											&latest,
											&average,
											&max ) )
	{
        printf("get cpu sample info failed !\n");
	}
	else
	{
		printf("cpu  latest = %d\n", latest);
		printf("cpu  average = %d\n", average);
		printf("cpu  max = %d\n", max);
	}

	dbus_set_debug_level( ac_sample_dbus_connection, 
						  LOG_AT_LEAST_DEBUG );

	if( AS_RTN_OK != dbus_get_sample_info( ac_sample_dbus_connection, 
											SAMPLE_NAME_MEMUSAGE,
											&latest,
											&average,
											&max ) )
	{
        printf("get cpu sample info failed !\n");
	}
	else
	{
		printf("memusage  latest = %d\n", latest);
		printf("memusage  average = %d\n", average);
		printf("memusage  max = %d\n", max);
	}
}


	dbus_set_signal_threshold( ac_sample_dbus_connection, 
										SAMPLE_NAME_CPU,
										5 );

{/*test interface flow */
	struct flow_data_list *resList=NULL;

	if( intflib_getdata(&resList) < 0 )
	{
		printf("intflib_getdata  get intflib_getdata error\n");
	}
	else
	{
		struct flow_data_list *temp;
		
		dbus_get_iface_bandwidth_info( ac_sample_dbus_connection, resList );
		for( temp = resList; temp !=NULL; temp=temp->next )
		{
			printf("temp->name = %s\n", temp->ltdata.ifname);
			printf("temp->index = %d\n", temp->ltdata.rtdata.index);
			printf("temp->rxsample = %llu\n", temp->ltdata.rxsample);
			printf("temp->txsample = %llu\n", temp->ltdata.txsample);
			printf("\n");
		}
	}

}
	

    return 0;
}

#endif

