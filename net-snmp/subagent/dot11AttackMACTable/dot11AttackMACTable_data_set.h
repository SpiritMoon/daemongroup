/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 12077 $ of $ 
 *
 * $Id:$
 */
#ifndef DOT11ATTACKMACTABLE_DATA_SET_H
#define DOT11ATTACKMACTABLE_DATA_SET_H

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
 *** Table dot11AttackMACTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * DOT11-AC-MIB::dot11AttackMACTable is subid 1 of dot11Attack.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.2.11.1, length: 12
*/


int dot11AttackMACTable_undo_setup( dot11AttackMACTable_rowreq_ctx *rowreq_ctx);
int dot11AttackMACTable_undo_cleanup( dot11AttackMACTable_rowreq_ctx *rowreq_ctx);
int dot11AttackMACTable_undo( dot11AttackMACTable_rowreq_ctx *rowreq_ctx);
int dot11AttackMACTable_commit( dot11AttackMACTable_rowreq_ctx *rowreq_ctx);
int dot11AttackMACTable_undo_commit( dot11AttackMACTable_rowreq_ctx *rowreq_ctx);


int attackMAC_check_value( dot11AttackMACTable_rowreq_ctx *rowreq_ctx, char *attackMAC_val_ptr,  size_t attackMAC_val_ptr_len);
int attackMAC_undo_setup( dot11AttackMACTable_rowreq_ctx *rowreq_ctx );
int attackMAC_set( dot11AttackMACTable_rowreq_ctx *rowreq_ctx, char *attackMAC_val_ptr,  size_t attackMAC_val_ptr_len );
int attackMAC_undo( dot11AttackMACTable_rowreq_ctx *rowreq_ctx );

int attackMACRowStatus_check_value( dot11AttackMACTable_rowreq_ctx *rowreq_ctx, u_long attackMACRowStatus_val);
int attackMACRowStatus_undo_setup( dot11AttackMACTable_rowreq_ctx *rowreq_ctx );
int attackMACRowStatus_set( dot11AttackMACTable_rowreq_ctx *rowreq_ctx, u_long attackMACRowStatus_val );
int attackMACRowStatus_undo( dot11AttackMACTable_rowreq_ctx *rowreq_ctx );


int dot11AttackMACTable_check_dependencies(dot11AttackMACTable_rowreq_ctx *ctx);


#ifdef __cplusplus
}
#endif

#endif /* DOT11ATTACKMACTABLE_DATA_SET_H */