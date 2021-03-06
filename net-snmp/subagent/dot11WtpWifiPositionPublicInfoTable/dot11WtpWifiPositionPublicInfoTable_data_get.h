/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 12088 $ of $
 *
 * $Id:$
 *
 * @file dot11WtpWifiPositionPublicInfoTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef DOT11WTPWIFIPOSITIONPUBLICINFOTABLE_DATA_GET_H
#define DOT11WTPWIFIPOSITIONPUBLICINFOTABLE_DATA_GET_H

#ifdef __cplusplus
extern "C" {
#endif

/* *********************************************************************
 * GET function declarations
 */

/* *********************************************************************
 * GET Table declarations
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table dot11WtpWifiPositionPublicInfoTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * DOT11-WTP-MIB::dot11WtpWifiPositionPublicInfoTable is subid 6 of wtpStation.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.1.8.6, length: 12
*/
    /*
     * indexes
     */

    int wtpWifiPositionServerIp_get( dot11WtpWifiPositionPublicInfoTable_rowreq_ctx *rowreq_ctx, u_long * wtpWifiPositionServerIp_val_ptr );
    int wtpWifiPositionServerPort_get( dot11WtpWifiPositionPublicInfoTable_rowreq_ctx *rowreq_ctx, long * wtpWifiPositionServerPort_val_ptr );
    int wtpWifiPositionScanInterval_get( dot11WtpWifiPositionPublicInfoTable_rowreq_ctx *rowreq_ctx, long * wtpWifiPositionScanInterval_val_ptr );
    int wtpWifiPositionScanTime_get( dot11WtpWifiPositionPublicInfoTable_rowreq_ctx *rowreq_ctx, long * wtpWifiPositionScanTime_val_ptr );
    int wtpWifiPositionScanChannel_get( dot11WtpWifiPositionPublicInfoTable_rowreq_ctx *rowreq_ctx, U64 * wtpWifiPositionScanChannel_val_ptr );
    int wtpWifiPositionScanType_get( dot11WtpWifiPositionPublicInfoTable_rowreq_ctx *rowreq_ctx, u_long * wtpWifiPositionScanType_val_ptr );
    int wtpWifiPositionDataReportInterval_get( dot11WtpWifiPositionPublicInfoTable_rowreq_ctx *rowreq_ctx, long * wtpWifiPositionDataReportInterval_val_ptr );
    int wtpWifiPositionRssiThreshold_get( dot11WtpWifiPositionPublicInfoTable_rowreq_ctx *rowreq_ctx, long * wtpWifiPositionRssiThreshold_val_ptr );
    int wtpWifiPositionScanSwitch_get( dot11WtpWifiPositionPublicInfoTable_rowreq_ctx *rowreq_ctx, u_long * wtpWifiPositionScanSwitch_val_ptr );


int dot11WtpWifiPositionPublicInfoTable_indexes_set_tbl_idx(dot11WtpWifiPositionPublicInfoTable_mib_index *tbl_idx, char *wtpMacAddr_val_ptr,  size_t wtpMacAddr_val_ptr_len, long WifiPositionFrequency_val);
int dot11WtpWifiPositionPublicInfoTable_indexes_set(dot11WtpWifiPositionPublicInfoTable_rowreq_ctx *rowreq_ctx, char *wtpMacAddr_val_ptr,  size_t wtpMacAddr_val_ptr_len, long WifiPositionFrequency_val);




#ifdef __cplusplus
}
#endif

#endif /* DOT11WTPWIFIPOSITIONPUBLICINFOTABLE_DATA_GET_H */
/** @} */
