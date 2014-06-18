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
* ws_dcli_scanlocate.h
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

#ifndef _WS_DCLI_SCANLOCATE_H
#define _WS_DCLI_SCANLOCATE_H

#include "wcpss/waw.h"
#include "wcpss/wid/WID.h"
#include "dbus/wcpss/dcli_wid_wtp.h"
#include "ws_dbus_list_interface.h"

extern void Free_show_wtp_wifi_locate_public_config_all_cmd(struct dcli_wifi_locate_public_config *public_config);
/*ֻҪ���ã���ͨ��Free_show_wtp_wifi_locate_public_config_all_cmd()�ͷſռ�*/
/*frequency:0��ʾ"2.4G"��1��ʾ"5.8G"*/
/*extern int show_wtp_wifi_locate_public_config_all_cmd(int instance_id,unsigned char frequency,struct dcli_wifi_locate_public_config **public_config,unsigned int *wtp_num);*//*����0��ʾʧ�ܣ�����1��ʾ�ɹ�*/


extern int show_wtp_wifi_locate_public_config_all_cmd(dbus_parameter parameter, DBusConnection *connection, struct dcli_wifi_locate_public_config **public_config, long frequency);/*����0��ʾʧ�ܣ�����1��ʾ�ɹ�*/



//extern int set_wifi_locate_change_server_ip_cmd(int instance_id,unsigned char *wtpMac,unsigned int ip,unsigned char channel_flag);/*����0��ʾʧ�ܣ�����1��ʾ�ɹ�*/
extern int set_wifi_locate_change_server_ip_cmd(unsigned int local_id, unsigned int instance_id,unsigned char *wtpMac,unsigned int ip,unsigned char channel_flag, void*connection);/*����0��ʾʧ�ܣ�����1��ʾ�ɹ�*/

/*port�ķ�Χ��1-65535*/
//extern int set_wifi_locate_change_server_port_cmd(int instance_id,unsigned char *wtpMac,unsigned short port,unsigned char channel_flag);
																					/*����0��ʾʧ�ܣ�����1��ʾ�ɹ�*/
																					/*����-1��ʾport  should be 1 to 65535*/
extern int set_wifi_locate_change_server_port_cmd(unsigned int local_id, int instance_id,unsigned char *wtpMac,unsigned short port,unsigned char channel_flag,void* connection);

																					

/*scan_interval�ķ�Χ��0-2000*/
//extern int set_wifi_locate_change_channel_scan_interval_cmd(int instance_id,unsigned char *wtpMac,unsigned short scan_interval,unsigned char channel_flag);
																					/*����0��ʾʧ�ܣ�����1��ʾ�ɹ�*/
																					/*����-1��ʾscan_interval  should be 0 to 2000*/

extern int set_wifi_locate_change_channel_scan_interval_cmd(unsigned int local_id, int instance_id,unsigned char *wtpMac,unsigned short scan_interval,unsigned char channel_flag,void* connection);
																					

/*scan_time�ķ�Χ��1-2000*/
//extern int set_wifi_locate_change_channel_scan_time_cmd(int instance_id,unsigned char *wtpMac,unsigned short scan_time,unsigned char channel_flag);
																					/*����0��ʾʧ�ܣ�����1��ʾ�ɹ�*/
																					/*����-1��ʾscan_time  should be 1 to 2000*/
extern int set_wifi_locate_change_channel_scan_time_cmd(unsigned int local_id,int instance_id,unsigned char *wtpMac,unsigned short scan_time,unsigned char channel_flag,void* connection);

//extern int set_wifi_locate_change_channellist_cmd(int instance_id,unsigned char *wtpMac,unsigned long long channellist,unsigned char channel_flag);/*����0��ʾʧ�ܣ�����1��ʾ�ɹ�*/

extern int set_wifi_locate_change_channellist_cmd(unsigned int local_id,int instance_id,unsigned char *wtpMac,unsigned long long channellist,unsigned char channel_flag, void*connection);/*����0��ʾʧ�ܣ�����1��ʾ�ɹ�*/

/*scan_type�ķ�Χ��0-2*/
/*0:All; 1:Associate; 2:NonAssociated*/
//extern int set_wifi_locate_change_scan_type_cmd(int instance_id,unsigned char *wtpMac,unsigned char scan_type,unsigned char channel_flag);
																					/*����0��ʾʧ�ܣ�����1��ʾ�ɹ�*/
																				    /*����-1��ʾscan_type  should be 0 to 2*/
extern int set_wifi_locate_change_scan_type_cmd(unsigned int local_id,int instance_id,unsigned char *wtpMac,unsigned char scan_type,unsigned char channel_flag,void*connection);

/*report_interval�ķ�Χ��1000-20000*/
//extern int set_wifi_locate_change_report_interval_cmd(int instance_id,unsigned char *wtpMac,unsigned short report_interval,unsigned char channel_flag);
																					/*����0��ʾʧ�ܣ�����1��ʾ�ɹ�*/
																				    /*����-1��ʾreport_interval  should be 1000 to 20000*/

extern int set_wifi_locate_change_report_interval_cmd(unsigned int local_id,int instance_id,unsigned char *wtpMac,unsigned short report_interval,unsigned char channel_flag,void* connection);


/*report_interval�ķ�Χ��0-95*/
//extern int set_wifi_locate_change_rssi_cmd(int instance_id,unsigned char *wtpMac,unsigned char rssi,unsigned char channel_flag);
																					/*����0��ʾʧ�ܣ�����1��ʾ�ɹ�*/
																				    /*����-1��ʾrssi	should be 0 to 95*/
extern int set_wifi_locate_change_rssi_cmd(unsigned int local_id,int instance_id,unsigned char *wtpMac,unsigned char rssi,unsigned char channel_flag,void* connection);
/*isenable�ķ�Χ��0-1*/
/*0:off; 1:on*/



//extern int set_wifi_locate_change_on_off_cmd(int instance_id,unsigned char *wtpMac,unsigned char isenable,unsigned char channel_flag);
																					/*����0��ʾʧ�ܣ�����1��ʾ�ɹ�*/
																				    /*����-1��ʾisenable  should be 0 to 1*/
extern int set_wifi_locate_change_on_off_cmd(unsigned int local_id,int instance_id,unsigned char *wtpMac,unsigned char isenable,unsigned char channel_flag,void*connection);

/*port�ķ�Χ��1-65535*/
/*scan_interval�ķ�Χ��0-2000*/
/*scan_time�ķ�Χ��1-2000*/
/*scan_type�ķ�Χ��0-2*/
/*report_interval�ķ�Χ��1000-20000*/
/*report_interval�ķ�Χ��0-95*/
/*isenable�ķ�Χ��0-1*/
extern int set_wifi_locate_public_para_cmd(unsigned int local_id,int instance_id,unsigned char *wtpMac,unsigned int ip,
										unsigned short port,unsigned short scan_interval,
										unsigned short scan_time,unsigned long long channellist,
										unsigned char scan_type,unsigned short report_interval,
										unsigned char rssi,unsigned char isenable,
										unsigned char channel_flag,void* connection);/*����0��ʾʧ�ܣ�����1��ʾ�ɹ�*/
															    /*����-1��ʾport  should be 1 to 65535*/
															    /*����-2��ʾscan_interval  should be 0 to 2000*/
															    /*����-3��ʾscan_time  should be 1 to 2000*/
															    /*����-4��ʾscan_type  should be 0 to 2*/
															    /*����-5��ʾreport_interval	should be 1000 to 20000*/
															    /*����-6��ʾrssi  should be 0 to 95*/
															    /*����-7��ʾisenable  should be 0 to 1*/

/*isenable�ķ�Χ��0-1*/
/*0:off; 1:on*/
//extern int set_wifi_locate_change_on_off_all_wtp_cmd(int instance_id,unsigned char isenable,unsigned char channel_flag);
																				/*����0��ʾʧ�ܣ�����1��ʾ�ɹ�*/
																			    /*����-1��ʾisenable  should be 0 to 1*/
extern int set_wifi_locate_change_on_off_all_wtp_cmd(unsigned int local_id,int instance_id,unsigned char isenable,unsigned char channel_flag,void* connection);

#endif

