/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.18.2.1 $ of : mfd-data-get.m2c,v $
 *
 * $Id:$
 *
 * @file dot11WtpWlanDataPktsTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef DOT11WTPWLANDATAPKTSTABLE_DATA_GET_H
#define DOT11WTPWLANDATAPKTSTABLE_DATA_GET_H

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
 *** Table dot11WtpWlanDataPktsTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11WtpWlanDataPktsTable is subid 2 of wtpWlan.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.33050.6.1.1.5.2, length: 12
*/
    /*
     * indexes
     */
    int wtpMacAddr_map(char **mib_wtpMacAddr_val_ptr_ptr, size_t *mib_wtpMacAddr_val_ptr_len_ptr, char *raw_wtpMacAddr_val_ptr, size_t raw_wtpMacAddr_val_ptr_len, int allow_realloc);
    int wlanCurrID_map(long *mib_wlanCurrID_val_ptr, long raw_wlanCurrID_val);

    int wtpSsidTxTermAllByte_map(unsigned long long *mib_wtpSsidTxTermAllByte_val_ptr, unsigned long long raw_wtpSsidTxTermAllByte_val);
    int wtpSsidTxTermAllByte_get( dot11WtpWlanDataPktsTable_rowreq_ctx *rowreq_ctx, unsigned long long * wtpSsidTxTermAllByte_val_ptr );
    int wtpSsidRxTermAllPack_map(unsigned long *mib_wtpSsidRxTermAllPack_val_ptr, unsigned long raw_wtpSsidRxTermAllPack_val);
    int wtpSsidRxTermAllPack_get( dot11WtpWlanDataPktsTable_rowreq_ctx *rowreq_ctx, unsigned long * wtpSsidRxTermAllPack_val_ptr );
    int wtpSsidRxTermAllByte_map(unsigned long long *mib_wtpSsidRxTermAllByte_val_ptr, unsigned long long raw_wtpSsidRxTermAllByte_val);
    int wtpSsidRxTermAllByte_get( dot11WtpWlanDataPktsTable_rowreq_ctx *rowreq_ctx, unsigned long long * wtpSsidRxTermAllByte_val_ptr );
    int wtpSsidWirelessMacRxDataRightByte_map(unsigned long long *mib_wtpSsidWirelessMacRxDataRightByte_val_ptr, unsigned long long raw_wtpSsidWirelessMacRxDataRightByte_val);
    int wtpSsidWirelessMacRxDataRightByte_get( dot11WtpWlanDataPktsTable_rowreq_ctx *rowreq_ctx, unsigned long long * wtpSsidWirelessMacRxDataRightByte_val_ptr );
    int wtpSsidWirelessMacTxDataRightByte_map(unsigned long long *mib_wtpSsidWirelessMacTxDataRightByte_val_ptr, unsigned long long raw_wtpSsidWirelessMacTxDataRightByte_val);
    int wtpSsidWirelessMacTxDataRightByte_get( dot11WtpWlanDataPktsTable_rowreq_ctx *rowreq_ctx, unsigned long long * wtpSsidWirelessMacTxDataRightByte_val_ptr );
    int wtpSsidRxDataErrPack_map(unsigned long *mib_wtpSsidRxDataErrPack_val_ptr, unsigned long raw_wtpSsidRxDataErrPack_val);
    int wtpSsidRxDataErrPack_get( dot11WtpWlanDataPktsTable_rowreq_ctx *rowreq_ctx, unsigned long * wtpSsidRxDataErrPack_val_ptr );
    int wtpNetWiredRxPack_map(unsigned long *mib_wtpNetWiredRxPack_val_ptr, unsigned long raw_wtpNetWiredRxPack_val);
    int wtpNetWiredRxPack_get( dot11WtpWlanDataPktsTable_rowreq_ctx *rowreq_ctx, unsigned long * wtpNetWiredRxPack_val_ptr );
    int wtpSsidTxTermAllPack_map(unsigned long *mib_wtpSsidTxTermAllPack_val_ptr, unsigned long raw_wtpSsidTxTermAllPack_val);
    int wtpSsidTxTermAllPack_get( dot11WtpWlanDataPktsTable_rowreq_ctx *rowreq_ctx, unsigned long * wtpSsidTxTermAllPack_val_ptr );
    int wtpNetWiredTxPack_map(unsigned long *mib_wtpNetWiredTxPack_val_ptr, unsigned long raw_wtpNetWiredTxPack_val);
    int wtpNetWiredTxPack_get( dot11WtpWlanDataPktsTable_rowreq_ctx *rowreq_ctx, unsigned long * wtpNetWiredTxPack_val_ptr );
    int wtpSsidTxDataErrPkts_map(unsigned long *mib_wtpSsidTxDataErrPkts_val_ptr, unsigned long raw_wtpSsidTxDataErrPkts_val);
    int wtpSsidTxDataErrPkts_get( dot11WtpWlanDataPktsTable_rowreq_ctx *rowreq_ctx, unsigned long * wtpSsidTxDataErrPkts_val_ptr );
    int wtpWirelessReTxPkts_map(unsigned long *mib_wtpWirelessReTxPkts_val_ptr, unsigned long raw_wtpWirelessReTxPkts_val);
    int wtpWirelessReTxPkts_get( dot11WtpWlanDataPktsTable_rowreq_ctx *rowreq_ctx, unsigned long * wtpWirelessReTxPkts_val_ptr );
    int wtpWirelessErrPktsRate_map(char **mib_wtpWirelessErrPktsRate_val_ptr_ptr, size_t *mib_wtpWirelessErrPktsRate_val_ptr_len_ptr, char *raw_wtpWirelessErrPktsRate_val_ptr, size_t raw_wtpWirelessErrPktsRate_val_ptr_len, int allow_realloc);
    int wtpWirelessErrPktsRate_get( dot11WtpWlanDataPktsTable_rowreq_ctx *rowreq_ctx, char **wtpWirelessErrPktsRate_val_ptr_ptr, size_t *wtpWirelessErrPktsRate_val_ptr_len_ptr );
    int wtpWirelessTxBroadcastMsgNum_map(unsigned long *mib_wtpWirelessTxBroadcastMsgNum_val_ptr, unsigned long raw_wtpWirelessTxBroadcastMsgNum_val);
    int wtpWirelessTxBroadcastMsgNum_get( dot11WtpWlanDataPktsTable_rowreq_ctx *rowreq_ctx, unsigned long * wtpWirelessTxBroadcastMsgNum_val_ptr );
    int wtpStaUplinkMaxRate_map(unsigned long *mib_wtpStaUplinkMaxRate_val_ptr, unsigned long raw_wtpStaUplinkMaxRate_val);
    int wtpStaUplinkMaxRate_get( dot11WtpWlanDataPktsTable_rowreq_ctx *rowreq_ctx, unsigned long * wtpStaUplinkMaxRate_val_ptr );
    int wtpStaDwlinkMaxRate_map(unsigned long *mib_wtpStaDwlinkMaxRate_val_ptr, unsigned long raw_wtpStaDwlinkMaxRate_val);
    int wtpStaDwlinkMaxRate_get( dot11WtpWlanDataPktsTable_rowreq_ctx *rowreq_ctx, unsigned long * wtpStaDwlinkMaxRate_val_ptr );
    int wtpNetWiredRxErrPack_map(unsigned long *mib_wtpNetWiredRxErrPack_val_ptr, unsigned long raw_wtpNetWiredRxErrPack_val);
    int wtpNetWiredRxErrPack_get( dot11WtpWlanDataPktsTable_rowreq_ctx *rowreq_ctx, unsigned long * wtpNetWiredRxErrPack_val_ptr );
    int wtpNetWiredRxRightPack_map(unsigned long *mib_wtpNetWiredRxRightPack_val_ptr, unsigned long raw_wtpNetWiredRxRightPack_val);
    int wtpNetWiredRxRightPack_get( dot11WtpWlanDataPktsTable_rowreq_ctx *rowreq_ctx, unsigned long * wtpNetWiredRxRightPack_val_ptr );
    int wtpNetWiredRxByte_map(unsigned long long *mib_wtpNetWiredRxByte_val_ptr, unsigned long long raw_wtpNetWiredRxByte_val);
    int wtpNetWiredRxByte_get( dot11WtpWlanDataPktsTable_rowreq_ctx *rowreq_ctx, unsigned long long * wtpNetWiredRxByte_val_ptr );
    int wtpNetWiredTxByte_map(unsigned long long *mib_wtpNetWiredTxByte_val_ptr, unsigned long long raw_wtpNetWiredTxByte_val);
    int wtpNetWiredTxByte_get( dot11WtpWlanDataPktsTable_rowreq_ctx *rowreq_ctx, unsigned long long * wtpNetWiredTxByte_val_ptr );
    int wtpNetWiredTxErrPack_map(unsigned long *mib_wtpNetWiredTxErrPack_val_ptr, unsigned long raw_wtpNetWiredTxErrPack_val);
    int wtpNetWiredTxErrPack_get( dot11WtpWlanDataPktsTable_rowreq_ctx *rowreq_ctx, unsigned long * wtpNetWiredTxErrPack_val_ptr );
    int wtpNetWiredTxRightPack_map(unsigned long *mib_wtpNetWiredTxRightPack_val_ptr, unsigned long raw_wtpNetWiredTxRightPack_val);
    int wtpNetWiredTxRightPack_get( dot11WtpWlanDataPktsTable_rowreq_ctx *rowreq_ctx, unsigned long * wtpNetWiredTxRightPack_val_ptr );
    int wtpSsidTxDataAllPack_map(unsigned long *mib_wtpSsidTxDataAllPack_val_ptr, unsigned long raw_wtpSsidTxDataAllPack_val);
    int wtpSsidTxDataAllPack_get( dot11WtpWlanDataPktsTable_rowreq_ctx *rowreq_ctx, unsigned long * wtpSsidTxDataAllPack_val_ptr );
    int wtpNetWiredRxErrPktsRate_map(char **mib_wtpNetWiredRxErrPktsRate_val_ptr_ptr, size_t *mib_wtpNetWiredRxErrPktsRate_val_ptr_len_ptr, char *raw_wtpNetWiredRxErrPktsRate_val_ptr, size_t raw_wtpNetWiredRxErrPktsRate_val_ptr_len, int allow_realloc);
    int wtpNetWiredRxErrPktsRate_get( dot11WtpWlanDataPktsTable_rowreq_ctx *rowreq_ctx, char **wtpNetWiredRxErrPktsRate_val_ptr_ptr, size_t *wtpNetWiredRxErrPktsRate_val_ptr_len_ptr );
    int wtpNetWiredTxErrPktsRate_map(char **mib_wtpNetWiredTxErrPktsRate_val_ptr_ptr, size_t *mib_wtpNetWiredTxErrPktsRate_val_ptr_len_ptr, char *raw_wtpNetWiredTxErrPktsRate_val_ptr, size_t raw_wtpNetWiredTxErrPktsRate_val_ptr_len, int allow_realloc);
    int wtpNetWiredTxErrPktsRate_get( dot11WtpWlanDataPktsTable_rowreq_ctx *rowreq_ctx, char **wtpNetWiredTxErrPktsRate_val_ptr_ptr, size_t *wtpNetWiredTxErrPktsRate_val_ptr_len_ptr );
    int wtpUsrWirelessMacRecvDataPack_map(unsigned long *mib_wtpUsrWirelessMacRecvDataPack_val_ptr, unsigned long raw_wtpUsrWirelessMacRecvDataPack_val);
    int wtpUsrWirelessMacRecvDataPack_get( dot11WtpWlanDataPktsTable_rowreq_ctx *rowreq_ctx, unsigned long * wtpUsrWirelessMacRecvDataPack_val_ptr );


int dot11WtpWlanDataPktsTable_indexes_set_tbl_idx(dot11WtpWlanDataPktsTable_mib_index *tbl_idx, char *wtpMacAddr_val_ptr,  size_t wtpMacAddr_val_ptr_len, long wlanCurrID_val);
int dot11WtpWlanDataPktsTable_indexes_set(dot11WtpWlanDataPktsTable_rowreq_ctx *rowreq_ctx, char *wtpMacAddr_val_ptr,  size_t wtpMacAddr_val_ptr_len, long wlanCurrID_val);




#ifdef __cplusplus
}
#endif

#endif /* DOT11WTPWLANDATAPKTSTABLE_DATA_GET_H */
/** @} */