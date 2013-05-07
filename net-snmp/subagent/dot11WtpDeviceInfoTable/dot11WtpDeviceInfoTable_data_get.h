/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.18.2.1 $ of : mfd-data-get.m2c,v $
 *
 * $Id:$
 *
 * @file dot11WtpDeviceInfoTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef DOT11WTPDEVICEINFOTABLE_DATA_GET_H
#define DOT11WTPDEVICEINFOTABLE_DATA_GET_H

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
 *** Table dot11WtpDeviceInfoTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11WtpDeviceInfoTable is subid 2 of wtpGeneralInfo.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.1.1.2, length: 12
*/
    /*
     * indexes
     */
    int wtpMacAddr_map(char **mib_wtpMacAddr_val_ptr_ptr, size_t *mib_wtpMacAddr_val_ptr_len_ptr, char *raw_wtpMacAddr_val_ptr, size_t raw_wtpMacAddr_val_ptr_len, int allow_realloc);

    int wtpCPUType_map(char **mib_wtpCPUType_val_ptr_ptr, size_t *mib_wtpCPUType_val_ptr_len_ptr, char *raw_wtpCPUType_val_ptr, size_t raw_wtpCPUType_val_ptr_len, int allow_realloc);
    int wtpCPUType_get( dot11WtpDeviceInfoTable_rowreq_ctx *rowreq_ctx, char **wtpCPUType_val_ptr_ptr, size_t *wtpCPUType_val_ptr_len_ptr );
    int wtpCPUProcessAbility_map(char **mib_wtpCPUProcessAbility_val_ptr_ptr, size_t *mib_wtpCPUProcessAbility_val_ptr_len_ptr, char *raw_wtpCPUProcessAbility_val_ptr, size_t raw_wtpCPUProcessAbility_val_ptr_len, int allow_realloc);
    int wtpCPUProcessAbility_get( dot11WtpDeviceInfoTable_rowreq_ctx *rowreq_ctx, char **wtpCPUProcessAbility_val_ptr_ptr, size_t *wtpCPUProcessAbility_val_ptr_len_ptr );
    int wtpCPURTUsage_map(long *mib_wtpCPURTUsage_val_ptr, long raw_wtpCPURTUsage_val);
    int wtpCPURTUsage_get( dot11WtpDeviceInfoTable_rowreq_ctx *rowreq_ctx, long * wtpCPURTUsage_val_ptr );
    int wtpCPUPeakUsage_map(char **mib_wtpCPUPeakUsage_val_ptr_ptr, size_t *mib_wtpCPUPeakUsage_val_ptr_len_ptr, char *raw_wtpCPUPeakUsage_val_ptr, size_t raw_wtpCPUPeakUsage_val_ptr_len, int allow_realloc);
    int wtpCPUPeakUsage_get( dot11WtpDeviceInfoTable_rowreq_ctx *rowreq_ctx, char **wtpCPUPeakUsage_val_ptr_ptr, size_t *wtpCPUPeakUsage_val_ptr_len_ptr );
    int wtpCPUAvgUsage_map(long *mib_wtpCPUAvgUsage_val_ptr, long raw_wtpCPUAvgUsage_val);
    int wtpCPUAvgUsage_get( dot11WtpDeviceInfoTable_rowreq_ctx *rowreq_ctx, long * wtpCPUAvgUsage_val_ptr );
    int wtpCPUusageThreshhd_map(long *mib_wtpCPUusageThreshhd_val_ptr, long raw_wtpCPUusageThreshhd_val);
    int wtpCPUusageThreshhd_get( dot11WtpDeviceInfoTable_rowreq_ctx *rowreq_ctx, long * wtpCPUusageThreshhd_val_ptr );
    int wtpMemoryType_map(char **mib_wtpMemoryType_val_ptr_ptr, size_t *mib_wtpMemoryType_val_ptr_len_ptr, char *raw_wtpMemoryType_val_ptr, size_t raw_wtpMemoryType_val_ptr_len, int allow_realloc);
    int wtpMemoryType_get( dot11WtpDeviceInfoTable_rowreq_ctx *rowreq_ctx, char **wtpMemoryType_val_ptr_ptr, size_t *wtpMemoryType_val_ptr_len_ptr );
    int wtpMemoryCapacity_map(u_long *mib_wtpMemoryCapacity_val_ptr, u_long raw_wtpMemoryCapacity_val);
    int wtpMemoryCapacity_get( dot11WtpDeviceInfoTable_rowreq_ctx *rowreq_ctx, u_long * wtpMemoryCapacity_val_ptr );
    int wtpMemRTUsage_map(long *mib_wtpMemRTUsage_val_ptr, long raw_wtpMemRTUsage_val);
    int wtpMemRTUsage_get( dot11WtpDeviceInfoTable_rowreq_ctx *rowreq_ctx, long * wtpMemRTUsage_val_ptr );
    int wtpMemPeakUsage_map(char **mib_wtpMemPeakUsage_val_ptr_ptr, size_t *mib_wtpMemPeakUsage_val_ptr_len_ptr, char *raw_wtpMemPeakUsage_val_ptr, size_t raw_wtpMemPeakUsage_val_ptr_len, int allow_realloc);
    int wtpMemPeakUsage_get( dot11WtpDeviceInfoTable_rowreq_ctx *rowreq_ctx, char **wtpMemPeakUsage_val_ptr_ptr, size_t *wtpMemPeakUsage_val_ptr_len_ptr );
    int wtpMemAvgUsage_map(long *mib_wtpMemAvgUsage_val_ptr, long raw_wtpMemAvgUsage_val);
    int wtpMemAvgUsage_get( dot11WtpDeviceInfoTable_rowreq_ctx *rowreq_ctx, long * wtpMemAvgUsage_val_ptr );
    int wtpMemUsageThreshhd_map(long *mib_wtpMemUsageThreshhd_val_ptr, long raw_wtpMemUsageThreshhd_val);
    int wtpMemUsageThreshhd_get( dot11WtpDeviceInfoTable_rowreq_ctx *rowreq_ctx, long * wtpMemUsageThreshhd_val_ptr );
    int wtpFlashType_map(char **mib_wtpFlashType_val_ptr_ptr, size_t *mib_wtpFlashType_val_ptr_len_ptr, char *raw_wtpFlashType_val_ptr, size_t raw_wtpFlashType_val_ptr_len, int allow_realloc);
    int wtpFlashType_get( dot11WtpDeviceInfoTable_rowreq_ctx *rowreq_ctx, char **wtpFlashType_val_ptr_ptr, size_t *wtpFlashType_val_ptr_len_ptr );
    int wtpFlashCapacity_map(long *mib_wtpFlashCapacity_val_ptr, long raw_wtpFlashCapacity_val);
    int wtpFlashCapacity_get( dot11WtpDeviceInfoTable_rowreq_ctx *rowreq_ctx, long * wtpFlashCapacity_val_ptr );
    int wtpFlashRemain_map(long *mib_wtpFlashRemain_val_ptr, long raw_wtpFlashRemain_val);
    int wtpFlashRemain_get( dot11WtpDeviceInfoTable_rowreq_ctx *rowreq_ctx, long * wtpFlashRemain_val_ptr );
    int wtpWayGetIP_map(u_long *mib_wtpWayGetIP_val_ptr, u_long raw_wtpWayGetIP_val);
    int wtpWayGetIP_get( dot11WtpDeviceInfoTable_rowreq_ctx *rowreq_ctx, u_long * wtpWayGetIP_val_ptr );
    int wtpWorkTemp_map(char **mib_wtpWorkTemp_val_ptr_ptr, size_t *mib_wtpWorkTemp_val_ptr_len_ptr, char *raw_wtpWorkTemp_val_ptr, size_t raw_wtpWorkTemp_val_ptr_len, int allow_realloc);
    int wtpWorkTemp_get( dot11WtpDeviceInfoTable_rowreq_ctx *rowreq_ctx, char **wtpWorkTemp_val_ptr_ptr, size_t *wtpWorkTemp_val_ptr_len_ptr );
    int wtpIP_map(u_long *mib_wtpIP_val_ptr, u_long raw_wtpIP_val);
    int wtpIP_get( dot11WtpDeviceInfoTable_rowreq_ctx *rowreq_ctx, u_long * wtpIP_val_ptr );


int dot11WtpDeviceInfoTable_indexes_set_tbl_idx(dot11WtpDeviceInfoTable_mib_index *tbl_idx, char *wtpMacAddr_val_ptr,  size_t wtpMacAddr_val_ptr_len);
int dot11WtpDeviceInfoTable_indexes_set(dot11WtpDeviceInfoTable_rowreq_ctx *rowreq_ctx, char *wtpMacAddr_val_ptr,  size_t wtpMacAddr_val_ptr_len);




#ifdef __cplusplus
}
#endif

#endif /* DOT11WTPDEVICEINFOTABLE_DATA_GET_H */
/** @} */