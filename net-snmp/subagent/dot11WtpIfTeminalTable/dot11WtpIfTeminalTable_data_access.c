/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.12 $ of : mfd-data-access.m2c,v $ 
 *
 * $Id:$
 */
/* standard Net-SNMP includes */
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

/* include our parent header */
#include "dot11WtpIfTeminalTable.h"

#include "mibs_public.h"
#include "autelanWtpGroup.h"
#include "ws_user_manage.h"
#include "ws_conf_engine.h"
#include "wcpss/asd/asd.h"
#include "wcpss/wid/WID.h"
#include "dbus/wcpss/dcli_wid_wtp.h"
#include "dbus/wcpss/dcli_wid_wlan.h"
#include "ws_dcli_wlans.h"
#include "nm/app/eag/eag_errcode.h"
#include "nm/app/eag/eag_conf.h"
#include "nm/app/eag/eag_interface.h"
#include "ws_init_dbus.h"

#include "dot11WtpIfTeminalTable_data_access.h"

/** @defgroup data_access data_access: Routines to access data
 *
 * These routines are used to locate the data used to satisfy
 * requests.
 * 
 * @{
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table dot11WtpIfTeminalTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11WtpIfTeminalTable is subid 4 of wlanPortal.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.1.17.4, length: 12
*/

/**
 * initialization for dot11WtpIfTeminalTable data access
 *
 * This function is called during startup to allow you to
 * allocate any resources you need for the data table.
 *
 * @param dot11WtpIfTeminalTable_reg
 *        Pointer to dot11WtpIfTeminalTable_registration
 *
 * @retval MFD_SUCCESS : success.
 * @retval MFD_ERROR   : unrecoverable error.
 */
int
dot11WtpIfTeminalTable_init_data(dot11WtpIfTeminalTable_registration_ptr dot11WtpIfTeminalTable_reg)
{
    DEBUGMSGTL(("verbose:dot11WtpIfTeminalTable:dot11WtpIfTeminalTable_init_data","called\n"));

    /*
     * TODO:303:o: Initialize dot11WtpIfTeminalTable data.
     */
    /*
    ***************************************************
    ***             START EXAMPLE CODE              ***
    ***---------------------------------------------***/
    /*
     * if you are the sole writer for the file, you could
     * open it here. However, as stated earlier, we are assuming
     * the worst case, which in this case means that the file is
     * written to by someone else, and might not even exist when
     * we start up. So we can't do anything here.
     */
    /*
    ***---------------------------------------------***
    ***              END  EXAMPLE CODE              ***
    ***************************************************/

    return MFD_SUCCESS;
} /* dot11WtpIfTeminalTable_init_data */

/**
 * container-cached overview
 *
 */

/***********************************************************************
 *
 * cache
 *
 ***********************************************************************/
/**
 * container initialization
 *
 * @param container_ptr_ptr A pointer to a container pointer. If you
 *        create a custom container, use this parameter to return it
 *        to the MFD helper. If set to NULL, the MFD helper will
 *        allocate a container for you.
 * @param  cache A pointer to a cache structure. You can set the timeout
 *         and other cache flags using this pointer.
 *
 *  This function is called at startup to allow you to customize certain
 *  aspects of the access method. For the most part, it is for advanced
 *  users. The default code should suffice for most cases. If no custom
 *  container is allocated, the MFD code will create one for your.
 *
 *  This is also the place to set up cache behavior. The default, to
 *  simply set the cache timeout, will work well with the default
 *  container. If you are using a custom container, you may want to
 *  look at the cache helper documentation to see if there are any
 *  flags you want to set.
 *
 * @remark
 *  This would also be a good place to do any initialization needed
 *  for you data source. For example, opening a connection to another
 *  process that will supply the data, opening a database, etc.
 */
void
dot11WtpIfTeminalTable_container_init(netsnmp_container **container_ptr_ptr,
                        netsnmp_cache *cache)
{
    DEBUGMSGTL(("verbose:dot11WtpIfTeminalTable:dot11WtpIfTeminalTable_container_init","called\n"));
    
    if((NULL == cache) || (NULL == container_ptr_ptr)) {
        snmp_log(LOG_ERR,"bad params to dot11WtpIfTeminalTable_container_init\n");
        return;
    }

    /*
     * For advanced users, you can use a custom container. If you
     * do not create one, one will be created for you.
     */
    *container_ptr_ptr = NULL;

    /*
     * TODO:345:A: Set up dot11WtpIfTeminalTable cache properties.
     *
     * Also for advanced users, you can set parameters for the
     * cache. Do not change the magic pointer, as it is used
     * by the MFD helper. To completely disable caching, set
     * cache->enabled to 0.
     */
    cache->timeout = DOT11WTPIFTEMINALTABLE_CACHE_TIMEOUT; /* seconds */
} /* dot11WtpIfTeminalTable_container_init */

/**
 * load cache data
 *
 * TODO:350:M: Implement dot11WtpIfTeminalTable cache load
 *
 * @param container container to which items should be inserted
 *
 * @retval MFD_SUCCESS              : success.
 * @retval MFD_RESOURCE_UNAVAILABLE : Can't access data source
 * @retval MFD_ERROR                : other error.
 *
 *  This function is called to cache the index(es) (and data, optionally)
 *  for the every row in the data set.
 *
 * @remark
 *  While loading the cache, the only important thing is the indexes.
 *  If access to your data is cheap/fast (e.g. you have a pointer to a
 *  structure in memory), it would make sense to update the data here.
 *  If, however, the accessing the data invovles more work (e.g. parsing
 *  some other existing data, or peforming calculations to derive the data),
 *  then you can limit yourself to setting the indexes and saving any
 *  information you will need later. Then use the saved information in
 *  dot11WtpIfTeminalTable_row_prep() for populating data.
 *
 * @note
 *  If you need consistency between rows (like you want statistics
 *  for each row to be from the same time frame), you should set all
 *  data here.
 *
 */
int
dot11WtpIfTeminalTable_cache_load(netsnmp_container *container)
{
	snmp_log(LOG_DEBUG, "enter dot11WtpIfTeminalTable_cache_load\n");
	
    dot11WtpIfTeminalTable_rowreq_ctx *rowreq_ctx;
    size_t                 count = 0;
    
    /*
     * this example code is based on a data source that is a
     * text file to be read and parsed.
     */
    //FILE *filep;
    //char line[MAX_LINE_SIZE];
    /*
     * temporary storage for index values
     */
        /*
         * wtpMacAddr(1)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
        /** 128 - 1(entry) - 1(col) - 1(other indexes) = 111 */
   char   wtpMacAddr[20] = { 0 };
   size_t      wtpMacAddr_len = 0;
        /*
         * wtpRadCurrID(1)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
         */
   long   wtpRadCurrID;

    DEBUGMSGTL(("verbose:dot11WtpIfTeminalTable:dot11WtpIfTeminalTable_cache_load","called\n"));

    /*
    ***************************************************
    ***             START EXAMPLE CODE              ***
    ***---------------------------------------------***/
    /*
     * open our data file.
     */
    //filep = fopen("/etc/dummy.conf", "r");
    //if(NULL ==  filep) {
    //    return MFD_RESOURCE_UNAVAILABLE;
    //}

    /*
    ***---------------------------------------------***
    ***              END  EXAMPLE CODE              ***
    ***************************************************/
    /*
     * TODO:351:M: |-> Load/update data in the dot11WtpIfTeminalTable container.
     * loop over your dot11WtpIfTeminalTable data, allocate a rowreq context,
     * set the index(es) [and data, optionally] and insert into
     * the container.
     */
    instance_parameter *paraHead = NULL;
	instance_parameter *pq = NULL;	
    int ret1 = -1;
	struct list_head bss_stat;
	int i = 0;
	char wtpmac[20] = { 0 };	
	int ret2 = 0; 
	struct WtpWirelessIfstatsInfo *WtpHead = NULL,*q = NULL;
	struct WtpWirelessIfstatsInfo_radio *sub_radio = NULL;
	int wtpWirelessIfIndex = 0;	
	unsigned long pIfCurusernum = 0;
	unsigned long pIfLogoffnum = 0;
	unsigned long pIfReqnum = 0;
	unsigned long pIfReqsuccnum = 0;
	unsigned long pIfReqfailnum = 0;

	snmp_log(LOG_DEBUG, "enter list_instance_parameter\n");
	list_instance_parameter(&paraHead, SNMPD_INSTANCE_MASTER); 
	snmp_log(LOG_DEBUG, "exit list_instance_parameter,paraHead=%p\n", paraHead);
	for(pq = paraHead; (NULL != pq); pq = pq->next)
	{
		snmp_log(LOG_DEBUG, "enter eag_get_bss_statistics\n");
		ret1 = eag_get_bss_statistics(pq->connection, pq->parameter.local_id, pq->parameter.instance_id, &bss_stat);
		snmp_log(LOG_DEBUG, "exit eag_get_bss_statistics,bss_stat=%p\n", &bss_stat);

		
		snmp_log(LOG_DEBUG, "enter show_all_wtp_wirelessifstats_information_cmd\n");
		ret2 = show_all_wtp_wirelessifstats_information_cmd(pq->parameter, pq->connection, &WtpHead);
		snmp_log(LOG_DEBUG, "exit show_all_wtp_wirelessifstats_information_cmd,ret2=%d\n", ret2);
		if(ret2 == 1 && NULL != WtpHead)
		{
			for(q = WtpHead->WtpWirelessIfstatsInfo_list; q != NULL; q = q->next)
			{
				memset(wtpMacAddr,0,sizeof(wtpMacAddr));
				if(q->wtpMacAddr)
				{
					snprintf(wtpMacAddr,sizeof(wtpMacAddr)-1,"%02X:%02X:%02X:%02X:%02X:%02X",q->wtpMacAddr[0],q->wtpMacAddr[1],q->wtpMacAddr[2],q->wtpMacAddr[3],q->wtpMacAddr[4],q->wtpMacAddr[5]);
				}
					
				for(sub_radio = q->wireless_sub_radio_head, i = 0; 
					(i<q->wtp_radio_num)&&(NULL != sub_radio);
					i++, sub_radio = sub_radio->next)
				{
					wtpWirelessIfIndex = sub_radio->wtpWirelessIfIndex + 1;

					rowreq_ctx = dot11WtpIfTeminalTable_allocate_rowreq_ctx();
					if (NULL == rowreq_ctx) {
						snmp_log(LOG_ERR, "memory allocation failed\n");
						eag_free_bss_statistics(&bss_stat);
						Free_show_all_wtp_wirelessifstats_information_cmd(WtpHead);
						free_instance_parameter_list(&paraHead);
						return MFD_RESOURCE_UNAVAILABLE;
					}
					
					wtpMacAddr_len = strlen(wtpMacAddr);					
					if(MFD_SUCCESS != dot11WtpIfTeminalTable_indexes_set(rowreq_ctx
										   , wtpMacAddr, wtpMacAddr_len
										   , wtpWirelessIfIndex
						   )) {
						snmp_log(LOG_ERR,"error setting index while loading "
								 "dot11WtpIfTeminalTable cache.\n");
						dot11WtpIfTeminalTable_release_rowreq_ctx(rowreq_ctx);
						continue;
					}
					if (EAG_RETURN_OK == ret1)
					{
						struct eag_bss_stat *pos=NULL;						
						pIfCurusernum = 0;
						pIfLogoffnum = 0;
						pIfReqnum = 0;
						pIfReqsuccnum = 0;
						pIfReqfailnum = 0;

						list_for_each_entry( pos, &bss_stat, node)
						{	
							if(pos)
							{
								memset(wtpmac,0,20);
								snprintf( wtpmac,sizeof(wtpmac)-1,
										  "%02X:%02X:%02X:%02X:%02X:%02X",
										  pos->ap_mac[0], pos->ap_mac[1], pos->ap_mac[2],
										  pos->ap_mac[3], pos->ap_mac[4], pos->ap_mac[5]);
								if((0 == strcmp(wtpmac,wtpMacAddr))&&(pos->radioid+1 == wtpWirelessIfIndex))
								{
									pIfCurusernum += pos->online_user_num;
									pIfLogoffnum += pos->abnormal_logoff_count;
									pIfReqnum += pos->auth_req_count;
									pIfReqsuccnum += pos->auth_ack_0_count;
									pIfReqfailnum += (pos->auth_ack_1_count + pos->auth_ack_2_count
										+ pos->auth_ack_3_count + pos->auth_ack_4_count);
								}
							}
						}	
					}
					
					/*
					 * TODO:352:r: |   |-> populate dot11WtpIfTeminalTable data context.
					 * Populate data context here. (optionally, delay until row prep)
					 */
					/*
					 * TRANSIENT or semi-TRANSIENT data:
					 * copy data or save any info needed to do it in row_prep.
					 */
					/*
					 * setup/save data for pIfCurusernum
					 * pIfCurusernum(1)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
					 */
					/*
					 * TODO:246:r: |-> Define pIfCurusernum mapping.
					 * Map values between raw/native values and MIB values
					 *
					 * Integer based value can usually just do a direct copy.
					 */
					rowreq_ctx->data.pIfCurusernum = pIfCurusernum;
					
					/*
					 * setup/save data for pIfLogoffnum
					 * pIfLogoffnum(2)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
					 */
					/*
					 * TODO:246:r: |-> Define pIfLogoffnum mapping.
					 * Map values between raw/native values and MIB values
					 *
					 * Integer based value can usually just do a direct copy.
					 */
					rowreq_ctx->data.pIfLogoffnum = pIfLogoffnum;
					
					/*
					 * setup/save data for pIfReqnum
					 * pIfReqnum(3)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
					 */
					/*
					 * TODO:246:r: |-> Define pIfReqnum mapping.
					 * Map values between raw/native values and MIB values
					 *
					 * Integer based value can usually just do a direct copy.
					 */
					rowreq_ctx->data.pIfReqnum = pIfReqnum;
					
					/*
					 * setup/save data for pIfReqsuccnum
					 * pIfReqsuccnum(4)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
					 */
					/*
					 * TODO:246:r: |-> Define pIfReqsuccnum mapping.
					 * Map values between raw/native values and MIB values
					 *
					 * Integer based value can usually just do a direct copy.
					 */
					rowreq_ctx->data.pIfReqsuccnum = pIfReqsuccnum;
					
					/*
					 * setup/save data for pIfReqfailnum
					 * pIfReqfailnum(5)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
					 */
					/*
					 * TODO:246:r: |-> Define pIfReqfailnum mapping.
					 * Map values between raw/native values and MIB values
					 *
					 * Integer based value can usually just do a direct copy.
					 */
					rowreq_ctx->data.pIfReqfailnum = pIfReqfailnum;
				
					
					/*
					 * insert into table container
					 */
					if(CONTAINER_INSERT(container, rowreq_ctx))
					{
						dot11WtpIfTeminalTable_release_rowreq_ctx(rowreq_ctx);
					}
					++count;
				}
			}
		}
		if (EAG_RETURN_OK == ret1)
		{
			eag_free_bss_statistics(&bss_stat);
		}
		Free_show_all_wtp_wirelessifstats_information_cmd(WtpHead);
	}
	free_instance_parameter_list(&paraHead);

    DEBUGMSGT(("verbose:dot11WtpIfTeminalTable:dot11WtpIfTeminalTable_cache_load",
               "inserted %d records\n", count));
	snmp_log(LOG_DEBUG, "exit dot11WtpIfTeminalTable_cache_load\n");
    return MFD_SUCCESS;
} /* dot11WtpIfTeminalTable_cache_load */

/**
 * cache clean up
 *
 * @param container container with all current items
 *
 *  This optional callback is called prior to all
 *  item's being removed from the container. If you
 *  need to do any processing before that, do it here.
 *
 * @note
 *  The MFD helper will take care of releasing all the row contexts.
 *
 */
void
dot11WtpIfTeminalTable_cache_free(netsnmp_container *container)
{
    DEBUGMSGTL(("verbose:dot11WtpIfTeminalTable:dot11WtpIfTeminalTable_cache_free","called\n"));

    /*
     * TODO:380:M: Free dot11WtpIfTeminalTable cache.
     */
} /* dot11WtpIfTeminalTable_cache_free */

/**
 * prepare row for processing.
 *
 *  When the agent has located the row for a request, this function is
 *  called to prepare the row for processing. If you fully populated
 *  the data context during the index setup phase, you may not need to
 *  do anything.
 *
 * @param rowreq_ctx pointer to a context.
 *
 * @retval MFD_SUCCESS     : success.
 * @retval MFD_ERROR       : other error.
 */
int
dot11WtpIfTeminalTable_row_prep( dot11WtpIfTeminalTable_rowreq_ctx *rowreq_ctx)
{
    DEBUGMSGTL(("verbose:dot11WtpIfTeminalTable:dot11WtpIfTeminalTable_row_prep","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:390:o: Prepare row for request.
     * If populating row data was delayed, this is the place to
     * fill in the row for this request.
     */

    return MFD_SUCCESS;
} /* dot11WtpIfTeminalTable_row_prep */

/** @} */