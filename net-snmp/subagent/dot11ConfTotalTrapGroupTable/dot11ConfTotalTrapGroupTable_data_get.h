/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.18.2.1 $ of : mfd-data-get.m2c,v $
 *
 * $Id:$
 *
 * @file dot11ConfTotalTrapGroupTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef DOT11CONFTOTALTRAPGROUPTABLE_DATA_GET_H
#define DOT11CONFTOTALTRAPGROUPTABLE_DATA_GET_H

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
 *** Table dot11ConfTotalTrapGroupTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11ConfTotalTrapGroupTable is subid 1 of dot11ConfTotalTrapGroup.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.2.24.1, length: 12
*/
    /*
     * indexes
     */
    int NewTrapIndex_map(long *mib_NewTrapIndex_val_ptr, long raw_NewTrapIndex_val);

    int NewTrapName_map(char **mib_NewTrapName_val_ptr_ptr, size_t *mib_NewTrapName_val_ptr_len_ptr, char *raw_NewTrapName_val_ptr, size_t raw_NewTrapName_val_ptr_len, int allow_realloc);
    int NewTrapName_get( dot11ConfTotalTrapGroupTable_rowreq_ctx *rowreq_ctx, char **NewTrapName_val_ptr_ptr, size_t *NewTrapName_val_ptr_len_ptr );
    int NewTrapDescr_map(char **mib_NewTrapDescr_val_ptr_ptr, size_t *mib_NewTrapDescr_val_ptr_len_ptr, char *raw_NewTrapDescr_val_ptr, size_t raw_NewTrapDescr_val_ptr_len, int allow_realloc);
    int NewTrapDescr_get( dot11ConfTotalTrapGroupTable_rowreq_ctx *rowreq_ctx, char **NewTrapDescr_val_ptr_ptr, size_t *NewTrapDescr_val_ptr_len_ptr );
    int NewTrapOnOff_map(u_long *mib_NewTrapOnOff_val_ptr, u_long raw_NewTrapOnOff_val);
    int NewTrapOnOff_get( dot11ConfTotalTrapGroupTable_rowreq_ctx *rowreq_ctx, u_long * NewTrapOnOff_val_ptr );


int dot11ConfTotalTrapGroupTable_indexes_set_tbl_idx(dot11ConfTotalTrapGroupTable_mib_index *tbl_idx, long NewTrapIndex_val);
int dot11ConfTotalTrapGroupTable_indexes_set(dot11ConfTotalTrapGroupTable_rowreq_ctx *rowreq_ctx, long NewTrapIndex_val);




#ifdef __cplusplus
}
#endif

#endif /* DOT11CONFTOTALTRAPGROUPTABLE_DATA_GET_H */
/** @} */