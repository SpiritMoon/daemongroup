/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.18.2.1 $ of : mfd-data-get.m2c,v $
 *
 * $Id:$
 *
 * @file dot11RadioStatsTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef DOT11RADIOSTATSTABLE_DATA_GET_H
#define DOT11RADIOSTATSTABLE_DATA_GET_H

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
 *** Table dot11RadioStatsTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11RadioStatsTable is subid 1 of wtpRadio.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.1.4.1, length: 12
*/
    /*
     * indexes
     */
    int wtpMacAddr_map(char **mib_wtpMacAddr_val_ptr_ptr, size_t *mib_wtpMacAddr_val_ptr_len_ptr, char *raw_wtpMacAddr_val_ptr, size_t raw_wtpMacAddr_val_ptr_len, int allow_realloc);
    int wtpRadCurrID_map(long *mib_wtpRadCurrID_val_ptr, long raw_wtpRadCurrID_val);
	int	wtpRadCurrId_stats_get( dot11RadioStatsTable_rowreq_ctx *rowreq_ctx, long * wtpRadCurrId_val_ptr );
    int wtpCurTxPower_map(long *mib_wtpCurTxPower_val_ptr, long raw_wtpCurTxPower_val);
    int wtpCurTxPower_get( dot11RadioStatsTable_rowreq_ctx *rowreq_ctx, long * wtpCurTxPower_val_ptr );
    int wtpPowerManage_map(u_long *mib_wtpPowerManage_val_ptr, u_long raw_wtpPowerManage_val);
    int wtpPowerManage_get( dot11RadioStatsTable_rowreq_ctx *rowreq_ctx, u_long * wtpPowerManage_val_ptr );
    int wtpRxPower_map(long *mib_wtpRxPower_val_ptr, long raw_wtpRxPower_val);
    int wtpRxPower_get( dot11RadioStatsTable_rowreq_ctx *rowreq_ctx, long * wtpRxPower_val_ptr );
    int wtpCurTakeFreqPoint_map(long *mib_wtpCurTakeFreqPoint_val_ptr, long raw_wtpCurTakeFreqPoint_val);
    int wtpCurTakeFreqPoint_get( dot11RadioStatsTable_rowreq_ctx *rowreq_ctx, long * wtpCurTakeFreqPoint_val_ptr );
    int wtpCurConfChannel_map(long *mib_wtpCurConfChannel_val_ptr, long raw_wtpCurConfChannel_val);
    int wtpCurConfChannel_get( dot11RadioStatsTable_rowreq_ctx *rowreq_ctx, long * wtpCurConfChannel_val_ptr );
    int wtpProtoMode_map(u_long *mib_wtpProtoMode_val_ptr, u_long raw_wtpProtoMode_val);
    int wtpProtoMode_get( dot11RadioStatsTable_rowreq_ctx *rowreq_ctx, u_long * wtpProtoMode_val_ptr );
    int wtpSampleTime_map(u_long *mib_wtpSampleTime_val_ptr, u_long raw_wtpSampleTime_val);
    int wtpSampleTime_get( dot11RadioStatsTable_rowreq_ctx *rowreq_ctx, u_long * wtpSampleTime_val_ptr );
    int wtpTerminalConRate_map(long *mib_wtpTerminalConRate_val_ptr, long raw_wtpTerminalConRate_val);
    int wtpTerminalConRate_get( dot11RadioStatsTable_rowreq_ctx *rowreq_ctx, long * wtpTerminalConRate_val_ptr );
    int wtpConfigAvailSpeed_map(char **mib_wtpConfigAvailSpeed_val_ptr_ptr, size_t *mib_wtpConfigAvailSpeed_val_ptr_len_ptr, char *raw_wtpConfigAvailSpeed_val_ptr, size_t raw_wtpConfigAvailSpeed_val_ptr_len, int allow_realloc);
    int wtpConfigAvailSpeed_get( dot11RadioStatsTable_rowreq_ctx *rowreq_ctx, char **wtpConfigAvailSpeed_val_ptr_ptr, size_t *wtpConfigAvailSpeed_val_ptr_len_ptr );
    int wtpConfigForceSpeed_map(char **mib_wtpConfigForceSpeed_val_ptr_ptr, size_t *mib_wtpConfigForceSpeed_val_ptr_len_ptr, char *raw_wtpConfigForceSpeed_val_ptr, size_t raw_wtpConfigForceSpeed_val_ptr_len, int allow_realloc);
    int wtpConfigForceSpeed_get( dot11RadioStatsTable_rowreq_ctx *rowreq_ctx, char **wtpConfigForceSpeed_val_ptr_ptr, size_t *wtpConfigForceSpeed_val_ptr_len_ptr );
    int wtpRTSCTSEnable_map(u_long *mib_wtpRTSCTSEnable_val_ptr, u_long raw_wtpRTSCTSEnable_val);
    int wtpRTSCTSEnable_get( dot11RadioStatsTable_rowreq_ctx *rowreq_ctx, u_long * wtpRTSCTSEnable_val_ptr );
    int wtpconfigBeaconFrameBlank_map(long *mib_wtpconfigBeaconFrameBlank_val_ptr, long raw_wtpconfigBeaconFrameBlank_val);
    int wtpconfigBeaconFrameBlank_get( dot11RadioStatsTable_rowreq_ctx *rowreq_ctx, long * wtpconfigBeaconFrameBlank_val_ptr );


int dot11RadioStatsTable_indexes_set_tbl_idx(dot11RadioStatsTable_mib_index *tbl_idx, char *wtpMacAddr_val_ptr,  size_t wtpMacAddr_val_ptr_len, long wtpRadCurrID_val);
int dot11RadioStatsTable_indexes_set(dot11RadioStatsTable_rowreq_ctx *rowreq_ctx, char *wtpMacAddr_val_ptr,  size_t wtpMacAddr_val_ptr_len, long wtpRadCurrID_val);




#ifdef __cplusplus
}
#endif

#endif /* DOT11RADIOSTATSTABLE_DATA_GET_H */
/** @} */