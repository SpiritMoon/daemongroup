/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.18.2.1 $ of : mfd-data-get.m2c,v $
 *
 * $Id:$
 *
 * @file dot11WtpEthPortTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef DOT11WTPETHPORTTABLE_DATA_GET_H
#define DOT11WTPETHPORTTABLE_DATA_GET_H

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
 *** Table dot11WtpEthPortTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11WtpEthPortTable is subid 2 of wtpStats.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.1.2.2, length: 12
*/
    /*
     * indexes
     */
    int wtpMacAddr_map(char **mib_wtpMacAddr_val_ptr_ptr, size_t *mib_wtpMacAddr_val_ptr_len_ptr, char *raw_wtpMacAddr_val_ptr, size_t raw_wtpMacAddr_val_ptr_len, int allow_realloc);

    int wtpWirelessUpPortRate_map(u_long *mib_wtpWirelessUpPortRate_val_ptr, u_long raw_wtpWirelessUpPortRate_val);
    int wtpWirelessUpPortRate_get( dot11WtpEthPortTable_rowreq_ctx *rowreq_ctx, unsigned long * wtpWirelessUpPortRate_val_ptr );
    int wtpWirelessDownPortRate_map(u_long *mib_wtpWirelessDownPortRate_val_ptr, u_long raw_wtpWirelessDownPortRate_val);
    int wtpWirelessDownPortRate_get( dot11WtpEthPortTable_rowreq_ctx *rowreq_ctx, unsigned long * wtpWirelessDownPortRate_val_ptr );
    int wtpWirelessUpPortUDTimes_map(long *mib_wtpWirelessUpPortUDTimes_val_ptr, long raw_wtpWirelessUpPortUDTimes_val);
    int wtpWirelessUpPortUDTimes_get( dot11WtpEthPortTable_rowreq_ctx *rowreq_ctx, long * wtpWirelessUpPortUDTimes_val_ptr );
    int wtpWirelessDownPortUDTimes_map(long *mib_wtpWirelessDownPortUDTimes_val_ptr, long raw_wtpWirelessDownPortUDTimes_val);
    int wtpWirelessDownPortUDTimes_get( dot11WtpEthPortTable_rowreq_ctx *rowreq_ctx, long * wtpWirelessDownPortUDTimes_val_ptr );
    int wtpUplinkDataThroughput_map(u_long *mib_wtpUplinkDataThroughput_val_ptr, u_long raw_wtpUplinkDataThroughput_val);
    int wtpUplinkDataThroughput_get( dot11WtpEthPortTable_rowreq_ctx *rowreq_ctx, unsigned long * wtpUplinkDataThroughput_val_ptr );
    int wtpDownlinkDataThroughput_map(u_long *mib_wtpDownlinkDataThroughput_val_ptr, u_long raw_wtpDownlinkDataThroughput_val);
    int wtpDownlinkDataThroughput_get( dot11WtpEthPortTable_rowreq_ctx *rowreq_ctx, unsigned long * wtpDownlinkDataThroughput_val_ptr );
    int wtpPhyInterMnt_map(long *mib_wtpPhyInterMnt_val_ptr, long raw_wtpPhyInterMnt_val);
    int wtpPhyInterMnt_get( dot11WtpEthPortTable_rowreq_ctx *rowreq_ctx, long * wtpPhyInterMnt_val_ptr );
    int wtpWirelessBandwidthUsage_map(char **mib_wtpWirelessBandwidthUsage_val_ptr_ptr, size_t *mib_wtpWirelessBandwidthUsage_val_ptr_len_ptr, char *raw_wtpWirelessBandwidthUsage_val_ptr, size_t raw_wtpWirelessBandwidthUsage_val_ptr_len, int allow_realloc);
    int wtpWirelessBandwidthUsage_get( dot11WtpEthPortTable_rowreq_ctx *rowreq_ctx, char **wtpWirelessBandwidthUsage_val_ptr_ptr, size_t *wtpWirelessBandwidthUsage_val_ptr_len_ptr );
	int wtpWirelessPortRxRate_get( dot11WtpEthPortTable_rowreq_ctx *rowreq_ctx, u_long * wtpWirelessPortRxRate_val_ptr );
	int wtpWirelessPortTxRate_get( dot11WtpEthPortTable_rowreq_ctx *rowreq_ctx, u_long * wtpWirelessPortTxRate_val_ptr );
	
int dot11WtpEthPortTable_indexes_set_tbl_idx(dot11WtpEthPortTable_mib_index *tbl_idx, char *wtpMacAddr_val_ptr,  size_t wtpMacAddr_val_ptr_len);
int dot11WtpEthPortTable_indexes_set(dot11WtpEthPortTable_rowreq_ctx *rowreq_ctx, char *wtpMacAddr_val_ptr,  size_t wtpMacAddr_val_ptr_len);




#ifdef __cplusplus
}
#endif

#endif /* DOT11WTPETHPORTTABLE_DATA_GET_H */
/** @} */