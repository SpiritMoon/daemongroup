/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.18.2.1 $ of : mfd-data-get.m2c,v $
 *
 * $Id:$
 *
 * @file dot11UnicastTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef DOT11UNICASTTABLE_DATA_GET_H
#define DOT11UNICASTTABLE_DATA_GET_H

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
 *** Table dot11UnicastTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11UnicastTable is subid 9 of wtpWAPI.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.1.10.9, length: 12
*/
    /*
     * indexes
     */
    int UnicastWlanID_map(long *mib_UnicastWlanID_val_ptr, long raw_UnicastWlanID_val);

    int NewUnicastCipher_map(char **mib_NewUnicastCipher_val_ptr_ptr, size_t *mib_NewUnicastCipher_val_ptr_len_ptr, char *raw_NewUnicastCipher_val_ptr, size_t raw_NewUnicastCipher_val_ptr_len, int allow_realloc);
    int NewUnicastCipher_get( dot11UnicastTable_rowreq_ctx *rowreq_ctx, char **NewUnicastCipher_val_ptr_ptr, size_t *NewUnicastCipher_val_ptr_len_ptr );
    int NewUnicastCipherEnabled_map(u_long *mib_NewUnicastCipherEnabled_val_ptr, u_long raw_NewUnicastCipherEnabled_val);
    int NewUnicastCipherEnabled_get( dot11UnicastTable_rowreq_ctx *rowreq_ctx, u_long * NewUnicastCipherEnabled_val_ptr );
    int NewUnicastCipherSize_map(u_long *mib_NewUnicastCipherSize_val_ptr, u_long raw_NewUnicastCipherSize_val);
    int NewUnicastCipherSize_get( dot11UnicastTable_rowreq_ctx *rowreq_ctx, u_long * NewUnicastCipherSize_val_ptr );


int dot11UnicastTable_indexes_set_tbl_idx(dot11UnicastTable_mib_index *tbl_idx, long UnicastWlanID_val);
int dot11UnicastTable_indexes_set(dot11UnicastTable_rowreq_ctx *rowreq_ctx, long UnicastWlanID_val);




#ifdef __cplusplus
}
#endif

#endif /* DOT11UNICASTTABLE_DATA_GET_H */
/** @} */