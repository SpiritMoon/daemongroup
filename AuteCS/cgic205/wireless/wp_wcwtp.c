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
* wp_wcwtp.c
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
#include "cgic.h"
#include <string.h>
#include <stdlib.h>
#include "ws_usrinfo.h"
#include "ws_err.h"
#include "ws_ec.h"
#include "wcpss/wid/WID.h"
#include "ws_dcli_ac.h"
#include "ws_dcli_vrrp.h"
#include "ws_init_dbus.h"
#include "ws_dbus_list_interface.h"


int ShowACconPage(char *m,struct list *lpublic,struct list *lwcontrol);    
void ACConfig(instance_parameter *ins_para,struct list *lpublic,struct list *lwcontrol);

int cgiMain()
{  
  char encry[BUF_LEN] = { 0 }; 
  char *str = NULL;
  struct list *lpublic = NULL;   /*����public.txt�ļ�������ͷ*/
  struct list *lwcontrol = NULL;     /*����wlan.txt�ļ�������ͷ*/  
  lpublic=get_chain_head("../htdocs/text/public.txt");
  lwcontrol=get_chain_head("../htdocs/text/wcontrol.txt");
  
  DcliWInit();
  ccgi_dbus_init();
  memset(encry,0,sizeof(encry));  
  if(cgiFormStringNoNewlines("UN", encry, BUF_LEN)!=cgiFormNotFound )  /*�״ν����ҳ*/
  {
  	;
  }  
  else
  {  
    cgiFormStringNoNewlines("encry_conac",encry,BUF_LEN);
  }
  str=dcryption(encry);
  if(str==NULL)
	ShowErrorPage(search(lpublic,"ill_user"));			  /*�û��Ƿ�*/
  else
  	ShowACconPage(encry,lpublic,lwcontrol);
  release(lpublic);  
  release(lwcontrol);
  destroy_ccgi_dbus();
  return 0;
}

int ShowACconPage(char *m,struct list *lpublic,struct list *lwcontrol)
{  
  int i = 0,result = 0;
  DCLI_AC_API_GROUP_FIVE *wirelessconfig = NULL;
  wireless_config *head = NULL;
  char clog_swith[2][4] = {"OFF","ON"};
  char select_insid[10] = { 0 };
  instance_parameter *paraHead1 = NULL,*paraHead2 = NULL;
  instance_parameter *pq = NULL;
  char temp[10] = { 0 };
  dbus_parameter ins_para;
  cgiHeaderContentType("text/html");
  fprintf(cgiOut,"<html xmlns=\"http://www.w3.org/1999/xhtml\"><head>");
  fprintf(cgiOut,"<meta http-equiv=Content-Type content=text/html; charset=gb2312>");
  fprintf(cgiOut,"<title>ACConfig</title>");
  fprintf(cgiOut,"<link rel=stylesheet href=/style.css type=text/css>"\
  "</head>"\
      "<script src=/instanceid_onchange.js>"\
  	  "</script>"\
  "<body>");
  memset(select_insid,0,sizeof(select_insid));
  cgiFormStringNoNewlines( "INSTANCE_ID", select_insid, 10 );
  if(strcmp(select_insid,"")==0)
  { 
	list_instance_parameter(&paraHead1, INSTANCE_STATE_WEB); 
	if(paraHead1)
	{
		snprintf(select_insid,sizeof(select_insid)-1,"%d-%d-%d",paraHead1->parameter.slot_id,paraHead1->parameter.local_id,paraHead1->parameter.instance_id);
	}
  }  
  else
  {
	get_slotID_localID_instanceID(select_insid,&ins_para);	
	get_instance_dbus_connection(ins_para, &paraHead1, INSTANCE_STATE_WEB);
  }
  if(cgiFormSubmitClicked("ac_con") == cgiFormSuccess)
  {
  	if(paraHead1)
	{
		ACConfig(paraHead1,lpublic,lwcontrol);
	}
  }
	fprintf(cgiOut,"<form>"\
  "<div align=center>"\
  "<table width=976 border=0 cellpadding=0 cellspacing=0>"\
  "<tr>"\
    "<td width=8 align=left valign=top background=/images/di22.jpg><img src=/images/youce4.jpg width=8 height=30/></td>"\
    "<td width=51 align=left valign=bottom background=/images/di22.jpg><img src=/images/youce33.jpg width=37 height=24/></td>"\
    "<td width=300 align=left valign=bottom id=%s background=/images/di22.jpg>%s</td>"\
    "<td width=590 align=right valign=bottom background=/images/di22.jpg>",search(lpublic,"title_style"),search(lwcontrol,"adv_conf"));
	  
    	  fprintf(cgiOut,"<table width=155 border=0 cellspacing=0 cellpadding=0>"\
          "<tr>"\
          "<td width=62 align=center><input id=but type=submit name=ac_con style=background-image:url(/images/%s) value=""></td>",search(lpublic,"img_ok"));			  
     		fprintf(cgiOut,"<td width=62 align=center><a href=wp_wlan.cgi?UN=%s target=mainFrame><img src=/images/%s border=0 width=62 height=20/></a></td>",m,search(lpublic,"img_cancel"));
		  fprintf(cgiOut,"</tr>"\
          "</table>");
      fprintf(cgiOut,"</td>"\
    "<td width=74 align=right valign=top background=/images/di22.jpg><img src=/images/youce3.jpg width=31 height=30/></td>"\
  "</tr>"\
  "<tr>"\
    "<td colspan=5 align=center valign=middle><table width=976 border=0 cellpadding=0 cellspacing=0 bgcolor=#f0eff0>"\
      "<tr>"\
        "<td width=12 align=left valign=top background=/images/di888.jpg>&nbsp;</td>"\
        "<td width=948><table width=947 border=0 cellspacing=0 cellpadding=0>"\
            "<tr height=4 valign=bottom>"\
              "<td width=120>&nbsp;</td>"\
              "<td width=827 valign=bottom><img src=/images/bottom_05.gif width=827 height=4/></td>"\
            "</tr>"\
            "<tr>"\
              "<td><table width=120 border=0 cellspacing=0 cellpadding=0>"\
                   "<tr height=25>"\
                    "<td id=tdleft>&nbsp;</td>"\
                  "</tr>");	          
					fprintf(cgiOut,"<tr height=25>"\
					  "<td align=left id=tdleft><a href=wp_wcsumary.cgi?UN=%s target=mainFrame class=top><font id=%s>%s</font></a></td>",m,search(lpublic,"menu_san"),search(lwcontrol,"wc_info"));                       
                    fprintf(cgiOut,"</tr>");
  				    fprintf(cgiOut,"<tr height=26>"\
                      "<td align=left id=tdleft background=/images/bottom_bg.gif style=\"border-right:0\"><font id=%s>%s</font></td>",search(lpublic,"menu_san"),search(lwcontrol,"wc_config"));   /*ͻ����ʾ*/
					fprintf(cgiOut,"<tr height=25>"\
				      "<td align=left id=tdleft><a href=wp_apsumary.cgi?UN=%s target=mainFrame class=top><font id=%s>%s</font></a></td>",m,search(lpublic,"menu_san"),search(lwcontrol,"ap_info"));                       
				    fprintf(cgiOut,"</tr>");
				    fprintf(cgiOut,"<tr height=25>"\
					  "<td align=left id=tdleft><a href=wp_apcon.cgi?UN=%s target=mainFrame class=top><font id=%s>%s</font></a></td>",m,search(lpublic,"menu_san"),search(lwcontrol,"ap_config")); 					
				    fprintf(cgiOut,"</tr>");
					fprintf(cgiOut,"</tr>");
					fprintf(cgiOut,"<tr height=25>"\
  					  "<td align=left id=tdleft><a href=wp_rrmsumary.cgi?UN=%s target=mainFrame class=top><font id=%s>%s</font></a></td>",m,search(lpublic,"menu_san"),search(lwcontrol,"rrm_info"));                       
 				    fprintf(cgiOut,"</tr>");
					fprintf(cgiOut,"<tr height=25>"\
  					  "<td align=left id=tdleft><a href=wp_rrmcon.cgi?UN=%s target=mainFrame class=top><font id=%s>%s</font></a></td>",m,search(lpublic,"menu_san"),search(lwcontrol,"rrm_config"));                       
   					fprintf(cgiOut,"</tr>");
					fprintf(cgiOut,"<tr height=25>"\
  					  "<td align=left id=tdleft><a href=wp_wcapill.cgi?UN=%s target=mainFrame class=top><font id=%s>%s</font><font id=yingwen_san>AP</font><font id=%s>%s</font></a></td>",m,search(lpublic,"menu_san"),search(lwcontrol,"illegal"),search(lpublic,"menu_san"),search(lwcontrol,"list"));                       
 				    fprintf(cgiOut,"</tr>");
                  for(i=0;i<1;i++)
	              {
  				    fprintf(cgiOut,"<tr height=25>"\
                      "<td id=tdleft>&nbsp;</td>"\
                    "</tr>");
	              }
				  if(paraHead1)
				  {
					  result = show_wc_config(paraHead1->parameter,paraHead1->connection,&wirelessconfig);		
				  }
                fprintf(cgiOut,"</table>"\
              "</td>"\
              "<td align=left style=\"background-color:#ffffff; border-right:1px solid #707070; padding-left:30px; padding-top:12px\">"\
          "<table width=450 border=0 cellspacing=0 cellpadding=0>"\
          "<tr height=30>"\
		   "<td>%s ID:</td>",search(lpublic,"instance"));
		   fprintf(cgiOut,"<td colspan=2>"\
			"<select name=instance_id id=instance_id style=width:72px onchange=instanceid_change(this,\"wp_wcwtp.cgi\",\"%s\")>",m);
			list_instance_parameter(&paraHead2, INSTANCE_STATE_WEB);    
			for(pq=paraHead2;(NULL != pq);pq=pq->next)
			{
			   memset(temp,0,sizeof(temp));
			   snprintf(temp,sizeof(temp)-1,"%d-%d-%d",pq->parameter.slot_id,pq->parameter.local_id,pq->parameter.instance_id);
			
			   if(strcmp(select_insid,temp) == 0)
				 fprintf(cgiOut,"<option value='%s' selected=selected>%s",temp,temp);
			   else
				 fprintf(cgiOut,"<option value='%s'>%s",temp,temp);
			}			
			free_instance_parameter_list(&paraHead2);
			fprintf(cgiOut,"</select>"\
		   "</td>"\
	      "</tr>"\
		  "<tr height=30>"\
		    "<td width=150>%s:</td>",search(lwcontrol,"mtu"));
		fprintf(cgiOut,"<td width=150 align=left><input type=text name=mtu maxLength=4 onkeypress=\"return event.keyCode>=48&&event.keyCode<=57\"></td>"\
		    "<td width=150><font color=red>(500--1500)</font></td>");
		  fprintf(cgiOut,"</tr>"\
		     "<tr height=30>"\
		    "<td width=150>%s:</td>",search(lwcontrol,"log_switch"));
		    if((result == 1)&&((wirelessconfig != NULL)&&(wirelessconfig->wireless_control != NULL)))
			{
				head = wirelessconfig->wireless_control;
				if(strcmp(clog_swith[head->log_switch],"ON")==0)
				{
					fprintf(cgiOut,"<td width=150 align=left><input name=log type=radio value=ON checked=checked >%s</td>",search(lwcontrol,"open"));
					fprintf(cgiOut,"<td><input type=radio name=log value=OFF >%s</td>",search(lwcontrol,"close"));
				}
				else
				{
					fprintf(cgiOut,"<td width=150 align=left><input name=log type=radio value=ON>%s</td>",search(lwcontrol,"open"));
					fprintf(cgiOut,"<td><input type=radio name=log value=OFF checked=checked >%s</td>",search(lwcontrol,"close"));
				}		
			}
			else
			{
				fprintf(cgiOut,"<td width=150 align=left><input name=log type=radio value=ON>%s</td>",search(lwcontrol,"open"));
				fprintf(cgiOut,"<td><input type=radio name=log value=OFF checked=checked >%s</td>",search(lwcontrol,"close"));
			}	
				
		 fprintf(cgiOut,"</tr>");
		fprintf(cgiOut,"<tr height=30>"\
				 "<td width=150>%s:</td>",search(lwcontrol,"log_size"));
		fprintf(cgiOut,"<td width=150 align=left><input type=text name=log_size maxLength=9 onkeypress=\"return event.keyCode>=48&&event.keyCode<=57\"></td>"\
				 "<td width=150><font color=red>(1000000--500000000)</font></td>");
		fprintf(cgiOut,"</tr>"\
		"<tr height=30>"\
		    "<td width=150>%s:</td>",search(lwcontrol,"ap_static_state"));
		    if((result == 1)&&((wirelessconfig != NULL)&&(wirelessconfig->wireless_control != NULL)))
			{
				head = wirelessconfig->wireless_control;
				if(head->apstaticstate == 1)
				{
					fprintf(cgiOut,"<td width=150 align=left><input name=ap_static_state type=radio value=\"1\" checked=checked >%s</td>",search(lwcontrol,"open"));
					fprintf(cgiOut,"<td><input type=radio name=ap_static_state value=\"0\">%s</td>",search(lwcontrol,"close"));
				}
				else
				{
					fprintf(cgiOut,"<td width=150 align=left><input name=ap_static_state type=radio value=\"1\">%s</td>",search(lwcontrol,"open"));
					fprintf(cgiOut,"<td><input type=radio name=ap_static_state value=\"0\" checked=checked >%s</td>",search(lwcontrol,"close"));
				}		
			}
			else
			{
				fprintf(cgiOut,"<td width=150 align=left><input name=ap_static_state type=radio value=\"1\">%s</td>",search(lwcontrol,"open"));
				fprintf(cgiOut,"<td><input type=radio name=ap_static_state value=\"0\" checked=checked >%s</td>",search(lwcontrol,"close"));
			}	
				
		 fprintf(cgiOut,"</tr>"\
		 "<tr height=30>"\
		    "<td width=150>%s:</td>",search(lwcontrol,"ac_exten_infor_switch"));
		    if((result == 1)&&((wirelessconfig != NULL)&&(wirelessconfig->wireless_control != NULL)))
			{
				head = wirelessconfig->wireless_control;
				if(head->g_ac_all_extention_information_switch == 1)
				{
					fprintf(cgiOut,"<td width=150 align=left><input name=ac_exten_infor_switch type=radio value=\"enable\" checked=checked >%s</td>",search(lwcontrol,"open"));
					fprintf(cgiOut,"<td><input type=radio name=ac_exten_infor_switch value=\"disable\">%s</td>",search(lwcontrol,"close"));
				}
				else
				{
					fprintf(cgiOut,"<td width=150 align=left><input name=ac_exten_infor_switch type=radio value=\"enable\">%s</td>",search(lwcontrol,"open"));
					fprintf(cgiOut,"<td><input type=radio name=ac_exten_infor_switch value=\"disable\" checked=checked >%s</td>",search(lwcontrol,"close"));
				}		
			}
			else
			{
				fprintf(cgiOut,"<td width=150 align=left><input name=ac_exten_infor_switch type=radio value=\"enable\">%s</td>",search(lwcontrol,"open"));
				fprintf(cgiOut,"<td><input type=radio name=ac_exten_infor_switch value=\"disable\" checked=checked >%s</td>",search(lwcontrol,"close"));
			}	
				
		 fprintf(cgiOut,"</tr>"\
		"<tr height=30>"\
				 "<td width=150>%s:</td>",search(lwcontrol,"neidead_inter"));
		fprintf(cgiOut,"<td width=150 align=left><input type=text name=neidead_inter maxLength=4 onkeypress=\"return event.keyCode>=48&&event.keyCode<=57\"></td>"\
				 "<td width=150><font color=red>(20--2000)%s</font></td>",search(lpublic,"second"));
		fprintf(cgiOut,"</tr>"\
		  "<tr>"\
		    "<td><input type=hidden name=encry_conac value=%s></td>",m);
		    fprintf(cgiOut,"<td colspan=2><input type=hidden name=INSTANCE_ID value=%s></td>",select_insid);
		  fprintf(cgiOut,"</tr>"\
		"</table>"\

		  
              "</td>"\
            "</tr>"\
            "<tr height=4 valign=top>"\
              "<td width=120 height=4 align=right valign=top><img src=/images/bottom_07.gif width=1 height=10/></td>"\
              "<td width=827 height=4 valign=top bgcolor=#FFFFFF><img src=/images/bottom_06.gif width=827 height=15/></td>"\
            "</tr>"\
          "</table>"\
        "</td>"\
        "<td width=15 background=/images/di999.jpg>&nbsp;</td>"\
      "</tr>"\
    "</table></td>"\
  "</tr>"\
  "<tr>"\
    "<td colspan=3 align=left valign=top background=/images/di777.jpg><img src=/images/di555.jpg width=61 height=62/></td>"\
    "<td align=left valign=top background=/images/di777.jpg>&nbsp;</td>"\
    "<td align=left valign=top background=/images/di777.jpg><img src=/images/di666.jpg width=74 height=62/></td>"\
  "</tr>"\
"</table>"\
"</div>"\
"</form>"\
"</body>"\
"</html>");
if(result == 1)
{
  Free_wc_config(wirelessconfig);
}
free_instance_parameter_list(&paraHead1);
return 0;
}


void ACConfig(instance_parameter *ins_para,struct list *lpublic,struct list *lwcontrol)
{
	int ret = 0; 
    int flag = 1;
	char *endptr = NULL; 
    char mtu[20] = { 0 };
    char log_stat[20] = { 0 };
    char log_size[20] = { 0 };
	char ap_static_state[5] = { 0 };
	int static_state = 0;
	char ac_exten_infor_switch[10] = { 0 };
	char neidead_inter[10] = { 0 };

	/***********************set wid max mtu*****************************/	
    memset(mtu,0,sizeof(mtu));
	cgiFormStringNoNewlines("mtu",mtu,20);   
    if(strcmp(mtu,"")!=0)
  	{
		ret = config_wireless_max_mtu(ins_para->parameter,ins_para->connection,mtu);
		switch(ret)
		{
			case -1:ShowAlert(search(lwcontrol,"mtu_num"));
					flag = 0;
					break;
			case 1: break;
			case -2:ShowAlert(search(lpublic,"oper_fail"));
					flag = 0;
					break;
				
		}
    }


    /***********************set wid log switch*****************************/		
    memset(log_stat,0,sizeof(log_stat));
    cgiFormStringNoNewlines("log",log_stat,20); 
	if(strcmp(log_stat,"")!=0)	
	{
		ret = set_wid_log_switch_cmd(ins_para->parameter,ins_para->connection,log_stat);
		switch(ret)
		{
			case 1:break;
			case -1:ShowAlert(search(lpublic,"oper_fail"));
					flag = 0;
					break;
		}
	}


	/***********************set wid log switch*****************************/		
    memset(log_size,0,sizeof(log_size));
	cgiFormStringNoNewlines("log_size",log_size,20); 
	if(strcmp(log_size,"")!=0)	
 	{
		ret = set_wid_log_size_cmd(ins_para->parameter,ins_para->connection,log_size);
		switch(ret)
		{
			case -1:flag = 0;
				    ShowAlert(search(lwcontrol,"log_num"));
				    break;
			case 1:break;
			case -2:flag = 0;
					ShowAlert(search(lpublic,"oper_fail"));
					break;
		}
 	}

	/***********************set ap statistics switch*****************************/		
    memset(ap_static_state,0,sizeof(ap_static_state));
	cgiFormStringNoNewlines("ap_static_state",ap_static_state,5); 
	if(strcmp(ap_static_state,"")!=0)	
 	{
 		static_state = strtoul(ap_static_state,&endptr,10);
		ret = set_ap_statistics(ins_para->parameter,ins_para->connection,static_state);
		switch(ret)
		{
			case SNMPD_CONNECTION_ERROR:
			case 0:flag = 0;
				   ShowAlert(search(lwcontrol,"con_static_state_fail"));
				    break;
			case 1:break;
			case -1:flag = 0;
					ShowAlert(search(lpublic,"error"));
					break;
		}
 	}


	/***********************set all ap extension information switch*****************************/		
    memset(ac_exten_infor_switch,0,sizeof(ac_exten_infor_switch));
	cgiFormStringNoNewlines("ac_exten_infor_switch",ac_exten_infor_switch,10); 
	if(strcmp(ac_exten_infor_switch,"")!=0)	
 	{
		ret = set_ac_all_ap_extension_information_enable_cmd(ins_para->parameter,ins_para->connection,ac_exten_infor_switch);
		switch(ret)
		{
			case SNMPD_CONNECTION_ERROR:
			case 0:flag = 0;
				   ShowAlert(search(lwcontrol,"con_ac_exten_infor_switch_fail"));
				    break;
			case 1:break;
			case -1:flag = 0;
					ShowAlert(search(lpublic,"input_para_illegal"));
					break;
			case -2:flag = 0;
					ShowAlert(search(lpublic,"error"));
					break;
		}
 	}
	

	/***********************set neighbordead interval cmd func*****************************/		
    memset(neidead_inter,0,sizeof(neidead_inter));
	cgiFormStringNoNewlines("neidead_inter",neidead_inter,10); 
	if(strcmp(neidead_inter,"")!=0)	
 	{
		ret = set_neighbordead_interval_cmd_func(ins_para->parameter,ins_para->connection,neidead_inter);
		switch(ret)
		{
		 	case SNMPD_CONNECTION_ERROR:
			case 0:flag = 0;
				   ShowAlert(search(lwcontrol,"set_neidead_inter_fail"));
				   break;
			case 1:break;
			case -1:flag = 0;
					ShowAlert(search(lwcontrol,"neidead_inter_illegal"));
					break;
			case -2:flag = 0;
					ShowAlert(search(lpublic,"error"));
					break;
		}
 	}

    if(flag == 1)
  	{
		ShowAlert(search(lpublic,"oper_succ"));
  	}
}

