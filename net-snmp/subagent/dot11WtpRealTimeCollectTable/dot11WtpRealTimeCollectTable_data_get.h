/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.18.2.1 $ of : mfd-data-get.m2c,v $
 *
 * $Id:$
 *
 * @file dot11WtpRealTimeCollectTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef DOT11WTPREALTIMECOLLECTTABLE_DATA_GET_H
#define DOT11WTPREALTIMECOLLECTTABLE_DATA_GET_H

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
 *** Table dot11WtpRealTimeCollectTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11WtpRealTimeCollectTable is subid 6 of wtpGeneralInfo.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.33050.6.1.1.1.6, length: 12
*/
    /*
     * indexes
     */
    int wtpMacAddr_realtimecollect_map(char **mib_wtpMacAddr_val_ptr_ptr, size_t *mib_wtpMacAddr_val_ptr_len_ptr, char *raw_wtpMacAddr_val_ptr, size_t raw_wtpMacAddr_val_ptr_len, int allow_realloc);

    int wtpRtCollectOnOff_map(u_long *mib_wtpRtCollectOnOff_val_ptr, u_long raw_wtpRtCollectOnOff_val);
    int wtpRtCollectOnOff_get( dot11WtpRealTimeCollectTable_rowreq_ctx *rowreq_ctx, u_long * wtpRtCollectOnOff_val_ptr );
    int CPURTUsage_map(long *mib_CPURTUsage_val_ptr, long raw_CPURTUsage_val);
    int CPURTUsage_get( dot11WtpRealTimeCollectTable_rowreq_ctx *rowreq_ctx, long * CPURTUsage_val_ptr );
    int MemRTUsage_map(long *mib_MemRTUsage_val_ptr, long raw_MemRTUsage_val);
    int MemRTUsage_get( dot11WtpRealTimeCollectTable_rowreq_ctx *rowreq_ctx, long * MemRTUsage_val_ptr );
    int wtpAssocTimes_map(u_long *mib_wtpAssocTimes_val_ptr, u_long raw_wtpAssocTimes_val);
    int wtpAssocTimes_get( dot11WtpRealTimeCollectTable_rowreq_ctx *rowreq_ctx, u_long * wtpAssocTimes_val_ptr );
    int wtpAssocFailtimes_map(u_long *mib_wtpAssocFailtimes_val_ptr, u_long raw_wtpAssocFailtimes_val);
    int wtpAssocFailtimes_get( dot11WtpRealTimeCollectTable_rowreq_ctx *rowreq_ctx, u_long * wtpAssocFailtimes_val_ptr );
    int wtpReassocTimes_map(u_long *mib_wtpReassocTimes_val_ptr, u_long raw_wtpReassocTimes_val);
    int wtpReassocTimes_get( dot11WtpRealTimeCollectTable_rowreq_ctx *rowreq_ctx, u_long * wtpReassocTimes_val_ptr );
    int wtpIfIndiscardPkts_map(u_long *mib_wtpIfIndiscardPkts_val_ptr, u_long raw_wtpIfIndiscardPkts_val);
    int wtpIfIndiscardPkts_get( dot11WtpRealTimeCollectTable_rowreq_ctx *rowreq_ctx, u_long * wtpIfIndiscardPkts_val_ptr );
    int wtpTxBytes_map(unsigned long long *mib_wtpTxBytes_val_ptr, unsigned long long raw_wtpTxBytes_val);
    int wtpTxBytes_get( dot11WtpRealTimeCollectTable_rowreq_ctx *rowreq_ctx, unsigned long long * wtpTxBytes_val_ptr );
    int wtpRxBytes_map(unsigned long long *mib_wtpRxBytes_val_ptr, unsigned long long raw_wtpRxBytes_val);
    int wtpRxBytes_get( dot11WtpRealTimeCollectTable_rowreq_ctx *rowreq_ctx, unsigned long long * wtpRxBytes_val_ptr );
	int wtpReassocFailure_map(u_long *mib_wtpReassocFailure_val_ptr, u_long raw_wtpReassocFailure_val);
    int wtpReassocFailure_get( dot11WtpRealTimeCollectTable_rowreq_ctx *rowreq_ctx, u_long * wtpReassocFailure_val_ptr );
    int wtpSuccAssociatedNum_map(u_long *mib_wtpSuccAssociatedNum_val_ptr, u_long raw_wtpSuccAssociatedNum_val);
    int wtpSuccAssociatedNum_get( dot11WtpRealTimeCollectTable_rowreq_ctx *rowreq_ctx, u_long * wtpSuccAssociatedNum_val_ptr );


int dot11WtpRealTimeCollectTable_indexes_set_tbl_idx(dot11WtpRealTimeCollectTable_mib_index *tbl_idx, char *wtpMacAddr_val_ptr,  size_t wtpMacAddr_val_ptr_len);
int dot11WtpRealTimeCollectTable_indexes_set(dot11WtpRealTimeCollectTable_rowreq_ctx *rowreq_ctx, char *wtpMacAddr_val_ptr,  size_t wtpMacAddr_val_ptr_len);




#ifdef __cplusplus
}
#endif

#endif /* DOT11WTPREALTIMECOLLECTTABLE_DATA_GET_H */
/** @} */