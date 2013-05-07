/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 12077 $ of $ 
 *
 * $Id:$
 */
#ifndef DOT11SSIDVLANTABLE_DATA_SET_H
#define DOT11SSIDVLANTABLE_DATA_SET_H

#ifdef __cplusplus
extern "C" {
#endif

/* *********************************************************************
 * SET function declarations
 */

/* *********************************************************************
 * SET Table declarations
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table dot11SSIDVlanTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * DOT11-AC-MIB::dot11SSIDVlanTable is subid 3 of dot11wtpConfig.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.2.12.3, length: 12
*/


int dot11SSIDVlanTable_undo_setup( dot11SSIDVlanTable_rowreq_ctx *rowreq_ctx);
int dot11SSIDVlanTable_undo_cleanup( dot11SSIDVlanTable_rowreq_ctx *rowreq_ctx);
int dot11SSIDVlanTable_undo( dot11SSIDVlanTable_rowreq_ctx *rowreq_ctx);
int dot11SSIDVlanTable_commit( dot11SSIDVlanTable_rowreq_ctx *rowreq_ctx);
int dot11SSIDVlanTable_undo_commit( dot11SSIDVlanTable_rowreq_ctx *rowreq_ctx);


int VlanId_check_value( dot11SSIDVlanTable_rowreq_ctx *rowreq_ctx, long VlanId_val);
int VlanId_undo_setup( dot11SSIDVlanTable_rowreq_ctx *rowreq_ctx );
int VlanId_set( dot11SSIDVlanTable_rowreq_ctx *rowreq_ctx, long VlanId_val );
int VlanId_undo( dot11SSIDVlanTable_rowreq_ctx *rowreq_ctx );

int VlanRowStatus_check_value( dot11SSIDVlanTable_rowreq_ctx *rowreq_ctx, u_long VlanRowStatus_val);
int VlanRowStatus_undo_setup( dot11SSIDVlanTable_rowreq_ctx *rowreq_ctx );
int VlanRowStatus_set( dot11SSIDVlanTable_rowreq_ctx *rowreq_ctx, u_long VlanRowStatus_val );
int VlanRowStatus_undo( dot11SSIDVlanTable_rowreq_ctx *rowreq_ctx );

int wtpMacAddress_check_value( dot11SSIDVlanTable_rowreq_ctx *rowreq_ctx, char *wtpMacAddress_val_ptr,  size_t wtpMacAddress_val_ptr_len);
int wtpMacAddress_undo_setup( dot11SSIDVlanTable_rowreq_ctx *rowreq_ctx );
int wtpMacAddress_set( dot11SSIDVlanTable_rowreq_ctx *rowreq_ctx, char *wtpMacAddress_val_ptr,  size_t wtpMacAddress_val_ptr_len );
int wtpMacAddress_undo( dot11SSIDVlanTable_rowreq_ctx *rowreq_ctx );

int wlanSSID_check_value( dot11SSIDVlanTable_rowreq_ctx *rowreq_ctx, char *wlanSSID_val_ptr,  size_t wlanSSID_val_ptr_len);
int wlanSSID_undo_setup( dot11SSIDVlanTable_rowreq_ctx *rowreq_ctx );
int wlanSSID_set( dot11SSIDVlanTable_rowreq_ctx *rowreq_ctx, char *wlanSSID_val_ptr,  size_t wlanSSID_val_ptr_len );
int wlanSSID_undo( dot11SSIDVlanTable_rowreq_ctx *rowreq_ctx );


int dot11SSIDVlanTable_check_dependencies(dot11SSIDVlanTable_rowreq_ctx *ctx);


#ifdef __cplusplus
}
#endif

#endif /* DOT11SSIDVLANTABLE_DATA_SET_H */