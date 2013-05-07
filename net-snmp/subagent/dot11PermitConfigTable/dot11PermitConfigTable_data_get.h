/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 12088 $ of $
 *
 * $Id:$
 *
 * @file dot11PermitConfigTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef DOT11PERMITCONFIGTABLE_DATA_GET_H
#define DOT11PERMITCONFIGTABLE_DATA_GET_H

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
 *** Table dot11PermitConfigTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * DOT11-AC-MIB::dot11PermitConfigTable is subid 9 of dot11AcGroup.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.2.9, length: 11
*/
    /*
     * indexes
     */

    int permitConfig_get( dot11PermitConfigTable_rowreq_ctx *rowreq_ctx, char **permitConfig_val_ptr_ptr, size_t *permitConfig_val_ptr_len_ptr );
    int permitConfigRowStatus_get( dot11PermitConfigTable_rowreq_ctx *rowreq_ctx, u_long * permitConfigRowStatus_val_ptr );


int dot11PermitConfigTable_indexes_set_tbl_idx(dot11PermitConfigTable_mib_index *tbl_idx, long permitConfigID_val);
int dot11PermitConfigTable_indexes_set(dot11PermitConfigTable_rowreq_ctx *rowreq_ctx, long permitConfigID_val);




#ifdef __cplusplus
}
#endif

#endif /* DOT11PERMITCONFIGTABLE_DATA_GET_H */
/** @} */