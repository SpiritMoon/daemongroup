/* cgicTempDir is the only setting you are likely to need
	to change in this file. */

/*******************************************************************************
Copyright (C) Autelan Technology


This software file is owned and distributed by Autelan Technology 
********************************************************************************


THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND 
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE 
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR 
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES 
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; 
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON 
ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS 
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
********************************************************************************
* ws_dcli_ap_group.h
*
*
* CREATOR:
* autelan.software.Network Dep. team
* qiaojie@autelan.com
*
* DESCRIPTION:
*
*
*
*******************************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <fcntl.h> 
#include "ws_dbus_list_interface.h"
#include "ws_init_dbus.h"
//#include "ws_fdb.h"
//#include "ws_dcli_acl.h"
#include <dbus/dbus.h>
#include "wcpss/waw.h"
#include "wcpss/wid/WID.h"
#include "dbus/wcpss/ACDbusDef1.h"
#include "dbus/asd/ASDDbusDef1.h"
//#include "dbus/wcpss/dcli_wid_wtp.h"
//#include "dbus/wcpss/dcli_wid_wlan.h"
//#include "memory.h"
//#include "sysdef/npd_sysdef.h"
//#include "dbus/npd/npd_dbus_def.h"
//#include "wcpss/asd/asd.h"

struct ap_group_list
{
	unsigned int test_id;
	unsigned char *test_name;
	struct ap_group_list *next;
};

extern int ccgi_create_ap_group_cmd(dbus_parameter parameter, DBusConnection *connection, char *ap_g_id, char *ap_g_name);
								/*����1��ʾʧ�ܣ�����0��ʾ�ɹ�������2��ʾunknown id format*/
								/*����3��ʾap_g_id should be 1 to WTP_GROUP_NUM-1������4��ʾname is too long,out of the limit of 64*/
								/*����5��ʾid exist������6��ʾerror*/
extern int ccgi_del_ap_group_cmd(dbus_parameter  parameter, DBusConnection *connection, char *ap_g_id);
								/*����0��ʾ�ɹ�������-1��ʾʧ�ܣ�����-2��ʾunknown id format*/
								/*����-3��ʾap_g_id should be 1 to WTP_GROUP_NUM-1������-4��ʾ(NULL == reply)*/
								/*����-5��ʾWLAN_ID_NOT_EXIST������-6��ʾerror*/

/*operΪ"add"��"delete"*/
/*wtp_id_listΪ"all"��AP ID�б���ʽΪ1,8,9-20,33*/
extern int ccgi_add_del_ap_group_member_cmd(dbus_parameter  parameter, DBusConnection *connection,char *ap_g_id,char *oper,char *wtp_id_list);
								/*����0��ʾ�ɹ�������1��ʾ�ɹ�������-1��ʾָ��Ϊ��*/
								/*����-2��ʾ����ֻ����add��delete;����-3��ʾset wtp list error,like 1,8,9-20,33��*/
								/*����-3��ʾap group id�Ƿ�*/
								/*����-4��ʾap group id  ����ȷ������-5��ʾap group id	�����ڣ�����-6��ʾerror*/

extern void Free_show_group_member_cmd(unsigned int *wtp_list);
/*ֻҪ���ú������͵���Free_show_group_member_cmd()�ͷſռ�*/
extern int ccgi_show_group_member_cmd(dbus_parameter  parameter, DBusConnection *connection,unsigned int id,unsigned int **wtp_list,unsigned int *count);
								   /*����0��ʾʧ�ܣ�����1��ʾ�ɹ�������-1��ʾap group id�Ƿ�*/
extern int ccgi_show_ap_group_cmd(dbus_parameter  parameter, DBusConnection *connection, struct ap_group_list *head);
									/*����-2��ʾap group id does not exist������-3��ʾerror*/


