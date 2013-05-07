/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 12088 $ of $
 *
 * $Id:$
 *
 * @file dot11LegalDeviceTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef DOT11LEGALDEVICETABLE_DATA_GET_H
#define DOT11LEGALDEVICETABLE_DATA_GET_H

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
 *** Table dot11LegalDeviceTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * DOT11-AC-MIB::dot11LegalDeviceTable is subid 1 of dot11WhiteBlackList.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.2.8.1, length: 12
*/
    /*
     * indexes
     */

    int legalMacAddress_get( dot11LegalDeviceTable_rowreq_ctx *rowreq_ctx, char **legalMacAddress_val_ptr_ptr, size_t *legalMacAddress_val_ptr_len_ptr );
    int legalRowStatus_get( dot11LegalDeviceTable_rowreq_ctx *rowreq_ctx, u_long * legalRowStatus_val_ptr );


int dot11LegalDeviceTable_indexes_set_tbl_idx(dot11LegalDeviceTable_mib_index *tbl_idx, long legalMacID_val);
int dot11LegalDeviceTable_indexes_set(dot11LegalDeviceTable_rowreq_ctx *rowreq_ctx, long legalMacID_val);




#ifdef __cplusplus
}
#endif

#endif /* DOT11LEGALDEVICETABLE_DATA_GET_H */
/** @} */