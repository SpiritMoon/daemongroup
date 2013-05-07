/*
 * Note: this file originally auto-generated by mib2c using
 *  : mib2c.iterate.conf,v 5.14.2.2 2005/05/09 08:13:01 dts12 Exp $
 */

#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>
#include "dot11VideoQosTable.h"
#include "wcpss/asd/asd.h"
#include "wcpss/wid/WID.h"
#include "dbus/wcpss/dcli_wid_wtp.h"
#include "dbus/wcpss/dcli_wid_wlan.h"
#include "ws_dcli_wlans.h"
#include "ws_sysinfo.h"
#include "ws_init_dbus.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "ws_init_dbus.h"
#include <dbus/dbus.h>
#include "sysdef/npd_sysdef.h"
#include "dbus/npd/npd_dbus_def.h"
#include "autelanWtpGroup.h"
#include "ws_dbus_list_interface.h"

#define VIDEOQOSTABLE "3.4.6"

#define __DEBUG	1



struct dot11VideoQosTable_entry {
    /* Index values */
	dbus_parameter parameter;
	long globalVideoWtpID;
    long VideoWtpID;
    long VideoRadioLocalID;
	long VideoQosID;
	char *VideoQosname;

    /* Column values */
    long VideoMaxSvcCnt;
    long VideoSvcBW;
    long VideoSvcBWPercent;
    long VideoIsUseStreamBasedQueue;
    long VideoStreamMaxQueueLen;
    long VideoStreamAvgSpeed;
    long VideoStreamMaxBurst;
    long VideoIsUseWREDAlg;
    long VideoIsUseTrafficShaping;

    /* Illustrate using a simple linked list */
    int   valid;
    struct dot11VideoQosTable_entry *next;
};

void dot11VideoQosTable_load(void);
void dot11VideoQosTable_removeEntry( struct dot11VideoQosTable_entry *entry );

/** Initializes the dot11VideoQosTable module */
void
init_dot11VideoQosTable(void)
{
  /* here we initialize all the tables we're planning on supporting */
    initialize_table_dot11VideoQosTable();
}

/** Initialize the dot11VideoQosTable table by defining its contents and how it's structured */
void
initialize_table_dot11VideoQosTable(void)
{
    static oid dot11VideoQosTable_oid[128] = {0};
    size_t dot11VideoQosTable_oid_len   = 0;
	mad_dev_oid(dot11VideoQosTable_oid,VIDEOQOSTABLE,&dot11VideoQosTable_oid_len,enterprise_pvivate_oid);
    netsnmp_handler_registration    *reg;
    netsnmp_iterator_info           *iinfo;
    netsnmp_table_registration_info *table_info;

    reg = netsnmp_create_handler_registration(
              "dot11VideoQosTable",     dot11VideoQosTable_handler,
              dot11VideoQosTable_oid, dot11VideoQosTable_oid_len,
              HANDLER_CAN_RWRITE
              );

    table_info = SNMP_MALLOC_TYPEDEF( netsnmp_table_registration_info );
    netsnmp_table_helper_add_indexes(table_info,
                           ASN_INTEGER,  /* index: globalVideoWtpID */
                           ASN_INTEGER,  /* index: VideoRadioLocalID */
                           0);
    table_info->min_column = VIDEWQOSMIN;
    table_info->max_column = VIDEWQOSMAX;
    
    iinfo = SNMP_MALLOC_TYPEDEF( netsnmp_iterator_info );
    iinfo->get_first_data_point = dot11VideoQosTable_get_first_data_point;
    iinfo->get_next_data_point  = dot11VideoQosTable_get_next_data_point;
    iinfo->table_reginfo        = table_info;
    
    netsnmp_register_table_iterator( reg, iinfo );

	netsnmp_inject_handler(reg,netsnmp_get_cache_handler(DOT1DTPFDBTABLE_CACHE_TIMEOUT,dot11VideoQosTable_load, dot11VideoQosTable_removeEntry,dot11VideoQosTable_oid,dot11VideoQosTable_oid_len));
    /* Initialise the contents of the table here */
}

    /* Typical data structure for a row entry */

struct dot11VideoQosTable_entry  *dot11VideoQosTable_head;

/* create a new row in the (unsorted) table */
struct dot11VideoQosTable_entry *
dot11VideoQosTable_createEntry(
				dbus_parameter parameter,
				long globalVideoWtpID,
                long  VideoWtpID,
                long  VideoRadioLocalID,
                long  VideoQosID,
                char  *VideoQosname,
                long  VideoMaxSvcCnt,
			    long  VideoSvcBW,
			    long  VideoSvcBWPercent,
			    long  VideoIsUseStreamBasedQueue,
			    long  VideoStreamMaxQueueLen,
			    long  VideoStreamAvgSpeed,
			    long  VideoStreamMaxBurst,
			    long  VideoIsUseWREDAlg,
			    long  VideoIsUseTrafficShaping
                ) {
    struct dot11VideoQosTable_entry *entry;

    entry = SNMP_MALLOC_TYPEDEF(struct dot11VideoQosTable_entry);
    if (!entry)
        return NULL;

	memcpy(&entry->parameter, &parameter, sizeof(dbus_parameter));
	entry->globalVideoWtpID = globalVideoWtpID;
    entry->VideoWtpID = VideoWtpID;
    entry->VideoRadioLocalID = VideoRadioLocalID;
	entry->VideoQosID = VideoQosID;
	entry->VideoQosname = strdup(VideoQosname);
	entry->VideoMaxSvcCnt = VideoMaxSvcCnt;
	entry->VideoSvcBW = VideoSvcBW;
	entry->VideoSvcBWPercent = VideoSvcBWPercent;
	entry->VideoIsUseStreamBasedQueue = VideoIsUseStreamBasedQueue;
	entry->VideoStreamMaxQueueLen = VideoStreamMaxQueueLen;
	entry->VideoStreamAvgSpeed = VideoStreamAvgSpeed;
	entry->VideoStreamMaxBurst = VideoStreamMaxBurst;
	entry->VideoIsUseWREDAlg = VideoIsUseWREDAlg;
	entry->VideoIsUseTrafficShaping = VideoIsUseTrafficShaping;
    entry->next = dot11VideoQosTable_head;
    dot11VideoQosTable_head = entry;
    return entry;
}

/* remove a row from the table */
void
dot11VideoQosTable_removeEntry( struct dot11VideoQosTable_entry *entry ) {
    struct dot11VideoQosTable_entry *ptr, *prev;

    if (!entry)
        return;    /* Nothing to remove */

    for ( ptr  = dot11VideoQosTable_head, prev = NULL;
          ptr != NULL;
          prev = ptr, ptr = ptr->next ) {
        if ( ptr == entry )
            break;
    }
    if ( !ptr )
        return;    /* Can't find it */

    if ( prev == NULL )
        dot11VideoQosTable_head = ptr->next;
    else
        prev->next = ptr->next;
    FREE_OBJECT(entry->VideoQosname);
    SNMP_FREE( entry );   /* XXX - release any other internal resources */
}

void dot11VideoQosTable_load()
{
	snmp_log(LOG_DEBUG, "enter dot11VideoQosTable_load\n");

	struct dot11VideoQosTable_entry *temp = NULL; 
	while( dot11VideoQosTable_head ){
		temp=dot11VideoQosTable_head->next;
		dot11VideoQosTable_removeEntry(dot11VideoQosTable_head);
		dot11VideoQosTable_head=temp;
	}
	
	snmpd_dbus_message *messageHead = NULL, *messageNode = NULL;
    
    snmp_log(LOG_DEBUG, "enter list_connection_call_dbus_method:show_wtp_list_by_mac_cmd_func\n");
    messageHead = list_connection_call_dbus_method(show_wtp_list_by_mac_cmd_func, SHOW_ALL_WTP_TABLE_METHOD);
	snmp_log(LOG_DEBUG, "exit list_connection_call_dbus_method:show_wtp_list_by_mac_cmd_func,messageHead=%p\n", messageHead);
	
	if(messageHead)
	{
		for(messageNode = messageHead; NULL != messageNode; messageNode = messageNode->next)
		{
		    DCLI_WTP_API_GROUP_ONE *head = messageNode->message;
			int i = 0;
			WID_WTP *q = NULL;	
			int j = 0;
			char wtpID[10] = { 0 };
			char radioID[10] = { 0 };
			int ret = 0;
			DCLI_WQOS *WQOS = NULL;
			int QosID = 0;
			char name[255] = { 0 };
		    if((head)&&(head->WTP_INFO))
    		{
                void *connection = NULL;
                if(SNMPD_DBUS_ERROR == get_slot_dbus_connection(messageNode->parameter.slot_id, &connection, SNMPD_INSTANCE_MASTER_V3))
                    break;

                for(i = 0,q = head->WTP_INFO->WTP_LIST; (i < head->WTP_INFO->list_len)&&(NULL != q); i++,q=q->next)
                {
                    unsigned long globalVideoWtpID = local_to_global_ID(messageNode->parameter, 
                                                                         q->WTPID, 
                                                                         WIRELESS_MAX_NUM);

                    for(j=0;j<q->RadioCount;j++)
                    {	
						memset(wtpID,0,10);
					    memset(radioID,0,10);
						ret = 0;
						QosID = 0;
						memset(name,0,sizeof(name));
						
						snprintf(wtpID,sizeof(wtpID)-1,"%d",q->WTPID);
					    snprintf(radioID,sizeof(radioID)-1,"%d",j);	
                        
                        ret = wid_show_qos_radio_cmd(messageNode->parameter, connection,wtpID,radioID,"VIDEO",&WQOS);
                        if(ret == 1)
                        {
							if(WQOS->qos[0])
							{
								QosID = WQOS->qos[0]->QosID;
								if(WQOS->qos[0]->name)
								{
									strncpy(name,WQOS->qos[0]->name,sizeof(name)-1);
								}
							}
							Free_qos_one(WQOS); 					  
						}	
                        dot11VideoQosTable_createEntry(messageNode->parameter,
                                                       globalVideoWtpID,
                                  					   q->WTPID,
                                  					   j,	
                                  					   QosID,
                                  					   name,
                                  					   0,
                                  					   0,
                                  					   0,
                                  					   0,
                                  					   0,
                                  					   0,
                                  					   0,
                                  					   0,
                                  					   0); 
                    }
					FREE_OBJECT(q->WTPMAC);
                }
            }
        }
        free_dbus_message_list(&messageHead, Free_wtp_list_by_mac_head);	
    }					

	snmp_log(LOG_DEBUG, "exit dot11VideoQosTable_load\n");
}



/* Example iterator hook routines - using 'get_next' to do most of the work */
netsnmp_variable_list *
dot11VideoQosTable_get_first_data_point(void **my_loop_context,
                          void **my_data_context,
                          netsnmp_variable_list *put_index_data,
                          netsnmp_iterator_info *mydata)
{
    *my_loop_context = dot11VideoQosTable_head;
    return dot11VideoQosTable_get_next_data_point(my_loop_context, my_data_context,
                                    put_index_data,  mydata );
}

netsnmp_variable_list *
dot11VideoQosTable_get_next_data_point(void **my_loop_context,
                          void **my_data_context,
                          netsnmp_variable_list *put_index_data,
                          netsnmp_iterator_info *mydata)
{
    struct dot11VideoQosTable_entry *entry = (struct dot11VideoQosTable_entry *)*my_loop_context;
    netsnmp_variable_list *idx = put_index_data;

    if ( entry ) {
        snmp_set_var_value( idx, (u_char*)&entry->globalVideoWtpID, sizeof(entry->globalVideoWtpID) );
        idx = idx->next_variable;
        snmp_set_var_value( idx, (u_char*)&entry->VideoRadioLocalID, sizeof(entry->VideoRadioLocalID) );
        idx = idx->next_variable;
        *my_data_context = (void *)entry;
        *my_loop_context = (void *)entry->next;
    } else {
        return NULL;
    }
	  return put_index_data; 
}


/** handles requests for the dot11VideoQosTable table */
int
dot11VideoQosTable_handler(
    netsnmp_mib_handler               *handler,
    netsnmp_handler_registration      *reginfo,
    netsnmp_agent_request_info        *reqinfo,
    netsnmp_request_info              *requests) {

    netsnmp_request_info       *request;
    netsnmp_table_request_info *table_info;
    struct dot11VideoQosTable_entry          *table_entry;

    switch (reqinfo->mode) {
        /*
         * Read-support (also covers GetNext requests)
         */
    case MODE_GET:
        for (request=requests; request; request=request->next) {
            table_entry = (struct dot11VideoQosTable_entry *)
                              netsnmp_extract_iterator_context(request);
            table_info  =     netsnmp_extract_table_info(      request);
			
			if( !table_entry )
			{
					netsnmp_set_request_error(reqinfo,request,SNMP_NOSUCHINSTANCE);
					continue;
				}
				
            void *connection = NULL;
            if(SNMPD_DBUS_ERROR == get_slot_dbus_connection(table_entry->parameter.slot_id, &connection, SNMPD_INSTANCE_MASTER_V3))
                break;
				
            switch (table_info->colnum) {
            case COLUMN_VIDEOWTPID:
                snmp_set_var_typed_value( request->requestvb, ASN_INTEGER,
                                          (u_char*)&table_entry->globalVideoWtpID,
                                          sizeof(table_entry->globalVideoWtpID));
                break;
            case COLUMN_VIDEORADIOLOCALID:
                snmp_set_var_typed_value( request->requestvb, ASN_INTEGER,
                                          (u_char*)&table_entry->VideoRadioLocalID,
                                          sizeof(table_entry->VideoRadioLocalID));
                break;
            case COLUMN_VIDEOMAXSVCCNT:
			{   
				int ret = 0;
				char qosID[10] = { 0 };
				memset(qosID,0,10);
				snprintf(qosID,sizeof(qosID)-1,"%d",table_entry->VideoQosID);
				DCLI_WQOS *WQOS = NULL;

				ret = show_qos_extension_info(table_entry->parameter, connection,qosID,&WQOS);
				if((ret == 1)&&(WQOS->qos[0])&&(WQOS->qos[0]->radio_qos[2]))
				{
					table_entry->VideoMaxSvcCnt = WQOS->qos[0]->radio_qos[2]->qos_max_parallel;
				}
                snmp_set_var_typed_value( request->requestvb, ASN_INTEGER,
                                          (u_char*)&table_entry->VideoMaxSvcCnt,
                                          sizeof(table_entry->VideoMaxSvcCnt));
				if(ret == 1)
				{
					Free_qos_extension_info(WQOS);
				}
            }
                break;
            case COLUMN_VIDEOSVCBW:
			{   
				int ret = 0;
				char qosID[10] = { 0 };
				memset(qosID,0,10);
				snprintf(qosID,sizeof(qosID)-1,"%d",table_entry->VideoQosID);
				DCLI_WQOS *WQOS = NULL;
				ret = show_qos_extension_info(table_entry->parameter, connection,qosID,&WQOS);
				if((ret == 1)&&(WQOS->qos[0])&&(WQOS->qos[0]->radio_qos[2]))
				{
					table_entry->VideoSvcBW = WQOS->qos[0]->radio_qos[2]->qos_bandwidth;
				}
                snmp_set_var_typed_value( request->requestvb, ASN_INTEGER,
                                          (u_char*)&table_entry->VideoSvcBW,
                                          sizeof(table_entry->VideoSvcBW));
				if(ret == 1)
				{
					Free_qos_extension_info(WQOS);
				}
            }
                break;
            case COLUMN_VIDEOSVCBWPERCENT:
			{   
				int ret = 0;
				char qosID[10] = { 0 };
				memset(qosID,0,10);
				snprintf(qosID,sizeof(qosID)-1,"%d",table_entry->VideoQosID);
				DCLI_WQOS *WQOS = NULL;	
				ret = show_qos_extension_info(table_entry->parameter, connection,qosID,&WQOS);
				if((ret == 1)&&(WQOS->qos[0])&&(WQOS->qos[0]->radio_qos[2]))
				{
					table_entry->VideoSvcBWPercent = WQOS->qos[0]->radio_qos[2]->qos_bandwidth_scale;
				}
                snmp_set_var_typed_value( request->requestvb, ASN_INTEGER,
                                          (u_char*)&table_entry->VideoSvcBWPercent,
                                          sizeof(table_entry->VideoSvcBWPercent));
				if(ret == 1)
				{
					Free_qos_extension_info(WQOS);
				}
            }
                break;
            case COLUMN_VIDEOISUSESTREAMBASEDQUEUE:
			{   
				int ret = 0;
				char qosID[10] = { 0 };
				memset(qosID,0,10);
				snprintf(qosID,sizeof(qosID)-1,"%d",table_entry->VideoQosID);
				DCLI_WQOS *WQOS = NULL;
				ret = show_qos_extension_info(table_entry->parameter, connection,qosID,&WQOS);
				if((ret == 1)&&(WQOS->qos[0])&&(WQOS->qos[0]->radio_qos[2]))					
				{
				 	if(WQOS->qos[0]->radio_qos[2]->qos_use_flow_eq_queue == 1)
				  	{
				  		table_entry->VideoIsUseStreamBasedQueue = 1;
				  	}				
				  	else if(WQOS->qos[0]->radio_qos[2]->qos_use_flow_eq_queue == 0)
				  	{
				  		table_entry->VideoIsUseStreamBasedQueue = 2;
				  	}
				}
                snmp_set_var_typed_value( request->requestvb, ASN_INTEGER,
                                          (u_char*)&table_entry->VideoIsUseStreamBasedQueue,
                                          sizeof(table_entry->VideoIsUseStreamBasedQueue));
				if(ret == 1)
				{
					Free_qos_extension_info(WQOS);
				}
            }
                break;
            case COLUMN_VIDEOSTREAMMAXQUEUELEN:
			{  
				int ret = 0;
				char qosID[10] = { 0 };
				memset(qosID,0,10);
				snprintf(qosID,sizeof(qosID)-1,"%d",table_entry->VideoQosID);
				DCLI_WQOS *WQOS = NULL;
				ret = show_qos_extension_info(table_entry->parameter, connection,qosID,&WQOS);
				if((ret == 1)&&(WQOS->qos[0])&&(WQOS->qos[0]->radio_qos[2]))
				{
					table_entry->VideoStreamMaxQueueLen = WQOS->qos[0]->radio_qos[2]->qos_flow_max_queuedepth;
				}
                snmp_set_var_typed_value( request->requestvb, ASN_INTEGER,
                                          (u_char*)&table_entry->VideoStreamMaxQueueLen,
                                          sizeof(table_entry->VideoStreamMaxQueueLen));
				if(ret == 1)
				{
					Free_qos_extension_info(WQOS);
				}
            }
                break;
            case COLUMN_VIDEOSTREAMAVGSPEED:
			{   
				int ret = 0;
				char qosID[10] = { 0 };
				memset(qosID,0,10);
				snprintf(qosID,sizeof(qosID)-1,"%d",table_entry->VideoQosID);
				DCLI_WQOS *WQOS = NULL;
				ret = show_qos_extension_info(table_entry->parameter, connection,qosID,&WQOS);
				if((ret == 1)&&(WQOS->qos[0])&&(WQOS->qos[0]->radio_qos[2]))
				{
					table_entry->VideoStreamAvgSpeed = WQOS->qos[0]->radio_qos[2]->qos_flow_average_rate;
				}
                snmp_set_var_typed_value( request->requestvb, ASN_INTEGER,
                                          (u_char*)&table_entry->VideoStreamAvgSpeed,
                                          sizeof(table_entry->VideoStreamAvgSpeed));
				if(ret == 1)
				{
					Free_qos_extension_info(WQOS);
				}
            }
                break;
            case COLUMN_VIDEOSTREAMMAXBURST:
			{   
				int ret = 0;
				char qosID[10] = { 0 };
				memset(qosID,0,10);
				snprintf(qosID,sizeof(qosID)-1,"%d",table_entry->VideoQosID);
				DCLI_WQOS *WQOS = NULL;
				ret = show_qos_extension_info(table_entry->parameter, connection,qosID,&WQOS);
				if((ret == 1)&&(WQOS->qos[0])&&(WQOS->qos[0]->radio_qos[2]))
				{
					table_entry->VideoStreamMaxBurst =  WQOS->qos[0]->radio_qos[2]->qos_flow_max_degree;
				}
                snmp_set_var_typed_value( request->requestvb, ASN_INTEGER,
                                          (u_char*)&table_entry->VideoStreamMaxBurst,
                                          sizeof(table_entry->VideoStreamMaxBurst));
				if(ret == 1)
				{
					Free_qos_extension_info(WQOS);
				}
            }
                break;
            case COLUMN_VIDEOISUSEWREDALG:
			{
				int ret = 0;
				char qosID[10] = { 0 };
				memset(qosID,0,10);
				snprintf(qosID,sizeof(qosID)-1,"%d",table_entry->VideoQosID);
				DCLI_WQOS *WQOS = NULL;
				ret = show_qos_extension_info(table_entry->parameter, connection,qosID,&WQOS);
				if((ret == 1)&&(WQOS->qos[0])&&(WQOS->qos[0]->radio_qos[2]))
				{
				 	if(WQOS->qos[0]->radio_qos[2]->qos_use_wred == 1)
				 	{
				    	table_entry->VideoIsUseWREDAlg = 1 ;
				 	}
				 	else if(WQOS->qos[0]->radio_qos[2]->qos_use_wred == 0)
				 	{
                     	table_entry->VideoIsUseWREDAlg = 2 ;
				 	}
				}
                snmp_set_var_typed_value( request->requestvb, ASN_INTEGER,
                                          (u_char*)&table_entry->VideoIsUseWREDAlg,
                                          sizeof(table_entry->VideoIsUseWREDAlg));
				if(ret == 1)
				{
					Free_qos_extension_info(WQOS);
				}
            }
                break;
            case COLUMN_VIDEOISUSETRAFFICSHAPING:
			{
				int ret = 0;
				char qosID[10] = { 0 };
				memset(qosID,0,10);
				snprintf(qosID,sizeof(qosID)-1,"%d",table_entry->VideoQosID);
				DCLI_WQOS *WQOS = NULL;
				ret = show_qos_extension_info(table_entry->parameter, connection,qosID,&WQOS);
				if((ret == 1)&&(WQOS->qos[0])&&(WQOS->qos[0]->radio_qos[2]))
				{
				 	if(WQOS->qos[0]->radio_qos[2]->qos_use_traffic_shaping == 1)
				 	{
				    	table_entry->VideoIsUseTrafficShaping = 1 ;
				 	}
				 	else if(WQOS->qos[0]->radio_qos[2]->qos_use_traffic_shaping == 0)
				 	{
                     	table_entry->VideoIsUseTrafficShaping = 2 ;
				 	}
				}
                snmp_set_var_typed_value( request->requestvb, ASN_INTEGER,
                                          (u_char*)&table_entry->VideoIsUseTrafficShaping,
                                          sizeof(table_entry->VideoIsUseTrafficShaping));
				if(ret == 1)
				{
					Free_qos_extension_info(WQOS);
				}
			}
                break;
            }
        }
        break;

        /*
         * Write-support
         */
    case MODE_SET_RESERVE1:
        for (request=requests; request; request=request->next) {
            table_entry = (struct dot11VideoQosTable_entry *)
                              netsnmp_extract_iterator_context(request);
            table_info  =     netsnmp_extract_table_info(      request);
    
            switch (table_info->colnum) {
            case COLUMN_VIDEOMAXSVCCNT:
                if ( request->requestvb->type != ASN_INTEGER ) {
                    netsnmp_set_request_error( reqinfo, request,
                                               SNMP_ERR_WRONGTYPE );
                    return SNMP_ERR_NOERROR;
                }
                /* Also may need to check size/value */
                break;
            case COLUMN_VIDEOSVCBW:
                if ( request->requestvb->type != ASN_INTEGER ) {
                    netsnmp_set_request_error( reqinfo, request,
                                               SNMP_ERR_WRONGTYPE );
                    return SNMP_ERR_NOERROR;
                }
                /* Also may need to check size/value */
                break;
            case COLUMN_VIDEOSVCBWPERCENT:
                if ( request->requestvb->type != ASN_INTEGER ) {
                    netsnmp_set_request_error( reqinfo, request,
                                               SNMP_ERR_WRONGTYPE );
                    return SNMP_ERR_NOERROR;
                }
                /* Also may need to check size/value */
                break;
            case COLUMN_VIDEOISUSESTREAMBASEDQUEUE:
                if ( request->requestvb->type != ASN_INTEGER ) {
                    netsnmp_set_request_error( reqinfo, request,
                                               SNMP_ERR_WRONGTYPE );
                    return SNMP_ERR_NOERROR;
                }
                /* Also may need to check size/value */
                break;
            case COLUMN_VIDEOSTREAMMAXQUEUELEN:
                if ( request->requestvb->type != ASN_INTEGER ) {
                    netsnmp_set_request_error( reqinfo, request,
                                               SNMP_ERR_WRONGTYPE );
                    return SNMP_ERR_NOERROR;
                }
                /* Also may need to check size/value */
                break;
            case COLUMN_VIDEOSTREAMAVGSPEED:
                if ( request->requestvb->type != ASN_INTEGER ) {
                    netsnmp_set_request_error( reqinfo, request,
                                               SNMP_ERR_WRONGTYPE );
                    return SNMP_ERR_NOERROR;
                }
                /* Also may need to check size/value */
                break;
            case COLUMN_VIDEOSTREAMMAXBURST:
                if ( request->requestvb->type != ASN_INTEGER ) {
                    netsnmp_set_request_error( reqinfo, request,
                                               SNMP_ERR_WRONGTYPE );
                    return SNMP_ERR_NOERROR;
                }
                /* Also may need to check size/value */
                break;
            case COLUMN_VIDEOISUSEWREDALG:
                if ( request->requestvb->type != ASN_INTEGER ) {
                    netsnmp_set_request_error( reqinfo, request,
                                               SNMP_ERR_WRONGTYPE );
                    return SNMP_ERR_NOERROR;
                }
                /* Also may need to check size/value */
                break;
            case COLUMN_VIDEOISUSETRAFFICSHAPING:
                if ( request->requestvb->type != ASN_INTEGER ) {
                    netsnmp_set_request_error( reqinfo, request,
                                               SNMP_ERR_WRONGTYPE );
                    return SNMP_ERR_NOERROR;
                }
                /* Also may need to check size/value */
                break;
            default:
                netsnmp_set_request_error( reqinfo, request,
                                           SNMP_ERR_NOTWRITABLE );
                return SNMP_ERR_NOERROR;
            }
        }
        break;

    case MODE_SET_RESERVE2:
        break;

    case MODE_SET_FREE:
        break;

    case MODE_SET_ACTION:
        for (request=requests; request; request=request->next) {
            table_entry = (struct dot11VideoQosTable_entry *)
                              netsnmp_extract_iterator_context(request);
            table_info  =     netsnmp_extract_table_info(      request);

			void *connection = NULL;
            if(SNMPD_DBUS_ERROR == get_instance_dbus_connection(table_entry->parameter, &connection, SNMPD_INSTANCE_MASTER_V3))
                break;

            switch (table_info->colnum) {
            case COLUMN_VIDEOMAXSVCCNT:
            { 
				int ret = 0;
				char value[64] = { 0 };
				memset(value,0,64);
				snprintf(value,sizeof(value)-1,"%d", *request->requestvb->val.integer);
				ret = wid_config_set_qos_flow_parameter(table_entry->parameter, connection,table_entry->VideoQosID,"video","maxparallel",value);
				if(ret == 1)
				{
					table_entry->VideoMaxSvcCnt= *request->requestvb->val.integer;
				}
				else
				{
					netsnmp_set_request_error(reqinfo, requests,SNMP_ERR_WRONGTYPE);
				}
            }
                break;
            case COLUMN_VIDEOSVCBW:
            { 
				int ret = 0;
				char value[64] = { 0 };
				memset(value,0,64);
				snprintf(value,sizeof(value)-1,"%d", *request->requestvb->val.integer);
				ret = wid_config_set_qos_flow_parameter(table_entry->parameter, connection,table_entry->VideoQosID,"video","bandwidth",value);
				if(ret == 1)
				{
					table_entry->VideoSvcBW= *request->requestvb->val.integer;
				}
				else
				{
					netsnmp_set_request_error(reqinfo, requests,SNMP_ERR_WRONGTYPE);
				}
            }
                break;
            case COLUMN_VIDEOSVCBWPERCENT:
            { 
				int ret = 0;
				char value[64] = { 0 };
				memset(value,0,64);
				snprintf(value,sizeof(value)-1,"%d", *request->requestvb->val.integer);
				ret = wid_config_set_qos_flow_parameter(table_entry->parameter, connection,table_entry->VideoQosID,"video","bandwidthpercentage",value);
				if(ret == 1)
				{
					table_entry->VideoSvcBWPercent = *request->requestvb->val.integer;
				}
				else
				{
					netsnmp_set_request_error(reqinfo, requests,SNMP_ERR_WRONGTYPE);
				}
            }
                break;
            case COLUMN_VIDEOISUSESTREAMBASEDQUEUE:
            { 
			  #if 0
			  int ret = 0;
			  int state = 0;    
              state = *request->requestvb->val.integer;
			  if(state ==1)
			  	{
			  	ret = wid_config_set_qos_flow_able_cmd_v2(table_entry->parameter, connection,table_entry->VideoQosID,"video","enable");
			  	}
			  else if(state == 2)
			  	{
			  	ret = wid_config_set_qos_flow_able_cmd_v2(table_entry->parameter, connection,table_entry->VideoQosID,"video","disable");
			  	}            
			  if(ret == 1)
			  	{
			  	table_entry->VideoIsUseStreamBasedQueue = *request->requestvb->val.integer;
			  	}
			  else
			  	{
					netsnmp_set_request_error(reqinfo, requests,SNMP_ERR_WRONGTYPE);
				}
			  #endif
             }
                break;
            case COLUMN_VIDEOSTREAMMAXQUEUELEN:
            { 
			  int ret = 0;
			  char value[64] = { 0 };
			  memset(value,0,64);
			  snprintf(value,sizeof(value)-1,"%d", *request->requestvb->val.integer);
              ret = wid_config_set_qos_flow_parameter(table_entry->parameter, connection,table_entry->VideoQosID,"video","flowqueuelenth",value);
			  if(ret == 1)
			  	{
			  	table_entry->VideoStreamMaxQueueLen = *request->requestvb->val.integer;
			  	}
			  else
			  	{
					netsnmp_set_request_error(reqinfo, requests,SNMP_ERR_WRONGTYPE);
				}
            }
                break;
            case COLUMN_VIDEOSTREAMAVGSPEED:
            { 
				int ret = 0;
				char value[64] = { 0 };
				memset(value,0,64);
				snprintf(value,sizeof(value)-1,"%d", *request->requestvb->val.integer);
				ret = wid_config_set_qos_flow_parameter(table_entry->parameter, connection,table_entry->VideoQosID,"video","flowaveragerate",value);
				if(ret == 1)
				{
					table_entry->VideoStreamAvgSpeed = *request->requestvb->val.integer;
				}
				else
				{
					netsnmp_set_request_error(reqinfo, requests,SNMP_ERR_WRONGTYPE);
				}
            }
                break;
            case COLUMN_VIDEOSTREAMMAXBURST:
            { 
			  int ret = 0;
			  char value[64] = { 0 };
			  memset(value,0,64);
			  snprintf(value,sizeof(value)-1,"%d", *request->requestvb->val.integer);
              ret = wid_config_set_qos_flow_parameter(table_entry->parameter, connection,table_entry->VideoQosID,"video","flowmaxburstiness",value);
			  if(ret == 1)
			  	{
			  	table_entry->VideoStreamMaxBurst = *request->requestvb->val.integer;
			  	}
			  else
			  	{
					netsnmp_set_request_error(reqinfo, requests,SNMP_ERR_WRONGTYPE);
				}
            }
                break;
            case COLUMN_VIDEOISUSEWREDALG:
            { 
			  #if 0
			  int ret = 0;
			  int state = 0;    
              state = *request->requestvb->val.integer;
			  if(state ==1)
			  	{
			  	ret = wid_config_set_qos_flow_able_cmd(table_entry->parameter, connection,table_entry->VideoQosID,"video","usewred","enable");
			  	}
			  else if(state == 2)
			  	{
			  	ret = wid_config_set_qos_flow_able_cmd(table_entry->parameter, connection,table_entry->VideoQosID,"video","usewred","disable");
			  	} 
			   syslog(LOG_NOTICE,"ret=%d",ret);
			  syslog(LOG_NOTICE,"ID=%d",table_entry->VideoQosID);
			  if(ret == 1)
			  	{
			  	table_entry->VideoIsUseWREDAlg = *request->requestvb->val.integer;
			  	}
			  else
			  	{
					netsnmp_set_request_error(reqinfo, requests,SNMP_ERR_WRONGTYPE);
				}
			  #endif
            }
                break;
            case COLUMN_VIDEOISUSETRAFFICSHAPING:
            { 
			 #if 0
			  int ret = 0;
			  int state = 0;    
              state = *request->requestvb->val.integer;
			  if(state ==1)
			  	{
			  	ret = wid_config_set_qos_flow_able_cmd(table_entry->parameter, connection,table_entry->VideoQosID,"video","usetrafficshaping","enable");
			  	}
			  else if(state == 2)
			  	{
			  	ret = wid_config_set_qos_flow_able_cmd(table_entry->parameter, connection,table_entry->VideoQosID,"video","usetrafficshaping","disable");
			  	}         
			  if(ret == 1)
			  	{
			  	table_entry->VideoIsUseTrafficShaping = *request->requestvb->val.integer;
			  	}
			  else
			  	{
					netsnmp_set_request_error(reqinfo, requests,SNMP_ERR_WRONGTYPE);
				}
			  #endif
            }
                break;
            }
        }
        break;

    case MODE_SET_UNDO:
        for (request=requests; request; request=request->next) {
            table_entry = (struct dot11VideoQosTable_entry *)
                              netsnmp_extract_iterator_context(request);
            table_info  =     netsnmp_extract_table_info(      request);
    
            switch (table_info->colnum) {
            case COLUMN_VIDEOMAXSVCCNT:
                /* Need to restore old 'table_entry->VideoMaxSvcCnt' value.
                   May need to use 'memcpy' */
                break;
            case COLUMN_VIDEOSVCBW:
                /* Need to restore old 'table_entry->VideoSvcBW' value.
                   May need to use 'memcpy' */
                break;
            case COLUMN_VIDEOSVCBWPERCENT:
                /* Need to restore old 'table_entry->VideoSvcBWPercent' value.
                   May need to use 'memcpy' */
                break;
            case COLUMN_VIDEOISUSESTREAMBASEDQUEUE:
                /* Need to restore old 'table_entry->VideoIsUseStreamBasedQueue' value.
                   May need to use 'memcpy' */
                break;
            case COLUMN_VIDEOSTREAMMAXQUEUELEN:
                /* Need to restore old 'table_entry->VideoStreamMaxQueueLen' value.
                   May need to use 'memcpy' */
                break;
            case COLUMN_VIDEOSTREAMAVGSPEED:
                /* Need to restore old 'table_entry->VideoStreamAvgSpeed' value.
                   May need to use 'memcpy' */
                break;
            case COLUMN_VIDEOSTREAMMAXBURST:
                /* Need to restore old 'table_entry->VideoStreamMaxBurst' value.
                   May need to use 'memcpy' */
                break;
            case COLUMN_VIDEOISUSEWREDALG:
                /* Need to restore old 'table_entry->VideoIsUseWREDAlg' value.
                   May need to use 'memcpy' */
                break;
            case COLUMN_VIDEOISUSETRAFFICSHAPING:
                /* Need to restore old 'table_entry->VideoIsUseTrafficShaping' value.
                   May need to use 'memcpy' */
                break;
            }
        }
        break;

    case MODE_SET_COMMIT:
        break;
    }
    return SNMP_ERR_NOERROR;
}