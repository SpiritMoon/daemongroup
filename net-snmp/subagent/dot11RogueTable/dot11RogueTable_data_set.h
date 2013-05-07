/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.18 $ of : mfd-data-set.m2c,v $ 
 *
 * $Id:$
 */
#ifndef DOT11ROGUETABLE_DATA_SET_H
#define DOT11ROGUETABLE_DATA_SET_H

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
 *** Table dot11RogueTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11RogueTable is subid 1 of dot11Rogue.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.2.5.1, length: 12
*/
int RogueAPIndex_check_index( dot11RogueTable_rowreq_ctx *rowreq_ctx ); /* internal */


int dot11RogueTable_undo_setup( dot11RogueTable_rowreq_ctx *rowreq_ctx);
int dot11RogueTable_undo_cleanup( dot11RogueTable_rowreq_ctx *rowreq_ctx);
int dot11RogueTable_commit( dot11RogueTable_rowreq_ctx *rowreq_ctx);
int dot11RogueTable_undo_commit( dot11RogueTable_rowreq_ctx *rowreq_ctx);


int RogueAPMac_check_value( dot11RogueTable_rowreq_ctx *rowreq_ctx, char *RogueAPMac_val_ptr,  size_t RogueAPMac_val_ptr_len);
int RogueAPMac_undo_setup( dot11RogueTable_rowreq_ctx *rowreq_ctx );
int RogueAPMac_set( dot11RogueTable_rowreq_ctx *rowreq_ctx, char *RogueAPMac_val_ptr,  size_t RogueAPMac_val_ptr_len );
int RogueAPMac_undo( dot11RogueTable_rowreq_ctx *rowreq_ctx );

int RogueAPRssi_check_value( dot11RogueTable_rowreq_ctx *rowreq_ctx, long RogueAPRssi_val);
int RogueAPRssi_undo_setup( dot11RogueTable_rowreq_ctx *rowreq_ctx );
int RogueAPRssi_set( dot11RogueTable_rowreq_ctx *rowreq_ctx, long RogueAPRssi_val );
int RogueAPRssi_undo( dot11RogueTable_rowreq_ctx *rowreq_ctx );

int RogueAPMonitorNum_check_value( dot11RogueTable_rowreq_ctx *rowreq_ctx, long RogueAPMonitorNum_val);
int RogueAPMonitorNum_undo_setup( dot11RogueTable_rowreq_ctx *rowreq_ctx );
int RogueAPMonitorNum_set( dot11RogueTable_rowreq_ctx *rowreq_ctx, long RogueAPMonitorNum_val );
int RogueAPMonitorNum_undo( dot11RogueTable_rowreq_ctx *rowreq_ctx );

int RogueAPRxSignalIntensity_check_value( dot11RogueTable_rowreq_ctx *rowreq_ctx, long RogueAPRxSignalIntensity_val);
int RogueAPRxSignalIntensity_undo_setup( dot11RogueTable_rowreq_ctx *rowreq_ctx );
int RogueAPRxSignalIntensity_set( dot11RogueTable_rowreq_ctx *rowreq_ctx, long RogueAPRxSignalIntensity_val );
int RogueAPRxSignalIntensity_undo( dot11RogueTable_rowreq_ctx *rowreq_ctx );

int RogueAPFirstDetectTm_check_value( dot11RogueTable_rowreq_ctx *rowreq_ctx, char *RogueAPFirstDetectTm_val_ptr,  size_t RogueAPFirstDetectTm_val_ptr_len);
int RogueAPFirstDetectTm_undo_setup( dot11RogueTable_rowreq_ctx *rowreq_ctx );
int RogueAPFirstDetectTm_set( dot11RogueTable_rowreq_ctx *rowreq_ctx, char *RogueAPFirstDetectTm_val_ptr,  size_t RogueAPFirstDetectTm_val_ptr_len );
int RogueAPFirstDetectTm_undo( dot11RogueTable_rowreq_ctx *rowreq_ctx );

int RogueAPLastDetectTm_check_value( dot11RogueTable_rowreq_ctx *rowreq_ctx, char *RogueAPLastDetectTm_val_ptr,  size_t RogueAPLastDetectTm_val_ptr_len);
int RogueAPLastDetectTm_undo_setup( dot11RogueTable_rowreq_ctx *rowreq_ctx );
int RogueAPLastDetectTm_set( dot11RogueTable_rowreq_ctx *rowreq_ctx, char *RogueAPLastDetectTm_val_ptr,  size_t RogueAPLastDetectTm_val_ptr_len );
int RogueAPLastDetectTm_undo( dot11RogueTable_rowreq_ctx *rowreq_ctx );

int RogueAPSSID_check_value( dot11RogueTable_rowreq_ctx *rowreq_ctx, char *RogueAPSSID_val_ptr,  size_t RogueAPSSID_val_ptr_len);
int RogueAPSSID_undo_setup( dot11RogueTable_rowreq_ctx *rowreq_ctx );
int RogueAPSSID_set( dot11RogueTable_rowreq_ctx *rowreq_ctx, char *RogueAPSSID_val_ptr,  size_t RogueAPSSID_val_ptr_len );
int RogueAPSSID_undo( dot11RogueTable_rowreq_ctx *rowreq_ctx );

int RogueAPMaxSigStrength_check_value( dot11RogueTable_rowreq_ctx *rowreq_ctx, long RogueAPMaxSigStrength_val);
int RogueAPMaxSigStrength_undo_setup( dot11RogueTable_rowreq_ctx *rowreq_ctx );
int RogueAPMaxSigStrength_set( dot11RogueTable_rowreq_ctx *rowreq_ctx, long RogueAPMaxSigStrength_val );
int RogueAPMaxSigStrength_undo( dot11RogueTable_rowreq_ctx *rowreq_ctx );

int RogueAPChannel_check_value( dot11RogueTable_rowreq_ctx *rowreq_ctx, long RogueAPChannel_val);
int RogueAPChannel_undo_setup( dot11RogueTable_rowreq_ctx *rowreq_ctx );
int RogueAPChannel_set( dot11RogueTable_rowreq_ctx *rowreq_ctx, long RogueAPChannel_val );
int RogueAPChannel_undo( dot11RogueTable_rowreq_ctx *rowreq_ctx );

int RogueAPEncryptAgrithm_check_value( dot11RogueTable_rowreq_ctx *rowreq_ctx, u_long RogueAPEncryptAgrithm_val);
int RogueAPEncryptAgrithm_undo_setup( dot11RogueTable_rowreq_ctx *rowreq_ctx );
int RogueAPEncryptAgrithm_set( dot11RogueTable_rowreq_ctx *rowreq_ctx, u_long RogueAPEncryptAgrithm_val );
int RogueAPEncryptAgrithm_undo( dot11RogueTable_rowreq_ctx *rowreq_ctx );

int RogueAPAttackedStatus_check_value( dot11RogueTable_rowreq_ctx *rowreq_ctx, u_long RogueAPAttackedStatus_val);
int RogueAPAttackedStatus_undo_setup( dot11RogueTable_rowreq_ctx *rowreq_ctx );
int RogueAPAttackedStatus_set( dot11RogueTable_rowreq_ctx *rowreq_ctx, u_long RogueAPAttackedStatus_val );
int RogueAPAttackedStatus_undo( dot11RogueTable_rowreq_ctx *rowreq_ctx );

int RogueAPToIgnore_check_value( dot11RogueTable_rowreq_ctx *rowreq_ctx, u_long RogueAPToIgnore_val);
int RogueAPToIgnore_undo_setup( dot11RogueTable_rowreq_ctx *rowreq_ctx );
int RogueAPToIgnore_set( dot11RogueTable_rowreq_ctx *rowreq_ctx, u_long RogueAPToIgnore_val );
int RogueAPToIgnore_undo( dot11RogueTable_rowreq_ctx *rowreq_ctx );

int RogueAPManufacturer_check_value( dot11RogueTable_rowreq_ctx *rowreq_ctx, char *RogueAPManufacturer_val_ptr,  size_t RogueAPManufacturer_val_ptr_len);
int RogueAPManufacturer_undo_setup( dot11RogueTable_rowreq_ctx *rowreq_ctx );
int RogueAPManufacturer_set( dot11RogueTable_rowreq_ctx *rowreq_ctx, char *RogueAPManufacturer_val_ptr,  size_t RogueAPManufacturer_val_ptr_len );
int RogueAPManufacturer_undo( dot11RogueTable_rowreq_ctx *rowreq_ctx );


int dot11RogueTable_check_dependencies(dot11RogueTable_rowreq_ctx *ctx);


#ifdef __cplusplus
}
#endif

#endif /* DOT11ROGUETABLE_DATA_SET_H */