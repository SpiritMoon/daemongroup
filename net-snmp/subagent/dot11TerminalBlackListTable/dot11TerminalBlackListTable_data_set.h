/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 12077 $ of $ 
 *
 * $Id:$
 */
#ifndef DOT11TERMINALBLACKLISTTABLE_DATA_SET_H
#define DOT11TERMINALBLACKLISTTABLE_DATA_SET_H

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
 *** Table dot11TerminalBlackListTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * DOT11-AC-MIB::dot11TerminalBlackListTable is subid 4 of dot11WhiteBlackList.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.2.8.4, length: 12
*/


int dot11TerminalBlackListTable_undo_setup( dot11TerminalBlackListTable_rowreq_ctx *rowreq_ctx);
int dot11TerminalBlackListTable_undo_cleanup( dot11TerminalBlackListTable_rowreq_ctx *rowreq_ctx);
int dot11TerminalBlackListTable_undo( dot11TerminalBlackListTable_rowreq_ctx *rowreq_ctx);
int dot11TerminalBlackListTable_commit( dot11TerminalBlackListTable_rowreq_ctx *rowreq_ctx);
int dot11TerminalBlackListTable_undo_commit( dot11TerminalBlackListTable_rowreq_ctx *rowreq_ctx);


int TerminalBlackListAddReason_check_value( dot11TerminalBlackListTable_rowreq_ctx *rowreq_ctx, char *TerminalBlackListAddReason_val_ptr,  size_t TerminalBlackListAddReason_val_ptr_len);
int TerminalBlackListAddReason_undo_setup( dot11TerminalBlackListTable_rowreq_ctx *rowreq_ctx );
int TerminalBlackListAddReason_set( dot11TerminalBlackListTable_rowreq_ctx *rowreq_ctx, char *TerminalBlackListAddReason_val_ptr,  size_t TerminalBlackListAddReason_val_ptr_len );
int TerminalBlackListAddReason_undo( dot11TerminalBlackListTable_rowreq_ctx *rowreq_ctx );

int TerminalBlackListDuration_check_value( dot11TerminalBlackListTable_rowreq_ctx *rowreq_ctx, u_long TerminalBlackListDuration_val);
int TerminalBlackListDuration_undo_setup( dot11TerminalBlackListTable_rowreq_ctx *rowreq_ctx );
int TerminalBlackListDuration_set( dot11TerminalBlackListTable_rowreq_ctx *rowreq_ctx, u_long TerminalBlackListDuration_val );
int TerminalBlackListDuration_undo( dot11TerminalBlackListTable_rowreq_ctx *rowreq_ctx );

int BlackListRowStatus_check_value( dot11TerminalBlackListTable_rowreq_ctx *rowreq_ctx, u_long BlackListRowStatus_val);
int BlackListRowStatus_undo_setup( dot11TerminalBlackListTable_rowreq_ctx *rowreq_ctx );
int BlackListRowStatus_set( dot11TerminalBlackListTable_rowreq_ctx *rowreq_ctx, u_long BlackListRowStatus_val );
int BlackListRowStatus_undo( dot11TerminalBlackListTable_rowreq_ctx *rowreq_ctx );


int dot11TerminalBlackListTable_check_dependencies(dot11TerminalBlackListTable_rowreq_ctx *ctx);


#ifdef __cplusplus
}
#endif

#endif /* DOT11TERMINALBLACKLISTTABLE_DATA_SET_H */