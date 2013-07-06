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
* ws_pppoe_snp.h
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



#ifndef _WS_PPPOE_SNP_H
#define _WS_PPPOE_SNP_H

#include "ws_init_dbus.h"

#define IFNAMESIZE 16


/*stateΪ"enable"��"disable"*/
extern int config_pppoe_snp_server_cmd(char *state);/*����0��ʾʧ�ܣ�����1��ʾ�ɹ�*/
															/*����-1��ʾbad command parameter*/
															/*����-2��ʾerror*/

/*stateΪ"enable"��"disable"*/
extern int config_pppoe_snooping_enable_cmd(char *if_name,char *state);/*����0��ʾʧ�ܣ�����1��ʾ�ɹ�*/
																				/*����-1��ʾbad command parameter*/
																				/*����-2��ʾInterface name is too long*/
																				/*����-3��ʾif_name is not a ve-interface name*/
																				/*����-4��ʾget local_slot_id error*/
																				/*����-5��ʾerror*/

#endif	

