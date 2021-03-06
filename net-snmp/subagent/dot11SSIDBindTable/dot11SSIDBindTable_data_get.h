/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.18.2.1 $ of : mfd-data-get.m2c,v $
 *
 * $Id:$
 *
 * @file dot11SSIDBindTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef DOT11SSIDBINDTABLE_DATA_GET_H
#define DOT11SSIDBINDTABLE_DATA_GET_H

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
 *** Table dot11SSIDBindTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11SSIDBindTable is subid 4 of dot11wtpConfig.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.2.12.4, length: 12
*/
    /*
     * indexes
     */
    int NewWtpMac_map(char **mib_NewWtpMac_val_ptr_ptr, size_t *mib_NewWtpMac_val_ptr_len_ptr, char *raw_NewWtpMac_val_ptr, size_t raw_NewWtpMac_val_ptr_len, int allow_realloc);
    int NewInterface_map(long *mib_NewInterface_val_ptr, long raw_NewInterface_val);
    int NewWlanId_map(long *mib_NewWlanId_val_ptr, long raw_NewWlanId_val);

    int BssIDMac_map(char **mib_BssIDMac_val_ptr_ptr, size_t *mib_BssIDMac_val_ptr_len_ptr, char *raw_BssIDMac_val_ptr, size_t raw_BssIDMac_val_ptr_len, int allow_realloc);
    int BssIDMac_get( dot11SSIDBindTable_rowreq_ctx *rowreq_ctx, char **BssIDMac_val_ptr_ptr, size_t *BssIDMac_val_ptr_len_ptr );
    int BssIDBindRowStatus_map(u_long *mib_BssIDBindRowStatus_val_ptr, u_long raw_BssIDBindRowStatus_val);
    int BssIDBindRowStatus_get( dot11SSIDBindTable_rowreq_ctx *rowreq_ctx, u_long * BssIDBindRowStatus_val_ptr );


int dot11SSIDBindTable_indexes_set_tbl_idx(dot11SSIDBindTable_mib_index *tbl_idx, char *NewWtpMac_val_ptr,  size_t NewWtpMac_val_ptr_len, long NewInterface_val, long NewWlanId_val);
int dot11SSIDBindTable_indexes_set(dot11SSIDBindTable_rowreq_ctx *rowreq_ctx, char *NewWtpMac_val_ptr,  size_t NewWtpMac_val_ptr_len, long NewInterface_val, long NewWlanId_val);




#ifdef __cplusplus
}
#endif

#endif /* DOT11SSIDBINDTABLE_DATA_GET_H */
/** @} */
