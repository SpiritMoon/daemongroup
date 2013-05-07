/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 12088 $ of $
 *
 * $Id:$
 *
 * @file dot11ConfigTrapGroupTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef DOT11CONFIGTRAPGROUPTABLE_DATA_GET_H
#define DOT11CONFIGTRAPGROUPTABLE_DATA_GET_H

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
 *** Table dot11ConfigTrapGroupTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * DOT11-AC-MIB::dot11ConfigTrapGroupTable is subid 1 of dot11ConfigTrapGroup.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.2.19.1, length: 12
*/
    /*
     * indexes
     */

    int TrapName_get( dot11ConfigTrapGroupTable_rowreq_ctx *rowreq_ctx, char **TrapName_val_ptr_ptr, size_t *TrapName_val_ptr_len_ptr );
    int TrapVersion_get( dot11ConfigTrapGroupTable_rowreq_ctx *rowreq_ctx, u_long * TrapVersion_val_ptr );
    int TrapSourIPAddress_get( dot11ConfigTrapGroupTable_rowreq_ctx *rowreq_ctx, u_long * TrapSourIPAddress_val_ptr );
    int TrapDestIPAddress_get( dot11ConfigTrapGroupTable_rowreq_ctx *rowreq_ctx, u_long * TrapDestIPAddress_val_ptr );
    int TrapCommunity_get( dot11ConfigTrapGroupTable_rowreq_ctx *rowreq_ctx, char **TrapCommunity_val_ptr_ptr, size_t *TrapCommunity_val_ptr_len_ptr );
    int TrapState_get( dot11ConfigTrapGroupTable_rowreq_ctx *rowreq_ctx, u_long * TrapState_val_ptr );
    int TrapDestPort_get( dot11ConfigTrapGroupTable_rowreq_ctx *rowreq_ctx, long * TrapDestPort_val_ptr );
    int TrapRowStatus_get( dot11ConfigTrapGroupTable_rowreq_ctx *rowreq_ctx, u_long * TrapRowStatus_val_ptr );


int dot11ConfigTrapGroupTable_indexes_set_tbl_idx(dot11ConfigTrapGroupTable_mib_index *tbl_idx, long TrapID_val);
int dot11ConfigTrapGroupTable_indexes_set(dot11ConfigTrapGroupTable_rowreq_ctx *rowreq_ctx, long TrapID_val);




#ifdef __cplusplus
}
#endif

#endif /* DOT11CONFIGTRAPGROUPTABLE_DATA_GET_H */
/** @} */