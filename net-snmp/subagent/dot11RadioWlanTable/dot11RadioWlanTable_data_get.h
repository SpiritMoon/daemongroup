/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.18.2.1 $ of : mfd-data-get.m2c,v $
 *
 * $Id:$
 *
 * @file dot11RadioWlanTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef DOT11RADIOWLANTABLE_DATA_GET_H
#define DOT11RADIOWLANTABLE_DATA_GET_H

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
 *** Table dot11RadioWlanTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11RadioWlanTable is subid 5 of wtpRadio.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.1.4.5, length: 12
*/
    /*
     * indexes
     */
    int wtpRadCurrID_map(long *mib_wtpRadCurrID_val_ptr, long raw_wtpRadCurrID_val);
    int BindWlanID_map(long *mib_BindWlanID_val_ptr, long raw_BindWlanID_val);

    int TrafficLimitState_map(u_long *mib_TrafficLimitState_val_ptr, u_long raw_TrafficLimitState_val);
    int TrafficLimitState_get( dot11RadioWlanTable_rowreq_ctx *rowreq_ctx, u_long * TrafficLimitState_val_ptr );
    int TrafficLimitValue_map(long *mib_TrafficLimitValue_val_ptr, long raw_TrafficLimitValue_val);
    int TrafficLimitValue_get( dot11RadioWlanTable_rowreq_ctx *rowreq_ctx, long * TrafficLimitValue_val_ptr );
    int IsOnlyAllow11nStaAccess_map(u_long *mib_IsOnlyAllow11nStaAccess_val_ptr, u_long raw_IsOnlyAllow11nStaAccess_val);
    int IsOnlyAllow11nStaAccess_get( dot11RadioWlanTable_rowreq_ctx *rowreq_ctx, u_long * IsOnlyAllow11nStaAccess_val_ptr );


int dot11RadioWlanTable_indexes_set_tbl_idx(dot11RadioWlanTable_mib_index *tbl_idx, long wtpRadCurrID_val, long BindWlanID_val);
int dot11RadioWlanTable_indexes_set(dot11RadioWlanTable_rowreq_ctx *rowreq_ctx, long wtpRadCurrID_val, long BindWlanID_val);




#ifdef __cplusplus
}
#endif

#endif /* DOT11RADIOWLANTABLE_DATA_GET_H */
/** @} */