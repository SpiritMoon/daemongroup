/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 12088 $ of $
 *
 * $Id:$
 *
 * @file dot11BssStaInfoTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef DOT11BSSSTAINFOTABLE_DATA_GET_H
#define DOT11BSSSTAINFOTABLE_DATA_GET_H

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
 *** Table dot11BssStaInfoTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * DOT11-WTP-MIB::dot11BssStaInfoTable is subid 3 of wtpStation.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.1.8.3, length: 12
*/
    /*
     * indexes
     */

    int StaESSID_get( dot11BssStaInfoTable_rowreq_ctx *rowreq_ctx, char **StaESSID_val_ptr_ptr, size_t *StaESSID_val_ptr_len_ptr );
    int StaIPAddress_get( dot11BssStaInfoTable_rowreq_ctx *rowreq_ctx, u_long * StaIPAddress_val_ptr );


int dot11BssStaInfoTable_indexes_set_tbl_idx(dot11BssStaInfoTable_mib_index *tbl_idx, char *wtpMacAddr_val_ptr,  size_t wtpMacAddr_val_ptr_len, long wtpWirelessIfIndex_val, long NewWirelessWlanID_val, char *StaMAC_val_ptr,  size_t StaMAC_val_ptr_len);
int dot11BssStaInfoTable_indexes_set(dot11BssStaInfoTable_rowreq_ctx *rowreq_ctx, char *wtpMacAddr_val_ptr,  size_t wtpMacAddr_val_ptr_len, long wtpWirelessIfIndex_val, long NewWirelessWlanID_val, char *StaMAC_val_ptr,  size_t StaMAC_val_ptr_len);




#ifdef __cplusplus
}
#endif

#endif /* DOT11BSSSTAINFOTABLE_DATA_GET_H */
/** @} */