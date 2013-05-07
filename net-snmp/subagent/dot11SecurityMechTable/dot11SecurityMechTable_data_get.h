/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.18.2.1 $ of : mfd-data-get.m2c,v $
 *
 * $Id:$
 *
 * @file dot11SecurityMechTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef DOT11SECURITYMECHTABLE_DATA_GET_H
#define DOT11SECURITYMECHTABLE_DATA_GET_H

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
 *** Table dot11SecurityMechTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11SecurityMechTable is subid 1 of wtpSecurity.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.1.9.1, length: 12
*/
    /*
     * indexes
     */
    int wtpMacAddr_map(char **mib_wtpMacAddr_val_ptr_ptr, size_t *mib_wtpMacAddr_val_ptr_len_ptr, char *raw_wtpMacAddr_val_ptr, size_t raw_wtpMacAddr_val_ptr_len, int allow_realloc);
    int wlanCurrID_map(long *mib_wlanCurrID_val_ptr, long raw_wlanCurrID_val);

    int wtpWirelessSecurMechName_map(char **mib_wtpWirelessSecurMechName_val_ptr_ptr, size_t *mib_wtpWirelessSecurMechName_val_ptr_len_ptr, char *raw_wtpWirelessSecurMechName_val_ptr, size_t raw_wtpWirelessSecurMechName_val_ptr_len, int allow_realloc);
    int wtpWirelessSecurMechName_get( dot11SecurityMechTable_rowreq_ctx *rowreq_ctx, char **wtpWirelessSecurMechName_val_ptr_ptr, size_t *wtpWirelessSecurMechName_val_ptr_len_ptr );
    int wtpWirelessSecurMechID_map(long *mib_wtpWirelessSecurMechID_val_ptr, long raw_wtpWirelessSecurMechID_val);
    int wtpWirelessSecurMechID_get( dot11SecurityMechTable_rowreq_ctx *rowreq_ctx, long * wtpWirelessSecurMechID_val_ptr );
    int wtpWirelessSecurMechType_map(char **mib_wtpWirelessSecurMechType_val_ptr_ptr, size_t *mib_wtpWirelessSecurMechType_val_ptr_len_ptr, char *raw_wtpWirelessSecurMechType_val_ptr, size_t raw_wtpWirelessSecurMechType_val_ptr_len, int allow_realloc);
    int wtpWirelessSecurMechType_get( dot11SecurityMechTable_rowreq_ctx *rowreq_ctx, char **wtpWirelessSecurMechType_val_ptr_ptr, size_t *wtpWirelessSecurMechType_val_ptr_len_ptr );
    int wtpWirelessSecurMechEncryType_map(u_long *mib_wtpWirelessSecurMechEncryType_val_ptr, u_long raw_wtpWirelessSecurMechEncryType_val);
    int wtpWirelessSecurMechEncryType_get( dot11SecurityMechTable_rowreq_ctx *rowreq_ctx, u_long * wtpWirelessSecurMechEncryType_val_ptr );
    int wtpWirelessSecurMechSecurPolicyKey_map(char **mib_wtpWirelessSecurMechSecurPolicyKey_val_ptr_ptr, size_t *mib_wtpWirelessSecurMechSecurPolicyKey_val_ptr_len_ptr, char *raw_wtpWirelessSecurMechSecurPolicyKey_val_ptr, size_t raw_wtpWirelessSecurMechSecurPolicyKey_val_ptr_len, int allow_realloc);
    int wtpWirelessSecurMechSecurPolicyKey_get( dot11SecurityMechTable_rowreq_ctx *rowreq_ctx, char **wtpWirelessSecurMechSecurPolicyKey_val_ptr_ptr, size_t *wtpWirelessSecurMechSecurPolicyKey_val_ptr_len_ptr );
    int wtpWirelessSecurMechKeyInputType_map(char **mib_wtpWirelessSecurMechKeyInputType_val_ptr_ptr, size_t *mib_wtpWirelessSecurMechKeyInputType_val_ptr_len_ptr, char *raw_wtpWirelessSecurMechKeyInputType_val_ptr, size_t raw_wtpWirelessSecurMechKeyInputType_val_ptr_len, int allow_realloc);
    int wtpWirelessSecurMechKeyInputType_get( dot11SecurityMechTable_rowreq_ctx *rowreq_ctx, char **wtpWirelessSecurMechKeyInputType_val_ptr_ptr, size_t *wtpWirelessSecurMechKeyInputType_val_ptr_len_ptr );


int dot11SecurityMechTable_indexes_set_tbl_idx(dot11SecurityMechTable_mib_index *tbl_idx, char *wtpMacAddr_val_ptr,  size_t wtpMacAddr_val_ptr_len, long wlanCurrID_val);
int dot11SecurityMechTable_indexes_set(dot11SecurityMechTable_rowreq_ctx *rowreq_ctx, char *wtpMacAddr_val_ptr,  size_t wtpMacAddr_val_ptr_len, long wlanCurrID_val);




#ifdef __cplusplus
}
#endif

#endif /* DOT11SECURITYMECHTABLE_DATA_GET_H */
/** @} */