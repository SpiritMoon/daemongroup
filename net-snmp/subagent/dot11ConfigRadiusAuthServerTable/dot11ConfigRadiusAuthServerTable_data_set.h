/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.18 $ of : mfd-data-set.m2c,v $ 
 *
 * $Id:$
 */
#ifndef DOT11CONFIGRADIUSAUTHSERVERTABLE_DATA_SET_H
#define DOT11CONFIGRADIUSAUTHSERVERTABLE_DATA_SET_H

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
 *** Table dot11ConfigRadiusAuthServerTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11ConfigRadiusAuthServerTable is subid 6 of dot11securityConfig.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.33050.6.1.2.14.6, length: 12
*/
int RadiusAuthServerID_check_index( dot11ConfigRadiusAuthServerTable_rowreq_ctx *rowreq_ctx ); /* internal */


int dot11ConfigRadiusAuthServerTable_undo_setup( dot11ConfigRadiusAuthServerTable_rowreq_ctx *rowreq_ctx);
int dot11ConfigRadiusAuthServerTable_undo_cleanup( dot11ConfigRadiusAuthServerTable_rowreq_ctx *rowreq_ctx);
int dot11ConfigRadiusAuthServerTable_commit( dot11ConfigRadiusAuthServerTable_rowreq_ctx *rowreq_ctx);
int dot11ConfigRadiusAuthServerTable_undo_commit( dot11ConfigRadiusAuthServerTable_rowreq_ctx *rowreq_ctx);


int NewAuthServerIPAdd_check_value( dot11ConfigRadiusAuthServerTable_rowreq_ctx *rowreq_ctx, u_long NewAuthServerIPAdd_val);
int NewAuthServerIPAdd_undo_setup( dot11ConfigRadiusAuthServerTable_rowreq_ctx *rowreq_ctx );
int NewAuthServerIPAdd_set( dot11ConfigRadiusAuthServerTable_rowreq_ctx *rowreq_ctx, u_long NewAuthServerIPAdd_val );
int NewAuthServerIPAdd_undo( dot11ConfigRadiusAuthServerTable_rowreq_ctx *rowreq_ctx );

int NewAuthServerPort_check_value( dot11ConfigRadiusAuthServerTable_rowreq_ctx *rowreq_ctx, long NewAuthServerPort_val);
int NewAuthServerPort_undo_setup( dot11ConfigRadiusAuthServerTable_rowreq_ctx *rowreq_ctx );
int NewAuthServerPort_set( dot11ConfigRadiusAuthServerTable_rowreq_ctx *rowreq_ctx, long NewAuthServerPort_val );
int NewAuthServerPort_undo( dot11ConfigRadiusAuthServerTable_rowreq_ctx *rowreq_ctx );

int NewAuthServerSharedkey_check_value( dot11ConfigRadiusAuthServerTable_rowreq_ctx *rowreq_ctx, char *NewAuthServerSharedkey_val_ptr,  size_t NewAuthServerSharedkey_val_ptr_len);
int NewAuthServerSharedkey_undo_setup( dot11ConfigRadiusAuthServerTable_rowreq_ctx *rowreq_ctx );
int NewAuthServerSharedkey_set( dot11ConfigRadiusAuthServerTable_rowreq_ctx *rowreq_ctx, char *NewAuthServerSharedkey_val_ptr,  size_t NewAuthServerSharedkey_val_ptr_len );
int NewAuthServerSharedkey_undo( dot11ConfigRadiusAuthServerTable_rowreq_ctx *rowreq_ctx );

int NewRadiusAuthServerIPAdd_check_value( dot11ConfigRadiusAuthServerTable_rowreq_ctx *rowreq_ctx, u_long NewRadiusAuthServerIPAdd_val);
int NewRadiusAuthServerIPAdd_undo_setup( dot11ConfigRadiusAuthServerTable_rowreq_ctx *rowreq_ctx );
int NewRadiusAuthServerIPAdd_set( dot11ConfigRadiusAuthServerTable_rowreq_ctx *rowreq_ctx, u_long NewRadiusAuthServerIPAdd_val );
int NewRadiusAuthServerIPAdd_undo( dot11ConfigRadiusAuthServerTable_rowreq_ctx *rowreq_ctx );

int NewRadiusAuthServerPort_check_value( dot11ConfigRadiusAuthServerTable_rowreq_ctx *rowreq_ctx, long NewRadiusAuthServerPort_val);
int NewRadiusAuthServerPort_undo_setup( dot11ConfigRadiusAuthServerTable_rowreq_ctx *rowreq_ctx );
int NewRadiusAuthServerPort_set( dot11ConfigRadiusAuthServerTable_rowreq_ctx *rowreq_ctx, long NewRadiusAuthServerPort_val );
int NewRadiusAuthServerPort_undo( dot11ConfigRadiusAuthServerTable_rowreq_ctx *rowreq_ctx );

int NewRadiusAuthServerSharedkey_check_value( dot11ConfigRadiusAuthServerTable_rowreq_ctx *rowreq_ctx, char *NewRadiusAuthServerSharedkey_val_ptr,  size_t NewRadiusAuthServerSharedkey_val_ptr_len);
int NewRadiusAuthServerSharedkey_undo_setup( dot11ConfigRadiusAuthServerTable_rowreq_ctx *rowreq_ctx );
int NewRadiusAuthServerSharedkey_set( dot11ConfigRadiusAuthServerTable_rowreq_ctx *rowreq_ctx, char *NewRadiusAuthServerSharedkey_val_ptr,  size_t NewRadiusAuthServerSharedkey_val_ptr_len );
int NewRadiusAuthServerSharedkey_undo( dot11ConfigRadiusAuthServerTable_rowreq_ctx *rowreq_ctx );


int dot11ConfigRadiusAuthServerTable_check_dependencies(dot11ConfigRadiusAuthServerTable_rowreq_ctx *ctx);


#ifdef __cplusplus
}
#endif

#endif /* DOT11CONFIGRADIUSAUTHSERVERTABLE_DATA_SET_H */