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
* wp_stp.c
*
*
* CREATOR:
* autelan.software.Network Dep. team
* zhouym@autelan.com
*
* DESCRIPTION:
* system contrl for stp brige info 
*
*
*******************************************************************************/
#include <stdio.h>
#include "cgic.h"
#include <string.h>
#include <stdlib.h>
#include "ws_usrinfo.h"
#include "ws_ec.h"
#include "ws_err.h"
#include "ws_init_dbus.h"
#include "ws_stp.h"



int ShowStpPage(struct list *lpublic,struct list *lcon);

int cgiMain()
{
	struct list *lpublic;	/*解析public.txt文件的链表头*/
	struct list *lcon;	   /*解析control.txt文件的链表头*/	
	lpublic=get_chain_head("../htdocs/text/public.txt");
	lcon=get_chain_head("../htdocs/text/control.txt");

    ShowStpPage(lpublic,lcon);
	release(lpublic);  
	release(lcon);

 	return 0;
}

int ShowStpPage(struct list *lpublic,struct list *lcon)
{
	  char *encry=(char *)malloc(BUF_LEN);				/*存储从wp_usrmag.cgi带入的加密字符串*/
	  char *str=NULL;
	  
	  char stp_encry[BUF_LEN]; 
	  bridge_info br_info;
	  memset(br_info.root_br_mac,0,sizeof(br_info.root_br_mac));
	  memset(br_info.design_br_mac,0,sizeof(br_info.design_br_mac));
	  int i;


      if(cgiFormSubmitClicked("submit_stp") != cgiFormSuccess)
      {
 			 memset(encry,0,BUF_LEN);
 			 cgiFormStringNoNewlines("UN", encry, BUF_LEN); 
 			 str=dcryption(encry);
 			 if(str==NULL)
 			 {
	 			   ShowErrorPage(search(lpublic,"ill_user"));	 /*用户非法*/
	 			   return 0;
 			 }
 			memset(stp_encry,0,BUF_LEN); 				  /*清空临时变量*/
	  }
		memset(stp_encry,0,BUF_LEN); 				  /*清空临时变量*/
		cgiFormStringNoNewlines("stp_encry",stp_encry,BUF_LEN);
		cgiHeaderContentType("text/html");
		fprintf(cgiOut,"<html xmlns=\"http://www.w3.org/1999/xhtml\"><head>");
		fprintf(cgiOut,"<meta http-equiv=Content-Type content=text/html; charset=gb2312>");
		fprintf(cgiOut,"<title>%s</title>",search(lcon,"stp_man"));
		fprintf(cgiOut,"<link rel=stylesheet href=/style.css type=text/css>"\
		  "<style type=text/css>"\
		  ".a3{width:30;border:0; text-align:center}"\
		  "</style>"\
		"</head>"\
		"<script src=/ip.js>"\
		"</script>"\
		"<body>");

	
	
	  fprintf(cgiOut,"<form method=post >"\
	  "<div align=center>"\
	  "<table width=976 border=0 cellpadding=0 cellspacing=0>"\
	  "<tr>"\
		"<td width=8 align=left valign=top background=/images/di22.jpg><img src=/images/youce4.jpg width=8 height=30/></td>"\
		"<td width=51 align=left valign=bottom background=/images/di22.jpg><img src=/images/youce33.jpg width=37 height=24/></td>"\
		"<td width=153 align=left valign=bottom background=/images/di22.jpg><font id=titleen>RSTP</font><font id=%s> %s</font></td>",search(lpublic,"title_style"),search(lpublic,"management"));
		fprintf(cgiOut,"<td width=690 align=right valign=bottom background=/images/di22.jpg>");
			
				
			  fprintf(cgiOut,"<table width=130 border=0 cellspacing=0 cellpadding=0>"\
			  "<tr>"\
			  "<td width=62 align=center><input id=but type=submit name=submit_stp style=background-image:url(/images/%s) value=""></td>",search(lpublic,"img_ok"));		  
			  if(cgiFormSubmitClicked("submit_stp") != cgiFormSuccess)
				fprintf(cgiOut,"<td width=62 align=left><a href=wp_contrl.cgi?UN=%s target=mainFrame><img src=/images/%s border=0 width=62 height=20/></a></td>",encry,search(lpublic,"img_cancel"));
			  else										   
				fprintf(cgiOut,"<td width=62 align=left><a href=wp_contrl.cgi?UN=%s target=mainFrame><img src=/images/%s border=0 width=62 height=20/></a></td>",stp_encry,search(lpublic,"img_cancel"));
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
					  int retu=checkuser_group(str);
						if(cgiFormSubmitClicked("submit_stp") != cgiFormSuccess)
						{
							if(retu==0)  /*管理员*/
							{
    							fprintf(cgiOut,"<tr height=26>"\
    							  "<td align=left id=tdleft background=/images/bottom_bg.gif style=\"border-right:0\"><font id=%s>%s</font></td>",search(lpublic,"menu_san"),search(lcon,"br_info"));   /*突出显示*/
    							fprintf(cgiOut,"</tr>");
    							fprintf(cgiOut,"<tr height=25>"\
    							  "<td align=left id=tdleft><a href=wp_config_stp_bridge.cgi?UN=%s target=mainFrame class=top><font id=%s>%s</font></a></td>",encry,search(lpublic,"menu_san"),search(lcon,"br_conf"));
    							fprintf(cgiOut,"</tr>"\
    							"<tr height=25>"\
    							  "<td align=left id=tdleft><a href=wp_show_port.cgi?UN=%s target=mainFrame class=top><font id=%s>%s</font></a></td>",encry,search(lpublic,"menu_san"),search(lcon,"port_info"));
    							fprintf(cgiOut,"</tr>"\
    							"<tr height=25>"\
    							  "<td align=left id=tdleft><a href=wp_config_stp_port.cgi?UN=%s target=mainFrame class=top><font id=%s>%s</font></a></td>",encry,search(lpublic,"menu_san"),search(lcon,"port_conf"));
    							fprintf(cgiOut,"</tr>");
							}
							else
							{
								fprintf(cgiOut,"<tr height=26>"\
     							"<td align=left id=tdleft background=/images/bottom_bg.gif style=\"border-right:0\"><font id=%s>%s</font></td>",search(lpublic,"menu_san"),search(lcon,"br_info"));   /*突出显示*/
     							fprintf(cgiOut,"</tr>"\
     							"<tr height=25>"\
     							  "<td align=left id=tdleft><a href=wp_show_port.cgi?UN=%s target=mainFrame class=top><font id=%s>%s</font></a></td>",encry,search(lpublic,"menu_san"),search(lcon,"port_info"));
     							fprintf(cgiOut,"</tr>");
							}
						}
						else if(cgiFormSubmitClicked("submit_stp") == cgiFormSuccess)
						{
							if(retu==0)  /*管理员*/
							{
     							fprintf(cgiOut,"<tr height=26>"\
     							  "<td align=left id=tdleft background=/images/bottom_bg.gif style=\"border-right:0\"><font id=%s>%s</font></td>",search(lpublic,"menu_san"),search(lcon,"br_info"));   /*突出显示*/
     							fprintf(cgiOut,"</tr>");
     							fprintf(cgiOut,"<tr height=25>"\
     							  "<td align=left id=tdleft><a href=wp_config_stp_bridge.cgi?UN=%s target=mainFrame class=top><font id=%s>%s</font></a></td>",stp_encry,search(lpublic,"menu_san"),search(lcon,"br_conf"));
     							fprintf(cgiOut,"</tr>"\
     							"<tr height=25>"\
     							  "<td align=left id=tdleft><a href=wp_show_port.cgi?UN=%s target=mainFrame class=top><font id=%s>%s</font></a></td>",stp_encry,search(lpublic,"menu_san"),search(lcon,"port_info"));
     							fprintf(cgiOut,"</tr>"\
     							"<tr height=25>"\
     							  "<td align=left id=tdleft><a href=wp_config_stp_port.cgi?UN=%s target=mainFrame class=top><font id=%s>%s</font></a></td>",stp_encry,search(lpublic,"menu_san"),search(lcon,"port_conf"));
     							fprintf(cgiOut,"</tr>");
							}
							else
							{
								fprintf(cgiOut,"<tr height=26>"\
     							  "<td align=left id=tdleft background=/images/bottom_bg.gif style=\"border-right:0\"><font id=%s>%s</font></td>",search(lpublic,"menu_san"),search(lcon,"br_info"));   /*突出显示*/
     							fprintf(cgiOut,"</tr>"\
     							"<tr height=25>"\
     							  "<td align=left id=tdleft><a href=wp_show_port.cgi?UN=%s target=mainFrame class=top><font id=%s>%s</font></a></td>",stp_encry,search(lpublic,"menu_san"),search(lcon,"port_info"));
     							fprintf(cgiOut,"</tr>");
							}
						}
						  for(i=0;i<10;i++)
						  {
							fprintf(cgiOut,"<tr height=25>"\
							  "<td id=tdleft>&nbsp;</td>"\
							"</tr>");
						  }
	
					  fprintf(cgiOut,"</table>"\
				  "</td>"\
				  "<td align=left valign=top style=\"background-color:#ffffff; border-right:1px solid #707070; padding-left:30px; padding-top:10px\">"\
						  "<table width=700 border=0 cellspacing=0 cellpadding=0>"\
														 "<tr height=35>");
					  							
													fprintf(cgiOut,"<td align=center id=sec1 style=\"border-bottom:2px solid #53868b;font-size:14px;padding-left:0px;padding-top:0px\">%s</td>",search(lpublic,"stp_des"));
											
														  fprintf(cgiOut,"</tr>"\
														"<tr>"\
														  "<td align=left valign=top  style=\"padding-top:18px\">");
													fprintf(cgiOut,"<table width=700 border=0 cellspacing=0 cellpadding=0>");
														  ccgi_dbus_init();
														  		int stpmode;
																if(ccgi_get_brg_g_state(&stpmode)==1)
																{
																	if(stpmode==0)
																	{
																  		if(ccgi_get_br_info(&br_info)==0)
															  			{
															
																			//vty_out(vty,"Designated Root\t\t\t:  ");
															fprintf(cgiOut,"<tr height=25>"\
																			   "<td>%s</td>"\
																		   "</tr>",search(lcon,"root_br_info"));

															 fprintf(cgiOut,"<tr>"\
																				"<td id=td1>Designated Root:</td>"\
																				"<td id=td2>%02x:%02x:%02x:%02x:%02x:%02x</td>"\
																			"</tr>",br_info.root_br_mac[0],br_info.root_br_mac[1],br_info.root_br_mac[2],br_info.root_br_mac[3],br_info.root_br_mac[4],br_info.root_br_mac[5]);
															 fprintf(cgiOut,"<tr>"\
																			    "<td id=td1>Designated Root Priority:</td>"\
																			    "<td id=td2>%d</td>"\
																		    "</tr>",br_info.root_br_prio);
															 fprintf(cgiOut,"<tr>"\
																			    "<td id=td1>Designated Root Path Cost:</td>"\
																			    "<td id=td2>%d</td>"\
																		    "</tr>",br_info.root_path_cost);






	 
	 				if(br_info.root_br_portId)
	 				{
	 fprintf(cgiOut,"<tr>"\
					    "<td id=td1>Root Port:</td>"\
					    "<td id=td2>%d/%d</td>"\
				    "</tr>",br_info.slot,br_info.port);
	 				}
					else
					{
	 fprintf(cgiOut,"<tr>"\
					    "<td id=td1>Root Port:</td>"\
					    "<td id=td2>none</td>"\
				    "</tr>");
					}	






																														
															 fprintf(cgiOut,"<tr>"\
																				"<td id=td1>Root Max Age:</td>"\
																				"<td id=td2>%d</td>"\
																			"</tr>",br_info.root_br_maxAge);
															 fprintf(cgiOut,"<tr>"\
																				"<td id=td1>Hello Time:</td>"\
																				"<td id=td2>%d</td>"\
																			"</tr>",br_info.root_br_hTime);
															 fprintf(cgiOut,"<tr>"\
																				"<td id=td1>Forward Delay:</td>"\
																				"<td id=td2>%d</td>"\
																			"</tr>",br_info.root_br_fdelay); 
																//display self-bridge info
															 fprintf(cgiOut,"<tr height=25>"\
															 					"<td>%s</td>"\
															 				"</tr>",search(lcon,"self_br_info"));
															 fprintf(cgiOut,"<tr>"\
																				"<td id=td1>Bridge ID Mac Address\t\t:</td>"\
																				"<td id=td2>%02x:%02x:%02x:%02x:%02x:%02x</td>"\
																			"</tr>",br_info.design_br_mac[0],br_info.design_br_mac[1],br_info.design_br_mac[2],br_info.design_br_mac[3],br_info.design_br_mac[4],br_info.design_br_mac[5]);
															 fprintf(cgiOut,"<tr>"\
																			    "<td id=td1>Bridge ID Priority\t\t:</td>"\
																			    "<td id=td2>%d</td>"\
																		    "</tr>",br_info.design_br_prio);
															 fprintf(cgiOut,"<tr>"\
																			    "<td id=td1>Bridge ID ForceVersion\t\t:</td>"\
																			    "<td id=td2>%d</td>"\
																		    "</tr>",br_info.design_br_version);
															 fprintf(cgiOut,"<tr>"\
																				"<td id=td1>Bridge Max Age:</td>"\
																				"<td id=td2>%d</td>"\
																			"</tr>",br_info.design_br_maxAge);
															 fprintf(cgiOut,"<tr>"\
																				"<td id=td1>Hello Time:</td>"\
																				"<td id=td2>%d</td>"\
																			"</tr>",br_info.design_br_hTime);
															 fprintf(cgiOut,"<tr>"\
																				"<td id=td1>Forward Delay:</td>"\
																				"<td id=td2>%d</td>"\
																			"</tr>",br_info.design_br_fdelay); 																	
															  			}
																		else
																		{
																				fprintf(cgiOut,"%s",search(lpublic,"contact_adm"));
																		}
																	}
																	else
																	{
																		fprintf(cgiOut,"<tr><td><font color=red>%s</font></td></tr>",search(lcon,"mstp_run"));
																	}

														  		}
																else
																{
																	fprintf(cgiOut,"<tr><td><font color=red>%s</font></td></tr>",search(lcon,"no_start_br"));
																}
														  fprintf(cgiOut,"</table>");

 
												fprintf(cgiOut,"</td>"\
														  "</tr>"\
        													"<tr>");
        													  if(cgiFormSubmitClicked("submit_stp") != cgiFormSuccess)
        													  {
        														fprintf(cgiOut,"<td><input type=hidden name=stp_encry value=%s></td>",encry);
        													  }
        													  else if(cgiFormSubmitClicked("submit_stp") == cgiFormSuccess)
        														  { 			 
        															fprintf(cgiOut,"<td><input type=hidden name=stp_encry value=%s></td>",stp_encry);
																	fprintf(stderr,"stp_encry====%s\n",stp_encry);
        														  }
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

	free(encry);
																 
	return 0;

}
