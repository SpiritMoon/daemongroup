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
#include "dot11WtpInfoTable.h"
#include "dot11WtpInfoTable_data_access.h"
#include "wcpss/asd/asd.h"
#include "wcpss/wid/WID.h"
#include "dbus/wcpss/dcli_wid_wtp.h"
#include "dbus/wcpss/dcli_wid_wlan.h"
#include "ws_dcli_wlans.h"
#include "ws_init_dbus.h"
#include "ws_snmpd_engine.h"
#include "../mibs_public.h"

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
 *** Table dot11WtpInfoTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11WtpInfoTable is subid 1 of wtpGeneralInfo.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.1.1.1, length: 12
*/

/**
 * initialization for dot11WtpInfoTable data access
 *
 * This function is called during startup to allow you to
 * allocate any resources you need for the data table.
 *
 * @param dot11WtpInfoTable_reg
 *        Pointer to dot11WtpInfoTable_registration
 *
 * @retval MFD_SUCCESS : success.
 * @retval MFD_ERROR   : unrecoverable error.
 */
int
dot11WtpInfoTable_init_data(dot11WtpInfoTable_registration_ptr dot11WtpInfoTable_reg)
{
    DEBUGMSGTL(("verbose:dot11WtpInfoTable:dot11WtpInfoTable_init_data","called\n"));

    /*
     * TODO:303:o: Initialize dot11WtpInfoTable data.
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
} /* dot11WtpInfoTable_init_data */

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
dot11WtpInfoTable_container_init(netsnmp_container **container_ptr_ptr,
                        netsnmp_cache *cache)
{
    DEBUGMSGTL(("verbose:dot11WtpInfoTable:dot11WtpInfoTable_container_init","called\n"));
    
    if((NULL == cache) || (NULL == container_ptr_ptr)) {
        snmp_log(LOG_ERR,"bad params to dot11WtpInfoTable_container_init\n");
        return;
    }

    /*
     * For advanced users, you can use a custom container. If you
     * do not create one, one will be created for you.
     */
    *container_ptr_ptr = NULL;

    /*
     * TODO:345:A: Set up dot11WtpInfoTable cache properties.
     *
     * Also for advanced users, you can set parameters for the
     * cache. Do not change the magic pointer, as it is used
     * by the MFD helper. To completely disable caching, set
     * cache->enabled to 0.
     */
    cache->timeout = DOT11WTPINFOTABLE_CACHE_TIMEOUT; /* seconds */
} /* dot11WtpInfoTable_container_init */

/**
 * load cache data
 *
 * TODO:350:M: Implement dot11WtpInfoTable cache load
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
 *  dot11WtpInfoTable_row_prep() for populating data.
 *
 * @note
 *  If you need consistency between rows (like you want statistics
 *  for each row to be from the same time frame), you should set all
 *  data here.
 *
 */
int
dot11WtpInfoTable_cache_load(netsnmp_container *container)
{
	snmp_log(LOG_DEBUG, "enter dot11WtpInfoTable_cache_load\n");

    dot11WtpInfoTable_rowreq_ctx *rowreq_ctx;
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
         * wtpMacAddr(1)/Dot11BaseWtpIdTC/ASN_OCTET_STR/char(char)//L/A/w/e/r/d/h
         */
        /** 128 - 1(entry) - 1(col) - 0(other indexes) = 112 */
   char   wtpMacAddr[20];
   size_t      wtpMacAddr_len = 0;

    DEBUGMSGTL(("verbose:dot11WtpInfoTable:dot11WtpInfoTable_cache_load","called\n"));

    /*
    ***************************************************
    ***             START EXAMPLE CODE              ***
    ***---------------------------------------------***/
    /*
     * open our data file.
     */
    //filep = fopen("/etc/dummy.conf", "r");
    //if(NULL ==  filep) {
      //  return MFD_RESOURCE_UNAVAILABLE;
    //}

    /*
    ***---------------------------------------------***
    ***              END  EXAMPLE CODE              ***
    ***************************************************/
    /*
     * TODO:351:M: |-> Load/update data in the dot11WtpInfoTable container.
     * loop over your dot11WtpInfoTable data, allocate a rowreq context,
     * set the index(es) [and data, optionally] and insert into
     * the container.
     */
	
    snmpd_dbus_message *messageHead = NULL, *messageNode = NULL;
    snmp_log(LOG_DEBUG, "enter list_connection_call_dbus_method:show_all_wtp_basic_information_cmd\n");
    messageHead = list_connection_call_dbus_method(show_all_wtp_basic_information_cmd, SHOW_ALL_WTP_TABLE_METHOD);
    snmp_log(LOG_DEBUG, "exit list_connection_call_dbus_method:show_all_wtp_basic_information_cmd,messageHead=%p\n", messageHead);

    if(messageHead)
    {
        for(messageNode = messageHead; NULL != messageNode; messageNode = messageNode->next)
        {
		    struct WtpBasicInfo *WtpHead = NULL,*q = NULL;
		    
	        if(WtpHead = messageNode->message)
	        {
    			for(q = WtpHead->WtpBasicInfo_list; q != NULL; q = q->next)
    			{
    				memset(wtpMacAddr,0,20);
					if(q->wtpMacAddr)
					{
						snprintf(wtpMacAddr,sizeof(wtpMacAddr)-1,"%02X:%02X:%02X:%02X:%02X:%02X",q->wtpMacAddr[0],q->wtpMacAddr[1],q->wtpMacAddr[2],q->wtpMacAddr[3],q->wtpMacAddr[4],q->wtpMacAddr[5]);
					}
		    
    /*
    ***************************************************
    ***             START EXAMPLE CODE              ***
    ***---------------------------------------------***/
    /*
     * get a line (skip blank lines)
     */
    //do {
      //  if (!fgets(line, sizeof(line), filep)) {
            /* we're done */
        //    fclose(filep);
          //  filep = NULL;
        //}
   // } while (filep && (line[0] == '\n'));

    /*
     * check for end of data
     */
    //if(NULL == filep)
      //  break;

    /*
     * parse line into variables
     */
    /*
    ***---------------------------------------------***
    ***              END  EXAMPLE CODE              ***
    ***************************************************/

        /*
         * TODO:352:M: |   |-> set indexes in new dot11WtpInfoTable rowreq context.
         */
        rowreq_ctx = dot11WtpInfoTable_allocate_rowreq_ctx();
        if (NULL == rowreq_ctx) {
            snmp_log(LOG_ERR, "memory allocation failed\n");
            free_dbus_message_list(&messageHead, Free_show_all_wtp_basic_information_cmd);
            return MFD_RESOURCE_UNAVAILABLE;
        }
		
		wtpMacAddr_len = strlen(wtpMacAddr);
        if(MFD_SUCCESS != dot11WtpInfoTable_indexes_set(rowreq_ctx
                               , wtpMacAddr, wtpMacAddr_len
               )) {
            snmp_log(LOG_ERR,"error setting index while loading "
                     "dot11WtpInfoTable cache.\n");
            dot11WtpInfoTable_release_rowreq_ctx(rowreq_ctx);
            continue;
        }

        /*
         * TODO:352:r: |   |-> populate dot11WtpInfoTable data context.
         * Populate data context here. (optionally, delay until row prep)
         */
    /*
     * TRANSIENT or semi-TRANSIENT data:
     * copy data or save any info needed to do it in row_prep.
     */
    /*
     * setup/save data for wtpDevName
     * wtpDevName(2)/DisplayString/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
     */
    /*
     * TODO:246:r: |-> Define wtpDevName mapping.
     * Map values between raw/native values and MIB values
     *
     * if(MFD_SUCCESS !=
     *    wtpDevName_map(&rowreq_ctx->data.wtpDevName, &rowreq_ctx->data.wtpDevName_len,
     *                wtpDevName, wtpDevName_len, 0)) {
     *    return MFD_ERROR;
     * }
     */
    /*
     * make sure there is enough space for wtpDevName data
     */
    /*if ((NULL == rowreq_ctx->data.wtpDevName) ||
        (rowreq_ctx->data.wtpDevName_len < (wtpDevName_len * sizeof(rowreq_ctx->data.wtpDevName[0])))) {
        snmp_log(LOG_ERR,"not enough space for value\n");
        return MFD_ERROR;
    }*/

    memcpy(&(rowreq_ctx->data.parameter), &(messageNode->parameter), sizeof(dbus_parameter));
    
	rowreq_ctx->data.wtpCurrID = q->wtpCurrID;

    unsigned int wtpDevName_len = 0;
	if(q->wtpDevName) {
		wtpDevName_len = MIN(strlen(q->wtpDevName), sizeof(rowreq_ctx->data.wtpDevName) - 1);		
        rowreq_ctx->data.wtpDevName_len = wtpDevName_len * sizeof(rowreq_ctx->data.wtpDevName[0]);
        memcpy( rowreq_ctx->data.wtpDevName, q->wtpDevName, rowreq_ctx->data.wtpDevName_len );
	}

    
    /*
     * setup/save data for wtpPosInfo
     * wtpPosInfo(3)/DisplayString/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
     */
    /*
     * TODO:246:r: |-> Define wtpPosInfo mapping.
     * Map values between raw/native values and MIB values
     *
     * if(MFD_SUCCESS !=
     *    wtpPosInfo_map(&rowreq_ctx->data.wtpPosInfo, &rowreq_ctx->data.wtpPosInfo_len,
     *                wtpPosInfo, wtpPosInfo_len, 0)) {
     *    return MFD_ERROR;
     * }
     */
    /*
     * make sure there is enough space for wtpPosInfo data
     */
    /*if ((NULL == rowreq_ctx->data.wtpPosInfo) ||
        (rowreq_ctx->data.wtpPosInfo_len < (wtpPosInfo_len * sizeof(rowreq_ctx->data.wtpPosInfo[0])))) {
        snmp_log(LOG_ERR,"not enough space for value\n");
        return MFD_ERROR;
    }*/
    unsigned int wtpPosInfo_len = 0; 
	if(q->wtpPosInfo) {
		wtpPosInfo_len = MIN(strlen(q->wtpPosInfo), sizeof(rowreq_ctx->data.wtpPosInfo) - 1);
        rowreq_ctx->data.wtpPosInfo_len = wtpPosInfo_len * sizeof(rowreq_ctx->data.wtpPosInfo[0]);
        memcpy( rowreq_ctx->data.wtpPosInfo, q->wtpPosInfo, rowreq_ctx->data.wtpPosInfo_len );
	}
	
    
    /*
     * setup/save data for wtpProduct
     * wtpProduct(4)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
     */
    /*
     * TODO:246:r: |-> Define wtpProduct mapping.
     * Map values between raw/native values and MIB values
     *
     * if(MFD_SUCCESS !=
     *    wtpProduct_map(&rowreq_ctx->data.wtpProduct, &rowreq_ctx->data.wtpProduct_len,
     *                wtpProduct, wtpProduct_len, 0)) {
     *    return MFD_ERROR;
     * }
     */
    /*
     * make sure there is enough space for wtpProduct data
     */
    /*if ((NULL == rowreq_ctx->data.wtpProduct) ||
        (rowreq_ctx->data.wtpProduct_len < (wtpProduct_len * sizeof(rowreq_ctx->data.wtpProduct[0])))) {
        snmp_log(LOG_ERR,"not enough space for value\n");
        return MFD_ERROR;
    }*/
    
    unsigned int wtpProduct_len = 0;
	if(q->wtpProduct) {
		wtpProduct_len = MIN(strlen(q->wtpProduct), sizeof(rowreq_ctx->data.wtpProduct) - 1);
        rowreq_ctx->data.wtpProduct_len = wtpProduct_len * sizeof(rowreq_ctx->data.wtpProduct[0]);
        memcpy( rowreq_ctx->data.wtpProduct, q->wtpProduct, rowreq_ctx->data.wtpProduct_len );
	}

	
    
    /*
     * setup/save data for wtpDevTypeNum
     * wtpDevTypeNum(5)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
     */
    /*
     * TODO:246:r: |-> Define wtpDevTypeNum mapping.
     * Map values between raw/native values and MIB values
     *
     * if(MFD_SUCCESS !=
     *    wtpDevTypeNum_map(&rowreq_ctx->data.wtpDevTypeNum, &rowreq_ctx->data.wtpDevTypeNum_len,
     *                wtpDevTypeNum, wtpDevTypeNum_len, 0)) {
     *    return MFD_ERROR;
     * }
     */
    /*
     * make sure there is enough space for wtpDevTypeNum data
     */
    /*if ((NULL == rowreq_ctx->data.wtpDevTypeNum) ||
        (rowreq_ctx->data.wtpDevTypeNum_len < (wtpDevTypeNum_len * sizeof(rowreq_ctx->data.wtpDevTypeNum[0])))) {
        snmp_log(LOG_ERR,"not enough space for value\n");
        return MFD_ERROR;
    }*/

    unsigned int wtpDevTypeNum_len = 0;
	if(q->wtpModel) {
		wtpDevTypeNum_len = MIN(strlen(q->wtpModel), sizeof(rowreq_ctx->data.wtpDevTypeNum) - 1);
        rowreq_ctx->data.wtpDevTypeNum_len = wtpDevTypeNum_len * sizeof(rowreq_ctx->data.wtpDevTypeNum[0]);
        memcpy( rowreq_ctx->data.wtpDevTypeNum, q->wtpModel, rowreq_ctx->data.wtpDevTypeNum_len );
	}
    
    /*
     * setup/save data for wtpSoftVersionInfo
     * wtpSoftVersionInfo(6)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
     */
    /*
     * TODO:246:r: |-> Define wtpSoftVersionInfo mapping.
     * Map values between raw/native values and MIB values
     *
     * if(MFD_SUCCESS !=
     *    wtpSoftVersionInfo_map(&rowreq_ctx->data.wtpSoftVersionInfo, &rowreq_ctx->data.wtpSoftVersionInfo_len,
     *                wtpSoftVersionInfo, wtpSoftVersionInfo_len, 0)) {
     *    return MFD_ERROR;
     * }
     */
    /*
     * make sure there is enough space for wtpSoftVersionInfo data
     */
    /*if ((NULL == rowreq_ctx->data.wtpSoftVersionInfo) ||
        (rowreq_ctx->data.wtpSoftVersionInfo_len < (wtpSoftVersionInfo_len * sizeof(rowreq_ctx->data.wtpSoftVersionInfo[0])))) {
        snmp_log(LOG_ERR,"not enough space for value\n");
        return MFD_ERROR;
    }*/

    unsigned int wtpSoftVersionInfo_len = 0;
	if(q->wtpVersionInfo) {
		wtpSoftVersionInfo_len = MIN(strlen(q->wtpVersionInfo), sizeof(rowreq_ctx->data.wtpSoftVersionInfo) - 1);
        rowreq_ctx->data.wtpSoftVersionInfo_len = wtpSoftVersionInfo_len * sizeof(rowreq_ctx->data.wtpSoftVersionInfo[0]);
        memcpy( rowreq_ctx->data.wtpSoftVersionInfo, q->wtpVersionInfo, rowreq_ctx->data.wtpSoftVersionInfo_len );
	}
    
    /*
     * setup/save data for wtpUpTime
     * wtpUpTime(7)/TICKS/ASN_TIMETICKS/u_long(u_long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wtpUpTime mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wtpUpTime = q->Mib_wtpUpTime * 100;
    
    /*
     * setup/save data for wtpOnlineTime
     * wtpOnlineTime(8)/TICKS/ASN_TIMETICKS/u_long(u_long)//l/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wtpOnlineTime mapping.
     * Map values between raw/native values and MIB values
     *
     * Integer based value can usually just do a direct copy.
     */
    rowreq_ctx->data.wtpOnlineTime = q->wtpUpTime * 100;
    
    /*
     * setup/save data for wtpSysSoftName
     * wtpSysSoftName(9)/OCTETSTR/ASN_OCTET_STR/char(char)//L/A/w/e/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wtpSysSoftName mapping.
     * Map values between raw/native values and MIB values
     *
     * if(MFD_SUCCESS !=
     *    wtpSysSoftName_map(&rowreq_ctx->data.wtpSysSoftName, &rowreq_ctx->data.wtpSysSoftName_len,
     *                wtpSysSoftName, wtpSysSoftName_len, 0)) {
     *    return MFD_ERROR;
     * }
     */
    /*
     * make sure there is enough space for wtpSysSoftName data
     */
    /*if ((NULL == rowreq_ctx->data.wtpSysSoftName) ||
        (rowreq_ctx->data.wtpSysSoftName_len < (wtpSysSoftName_len * sizeof(rowreq_ctx->data.wtpSysSoftName[0])))) {
        snmp_log(LOG_ERR,"not enough space for value\n");
        return MFD_ERROR;
    }*/

    unsigned int wtpSysSoftName_len = 0;
	if(q->wtpSysSoftName) {
		wtpSysSoftName_len = MIN(strlen(q->wtpSysSoftName), sizeof(rowreq_ctx->data.wtpSysSoftName) - 1);
        rowreq_ctx->data.wtpSysSoftName_len = wtpSysSoftName_len * sizeof(rowreq_ctx->data.wtpSysSoftName[0]);
        memcpy( rowreq_ctx->data.wtpSysSoftName, q->wtpSysSoftName, rowreq_ctx->data.wtpSysSoftName_len );
	}
    
    /*
     * setup/save data for wtpSysHWVersion
     * wtpSysHWVersion(10)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
     */
    /*
     * TODO:246:r: |-> Define wtpSysHWVersion mapping.
     * Map values between raw/native values and MIB values
     *
     * if(MFD_SUCCESS !=
     *    wtpSysHWVersion_map(&rowreq_ctx->data.wtpSysHWVersion, &rowreq_ctx->data.wtpSysHWVersion_len,
     *                wtpSysHWVersion, wtpSysHWVersion_len, 0)) {
     *    return MFD_ERROR;
     * }
     */
    /*
     * make sure there is enough space for wtpSysHWVersion data
     */
    /*if ((NULL == rowreq_ctx->data.wtpSysHWVersion) ||
        (rowreq_ctx->data.wtpSysHWVersion_len < (wtpSysHWVersion_len * sizeof(rowreq_ctx->data.wtpSysHWVersion[0])))) {
        snmp_log(LOG_ERR,"not enough space for value\n");
        return MFD_ERROR;
    }*/

    unsigned int wtpSysHWVersion_len = 0;
	if(q->wtpSysVersion) {
		wtpSysHWVersion_len = MIN(strlen(q->wtpSysVersion), sizeof(rowreq_ctx->data.wtpSysHWVersion) - 1);
        rowreq_ctx->data.wtpSysHWVersion_len = wtpSysHWVersion_len * sizeof(rowreq_ctx->data.wtpSysHWVersion[0]);
        memcpy( rowreq_ctx->data.wtpSysHWVersion, q->wtpSysVersion, rowreq_ctx->data.wtpSysHWVersion_len );
	}
	
    /*
     * setup/save data for wtpSN
     * wtpSN(11)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
     */
    /*
     * TODO:246:r: |-> Define wtpSN mapping.
     * Map values between raw/native values and MIB values
     *
     * if(MFD_SUCCESS !=
     *    wtpSN_map(&rowreq_ctx->data.wtpSN, &rowreq_ctx->data.wtpSN_len,
     *                wtpSN, wtpSN_len, 0)) {
     *    return MFD_ERROR;
     * }
     */
    /*
     * make sure there is enough space for wtpSN data
     */
    /*if ((NULL == rowreq_ctx->data.wtpSN) ||
        (rowreq_ctx->data.wtpSN_len < (wtpSN_len * sizeof(rowreq_ctx->data.wtpSN[0])))) {
        snmp_log(LOG_ERR,"not enough space for value\n");
        return MFD_ERROR;
    }*/

    unsigned int wtpSN_len = 0;
	if(q->wtpSeriesNum) {
		wtpSN_len = MIN(strlen(q->wtpSeriesNum), sizeof(rowreq_ctx->data.wtpSN) - 1);
        rowreq_ctx->data.wtpSN_len = wtpSN_len * sizeof(rowreq_ctx->data.wtpSN[0]);
        memcpy( rowreq_ctx->data.wtpSN, q->wtpSeriesNum, rowreq_ctx->data.wtpSN_len );
	}
    
    /*
     * setup/save data for wtpSysSoftProductor
     * wtpSysSoftProductor(12)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
     */
    /*
     * TODO:246:r: |-> Define wtpSysSoftProductor mapping.
     * Map values between raw/native values and MIB values
     *
     * if(MFD_SUCCESS !=
     *    wtpSysSoftProductor_map(&rowreq_ctx->data.wtpSysSoftProductor, &rowreq_ctx->data.wtpSysSoftProductor_len,
     *                wtpSysSoftProductor, wtpSysSoftProductor_len, 0)) {
     *    return MFD_ERROR;
     * }
     */
    /*
     * make sure there is enough space for wtpSysSoftProductor data
     */
    /*if ((NULL == rowreq_ctx->data.wtpSysSoftProductor) ||
        (rowreq_ctx->data.wtpSysSoftProductor_len < (wtpSysSoftProductor_len * sizeof(rowreq_ctx->data.wtpSysSoftProductor[0])))) {
        snmp_log(LOG_ERR,"not enough space for value\n");
        return MFD_ERROR;
    }*/

    unsigned int wtpSysSoftProductor_len = 0;
	if(q->wtpSysSoftProductor) {
		wtpSysSoftProductor_len = MIN(strlen(q->wtpSysSoftProductor), sizeof(rowreq_ctx->data.wtpSysSoftProductor) - 1);
        rowreq_ctx->data.wtpSysSoftProductor_len = wtpSysSoftProductor_len * sizeof(rowreq_ctx->data.wtpSysSoftProductor[0]);
        memcpy( rowreq_ctx->data.wtpSysSoftProductor, q->wtpSysSoftProductor, rowreq_ctx->data.wtpSysSoftProductor_len );
	}
    
    /*
     * setup/save data for wtpDomain
     * wtpDomain(13)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
     */
    /*
     * TODO:246:r: |-> Define wtpDomain mapping.
     * Map values between raw/native values and MIB values
     *
     * if(MFD_SUCCESS !=
     *    wtpDomain_map(&rowreq_ctx->data.wtpDomain, &rowreq_ctx->data.wtpDomain_len,
     *                wtpDomain, wtpDomain_len, 0)) {
     *    return MFD_ERROR;
     * }
     */
    /*
     * make sure there is enough space for wtpDomain data
     */
    /*if ((NULL == rowreq_ctx->data.wtpDomain) ||
        (rowreq_ctx->data.wtpDomain_len < (wtpDomain_len * sizeof(rowreq_ctx->data.wtpDomain[0])))) {
        snmp_log(LOG_ERR,"not enough space for value\n");
        return MFD_ERROR;
    }*/

    unsigned int wtpDomain_len = 0;
	if(q->wtpDomain) {
		wtpDomain_len = MIN(strlen(q->wtpDomain), sizeof(rowreq_ctx->data.wtpDomain) - 1);
        rowreq_ctx->data.wtpDomain_len = wtpDomain_len * sizeof(rowreq_ctx->data.wtpDomain[0]);
        memcpy( rowreq_ctx->data.wtpDomain, q->wtpDomain, rowreq_ctx->data.wtpDomain_len );
	}
    
    /*
     * setup/save data for wtpSysRestart
     * wtpSysRestart(14)/INTEGER/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wtpSysRestart mapping.
     * Map values between raw/native values and MIB values
     *
    * enums usually need mapping.
    */
    /*if(MFD_SUCCESS !=
       wtpSysRestart_map(&rowreq_ctx->data.wtpSysRestart, wtpSysRestart )) {
        return MFD_ERROR;
    }*/

	rowreq_ctx->data.wtpSysRestart = 1;
    
    /*
     * setup/save data for wtpSysReset
     * wtpSysReset(15)/INTEGER/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wtpSysReset mapping.
     * Map values between raw/native values and MIB values
     *
    * enums usually need mapping.
    */
    /*if(MFD_SUCCESS !=
       wtpSysReset_map(&rowreq_ctx->data.wtpSysReset, wtpSysReset )) {
        return MFD_ERROR;
    }*/

	rowreq_ctx->data.wtpSysReset = 1;
    
    /*
     * setup/save data for wtpTrapDesIPAddress
     * wtpTrapDesIPAddress(16)/DisplayString/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
     */
    /*
     * TODO:246:r: |-> Define wtpTrapDesIPAddress mapping.
     * Map values between raw/native values and MIB values
     *
     * if(MFD_SUCCESS !=
     *    wtpTrapDesIPAddress_map(&rowreq_ctx->data.wtpTrapDesIPAddress, &rowreq_ctx->data.wtpTrapDesIPAddress_len,
     *                wtpTrapDesIPAddress, wtpTrapDesIPAddress_len, 0)) {
     *    return MFD_ERROR;
     * }
     */
    /*
     * make sure there is enough space for wtpTrapDesIPAddress data
     */
    /*if ((NULL == rowreq_ctx->data.wtpTrapDesIPAddress) ||
        (rowreq_ctx->data.wtpTrapDesIPAddress_len < (wtpTrapDesIPAddress_len * sizeof(rowreq_ctx->data.wtpTrapDesIPAddress[0])))) {
        snmp_log(LOG_ERR,"not enough space for value\n");
        return MFD_ERROR;
    }*/				
	//wtpTrapDesIPAddress_len = MIN(strlen(stTrapReceiver.ip_addr),sizeof(wtpTrapDesIPAddress)-1);
	//memset(wtpTrapDesIPAddress,0,sizeof(wtpTrapDesIPAddress));
	//memcpy(wtpTrapDesIPAddress,stTrapReceiver.ip_addr,wtpTrapDesIPAddress_len);
	
	
    //rowreq_ctx->data.wtpTrapDesIPAddress_len = wtpTrapDesIPAddress_len * sizeof(rowreq_ctx->data.wtpTrapDesIPAddress[0]);
    //memcpy( rowreq_ctx->data.wtpTrapDesIPAddress, wtpTrapDesIPAddress, rowreq_ctx->data.wtpTrapDesIPAddress_len );
    
    /*
     * setup/save data for wtpColdReboot
     * wtpColdReboot(17)/INTEGER/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
     */
    /*
     * TODO:246:r: |-> Define wtpColdReboot mapping.
     * Map values between raw/native values and MIB values
     *
    * enums usually need mapping.
    */
    /*if(MFD_SUCCESS !=
       wtpColdReboot_map(&rowreq_ctx->data.wtpColdReboot, wtpColdReboot )) {
        return MFD_ERROR;
    }*/
    
     rowreq_ctx->data.wtpColdReboot = 1;
    
    /*
     * setup/save data for wtplongitude
     * wtplongitude(23)/DisplayString/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
     */
    /** no mapping */
    /*
     * make sure there is enough space for wtplongitude data
     */
	unsigned int wtplongitude_len=0;
	if(q->longitude)
	{
		wtplongitude_len= MIN(strlen(q->longitude),sizeof(rowreq_ctx->data.wtplongitude)-1);
		rowreq_ctx->data.wtplongitude_len=wtplongitude_len * sizeof(rowreq_ctx->data.wtplongitude[0]);
		memcpy(rowreq_ctx->data.wtplongitude, q->longitude, rowreq_ctx->data.wtplongitude_len);
	}

    
    /*
     * setup/save data for wtplatitude
     * wtplatitude(24)/DisplayString/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
     */
    /** no mapping */
    /*
     * make sure there is enough space for wtplatitude data
     */
		unsigned int wtplatitude_len=0;
		if(q->latitude)
		{
			wtplatitude_len= MIN(strlen(q->latitude),sizeof(rowreq_ctx->data.wtplatitude)-1);
			rowreq_ctx->data.wtplatitude_len=wtplatitude_len * sizeof(rowreq_ctx->data.wtplatitude[0]);
			memcpy(rowreq_ctx->data.wtplatitude, q->latitude, rowreq_ctx->data.wtplatitude_len);
		}
    
    /*
     * setup/save data for wtpPowerType
     * wtpPowerType(25)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
     */
    /** no mapping */
    /*
     * make sure there is enough space for wtpPowerType data
     */
		unsigned int wtpPowerType_len=0;
		char test_p[10]={0};
		if(q->power_mode == 0)
		{
			strcpy(test_p,"DC");
		}
		else if(q->power_mode == 1)
		{
			strcpy(test_p,"AC");
		}
		else
		{
			strcpy(test_p,"unknown");
		}
		wtpPowerType_len= MIN(strlen(test_p),sizeof(rowreq_ctx->data.wtpPowerType)-1);
		rowreq_ctx->data.wtpPowerType_len=wtpPowerType_len * sizeof(rowreq_ctx->data.wtpPowerType[0]);
		memcpy(rowreq_ctx->data.wtpPowerType, test_p, rowreq_ctx->data.wtpPowerType_len);

    /*
     * setup/save data for wtpManufactureDate
     * wtpManufactureDate(26)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
     */
    /** no mapping */
    /*
     * make sure there is enough space for wtpManufactureDate data
     */
		unsigned int wtpManufactureDate_len=0;
		if(q->manufacture_date)
		{
			wtpManufactureDate_len= MIN(strlen(q->manufacture_date),sizeof(rowreq_ctx->data.wtpManufactureDate)-1);
			rowreq_ctx->data.wtpManufactureDate_len=wtpManufactureDate_len * sizeof(rowreq_ctx->data.wtpManufactureDate[0]);
			memcpy(rowreq_ctx->data.wtpManufactureDate, q->manufacture_date, rowreq_ctx->data.wtpManufactureDate_len);
		}
    
    /*
     * setup/save data for wtpForwardMode
     * wtpForwardMode(27)/INTEGER/ASN_INTEGER/long(u_long)//l/A/w/E/r/d/h
     */
    /** no mapping */

		if(q->forward_mode == 0)
		{
			rowreq_ctx->data.wtpForwardMode = 0;
		}
		else if(q->forward_mode == 1)
		{
			rowreq_ctx->data.wtpForwardMode = 1;
		}
		else
		{
			rowreq_ctx->data.wtpForwardMode = 2;
		}
		
		/*
     * setup/save data for wtpIpv6-Prefix
     * wtpIpv6-Prefix(28)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
     */
    /** no mapping */
    /*
     * make sure there is enough space for wtpIpv6-Prefix data
     */

    /*
     * setup/save data for wtpCodeVersionInfo
     * wtpCodeVersionInfo(22)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
     */
    /** no mapping */
    /*
     * make sure there is enough space for wtpCodeVersionInfo data
     */
	unsigned int wtpCodeVersionInfo_len = 0;
	if(q->wtpCodeVersionInfo) {
		wtpCodeVersionInfo_len = MIN(strlen(q->wtpCodeVersionInfo), sizeof(rowreq_ctx->data.wtpCodeVersionInfo) - 1);
        rowreq_ctx->data.wtpCodeVersionInfo_len = wtpCodeVersionInfo_len * sizeof(rowreq_ctx->data.wtpCodeVersionInfo[0]);
        memcpy( rowreq_ctx->data.wtpCodeVersionInfo, q->wtpCodeVersionInfo, rowreq_ctx->data.wtpCodeVersionInfo_len );
		snmp_log(LOG_ERR,"q->wtpCodeVersionInfo = %s  rowreq_ctx->data.wtpCodeVersionInfo = %s\n",(q->wtpCodeVersionInfo),(rowreq_ctx->data.wtpCodeVersionInfo));
	}
        /*
         * insert into table container
         */
		            if(CONTAINER_INSERT(container, rowreq_ctx))
		            {
					    dot11WtpInfoTable_release_rowreq_ctx(rowreq_ctx);
		            }
		            ++count;		
			    }
		    }
	    }	
	    free_dbus_message_list(&messageHead, Free_show_all_wtp_basic_information_cmd);
	}

    /*
    ***************************************************
    ***             START EXAMPLE CODE              ***
    ***---------------------------------------------***/
    //if(NULL != filep)
      //  fclose(filep);
    /*
    ***---------------------------------------------***
    ***              END  EXAMPLE CODE              ***
    ***************************************************/

    DEBUGMSGT(("verbose:dot11WtpInfoTable:dot11WtpInfoTable_cache_load",
               "inserted %d records\n", count));

	snmp_log(LOG_DEBUG, "exit dot11WtpInfoTable_cache_load\n");
    return MFD_SUCCESS;
} /* dot11WtpInfoTable_cache_load */

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
dot11WtpInfoTable_cache_free(netsnmp_container *container)
{
    DEBUGMSGTL(("verbose:dot11WtpInfoTable:dot11WtpInfoTable_cache_free","called\n"));

    /*
     * TODO:380:M: Free dot11WtpInfoTable cache.
     */
} /* dot11WtpInfoTable_cache_free */

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
dot11WtpInfoTable_row_prep( dot11WtpInfoTable_rowreq_ctx *rowreq_ctx)
{
    DEBUGMSGTL(("verbose:dot11WtpInfoTable:dot11WtpInfoTable_row_prep","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:390:o: Prepare row for request.
     * If populating row data was delayed, this is the place to
     * fill in the row for this request.
     */

    return MFD_SUCCESS;
} /* dot11WtpInfoTable_row_prep */

/** @} */
