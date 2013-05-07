/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.18 $ of : mfd-data-set.m2c,v $ 
 *
 * $Id:$
 */
#ifndef DOT11CONFIGWTPTABLE_DATA_SET_H
#define DOT11CONFIGWTPTABLE_DATA_SET_H

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
 *** Table dot11ConfigWtpTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11ConfigWtpTable is subid 2 of dot11wtpConfig.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.2.12.2, length: 12
*/
    int dot11ConfigWtpTable_wtpID_check_index( dot11ConfigWtpTable_rowreq_ctx *rowreq_ctx ); /* external */


int dot11ConfigWtpTable_undo_setup( dot11ConfigWtpTable_rowreq_ctx *rowreq_ctx);
int dot11ConfigWtpTable_undo_cleanup( dot11ConfigWtpTable_rowreq_ctx *rowreq_ctx);
int dot11ConfigWtpTable_commit( dot11ConfigWtpTable_rowreq_ctx *rowreq_ctx);
int dot11ConfigWtpTable_undo_commit( dot11ConfigWtpTable_rowreq_ctx *rowreq_ctx);


int wtpBindPort_check_value( dot11ConfigWtpTable_rowreq_ctx *rowreq_ctx, char *wtpBindPort_val_ptr,  size_t wtpBindPort_val_ptr_len);
int wtpBindPort_undo_setup( dot11ConfigWtpTable_rowreq_ctx *rowreq_ctx );
int wtpBindPort_set( dot11ConfigWtpTable_rowreq_ctx *rowreq_ctx, char *wtpBindPort_val_ptr,  size_t wtpBindPort_val_ptr_len );
int wtpBindPort_undo( dot11ConfigWtpTable_rowreq_ctx *rowreq_ctx );

int wtpBindWlan_check_value( dot11ConfigWtpTable_rowreq_ctx *rowreq_ctx, char *wtpBindWlan_val_ptr,  size_t wtpBindWlan_val_ptr_len);
int wtpBindWlan_undo_setup( dot11ConfigWtpTable_rowreq_ctx *rowreq_ctx );
int wtpBindWlan_set( dot11ConfigWtpTable_rowreq_ctx *rowreq_ctx, char *wtpBindWlan_val_ptr,  size_t wtpBindWlan_val_ptr_len );
int wtpBindWlan_undo( dot11ConfigWtpTable_rowreq_ctx *rowreq_ctx );

int wtpUsed_check_value( dot11ConfigWtpTable_rowreq_ctx *rowreq_ctx, u_long wtpUsed_val);
int wtpUsed_undo_setup( dot11ConfigWtpTable_rowreq_ctx *rowreq_ctx );
int wtpUsed_set( dot11ConfigWtpTable_rowreq_ctx *rowreq_ctx, u_long wtpUsed_val );
int wtpUsed_undo( dot11ConfigWtpTable_rowreq_ctx *rowreq_ctx );

int wtpMaxStaNum_check_value( dot11ConfigWtpTable_rowreq_ctx *rowreq_ctx, long wtpMaxStaNum_val);
int wtpMaxStaNum_undo_setup( dot11ConfigWtpTable_rowreq_ctx *rowreq_ctx );
int wtpMaxStaNum_set( dot11ConfigWtpTable_rowreq_ctx *rowreq_ctx, long wtpMaxStaNum_val );
int wtpMaxStaNum_undo( dot11ConfigWtpTable_rowreq_ctx *rowreq_ctx );

int wtpLoadBalanceTrigerBaseUsr_check_value( dot11ConfigWtpTable_rowreq_ctx *rowreq_ctx, long wtpLoadBalanceTrigerBaseUsr_val);
int wtpLoadBalanceTrigerBaseUsr_undo_setup( dot11ConfigWtpTable_rowreq_ctx *rowreq_ctx );
int wtpLoadBalanceTrigerBaseUsr_set( dot11ConfigWtpTable_rowreq_ctx *rowreq_ctx, long wtpLoadBalanceTrigerBaseUsr_val );
int wtpLoadBalanceTrigerBaseUsr_undo( dot11ConfigWtpTable_rowreq_ctx *rowreq_ctx );

int wtpLoadBalanceTrigerBaseFlow_check_value( dot11ConfigWtpTable_rowreq_ctx *rowreq_ctx, long wtpLoadBalanceTrigerBaseFlow_val);
int wtpLoadBalanceTrigerBaseFlow_undo_setup( dot11ConfigWtpTable_rowreq_ctx *rowreq_ctx );
int wtpLoadBalanceTrigerBaseFlow_set( dot11ConfigWtpTable_rowreq_ctx *rowreq_ctx, long wtpLoadBalanceTrigerBaseFlow_val );
int wtpLoadBalanceTrigerBaseFlow_undo( dot11ConfigWtpTable_rowreq_ctx *rowreq_ctx );


int dot11ConfigWtpTable_check_dependencies(dot11ConfigWtpTable_rowreq_ctx *ctx);


#ifdef __cplusplus
}
#endif

#endif /* DOT11CONFIGWTPTABLE_DATA_SET_H */