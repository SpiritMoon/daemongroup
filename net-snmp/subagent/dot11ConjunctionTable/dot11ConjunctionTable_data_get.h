/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.18.2.1 $ of : mfd-data-get.m2c,v $
 *
 * $Id:$
 *
 * @file dot11ConjunctionTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef DOT11CONJUNCTIONTABLE_DATA_GET_H
#define DOT11CONJUNCTIONTABLE_DATA_GET_H

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
 *** Table dot11ConjunctionTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11ConjunctionTable is subid 2 of wtpLink.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.1.6.2, length: 12
*/
    /*
     * indexes
     */
    int wtpMacAddr_conjunction_map(char **mib_wtpMacAddr_val_ptr_ptr, size_t *mib_wtpMacAddr_val_ptr_len_ptr, char *raw_wtpMacAddr_val_ptr, size_t raw_wtpMacAddr_val_ptr_len, int allow_realloc);

    int wtpReasonInvalidFailConjunctTimes_map(u_long *mib_wtpReasonInvalidFailConjunctTimes_val_ptr, u_long raw_wtpReasonInvalidFailConjunctTimes_val);
    int wtpReasonInvalidFailConjunctTimes_get( dot11ConjunctionTable_rowreq_ctx *rowreq_ctx, u_long * wtpReasonInvalidFailConjunctTimes_val_ptr );
    int wtpReasonTimeOutFailConjunctTimes_map(u_long *mib_wtpReasonTimeOutFailConjunctTimes_val_ptr, u_long raw_wtpReasonTimeOutFailConjunctTimes_val);
    int wtpReasonTimeOutFailConjunctTimes_get( dot11ConjunctionTable_rowreq_ctx *rowreq_ctx, u_long * wtpReasonTimeOutFailConjunctTimes_val_ptr );
    int wtpReasonRefuseFailConjunctTimes_map(u_long *mib_wtpReasonRefuseFailConjunctTimes_val_ptr, u_long raw_wtpReasonRefuseFailConjunctTimes_val);
    int wtpReasonRefuseFailConjunctTimes_get( dot11ConjunctionTable_rowreq_ctx *rowreq_ctx, u_long * wtpReasonRefuseFailConjunctTimes_val_ptr );
    int wtpReasonOthersFailConjunctTimes_map(u_long *mib_wtpReasonOthersFailConjunctTimes_val_ptr, u_long raw_wtpReasonOthersFailConjunctTimes_val);
    int wtpReasonOthersFailConjunctTimes_get( dot11ConjunctionTable_rowreq_ctx *rowreq_ctx, u_long * wtpReasonOthersFailConjunctTimes_val_ptr );
    int wtpTryReconjunctTimes_map(u_long *mib_wtpTryReconjunctTimes_val_ptr, u_long raw_wtpTryReconjunctTimes_val);
    int wtpTryReconjunctTimes_get( dot11ConjunctionTable_rowreq_ctx *rowreq_ctx, u_long * wtpTryReconjunctTimes_val_ptr );
    int wtpReconjunctSuccessTimes_map(u_long *mib_wtpReconjunctSuccessTimes_val_ptr, u_long raw_wtpReconjunctSuccessTimes_val);
    int wtpReconjunctSuccessTimes_get( dot11ConjunctionTable_rowreq_ctx *rowreq_ctx, u_long * wtpReconjunctSuccessTimes_val_ptr );
    int wtpReasonInvalidReconjunctTimes_map(u_long *mib_wtpReasonInvalidReconjunctTimes_val_ptr, u_long raw_wtpReasonInvalidReconjunctTimes_val);
    int wtpReasonInvalidReconjunctTimes_get( dot11ConjunctionTable_rowreq_ctx *rowreq_ctx, u_long * wtpReasonInvalidReconjunctTimes_val_ptr );
    int wtpReasonTimeOutReconjunctTimes_map(u_long *mib_wtpReasonTimeOutReconjunctTimes_val_ptr, u_long raw_wtpReasonTimeOutReconjunctTimes_val);
    int wtpReasonTimeOutReconjunctTimes_get( dot11ConjunctionTable_rowreq_ctx *rowreq_ctx, u_long * wtpReasonTimeOutReconjunctTimes_val_ptr );
    int wtpReasonRefuseReconjunctTimes_map(u_long *mib_wtpReasonRefuseReconjunctTimes_val_ptr, u_long raw_wtpReasonRefuseReconjunctTimes_val);
    int wtpReasonRefuseReconjunctTimes_get( dot11ConjunctionTable_rowreq_ctx *rowreq_ctx, u_long * wtpReasonRefuseReconjunctTimes_val_ptr );
    int wtpReasonOtherReconjunctTimes_map(u_long *mib_wtpReasonOtherReconjunctTimes_val_ptr, u_long raw_wtpReasonOtherReconjunctTimes_val);
    int wtpReasonOtherReconjunctTimes_get( dot11ConjunctionTable_rowreq_ctx *rowreq_ctx, u_long * wtpReasonOtherReconjunctTimes_val_ptr );
    int wtpSolutionConjunctTimes_map(u_long *mib_wtpSolutionConjunctTimes_val_ptr, u_long raw_wtpSolutionConjunctTimes_val);
    int wtpSolutionConjunctTimes_get( dot11ConjunctionTable_rowreq_ctx *rowreq_ctx, u_long * wtpSolutionConjunctTimes_val_ptr );
    int wtpReasonUsrLeaveSolutionConjunctTimes_map(u_long *mib_wtpReasonUsrLeaveSolutionConjunctTimes_val_ptr, u_long raw_wtpReasonUsrLeaveSolutionConjunctTimes_val);
    int wtpReasonUsrLeaveSolutionConjunctTimes_get( dot11ConjunctionTable_rowreq_ctx *rowreq_ctx, u_long * wtpReasonUsrLeaveSolutionConjunctTimes_val_ptr );
    int wtpReasonLackAbilitySolutionConjunctTimes_map(u_long *mib_wtpReasonLackAbilitySolutionConjunctTimes_val_ptr, u_long raw_wtpReasonLackAbilitySolutionConjunctTimes_val);
    int wtpReasonLackAbilitySolutionConjunctTimes_get( dot11ConjunctionTable_rowreq_ctx *rowreq_ctx, u_long * wtpReasonLackAbilitySolutionConjunctTimes_val_ptr );
    int wtpReasonExceptionSolutionConjunctTimes_map(u_long *mib_wtpReasonExceptionSolutionConjunctTimes_val_ptr, u_long raw_wtpReasonExceptionSolutionConjunctTimes_val);
    int wtpReasonExceptionSolutionConjunctTimes_get( dot11ConjunctionTable_rowreq_ctx *rowreq_ctx, u_long * wtpReasonExceptionSolutionConjunctTimes_val_ptr );
    int wtpReasonOtherSolutionConjunctTimes_map(u_long *mib_wtpReasonOtherSolutionConjunctTimes_val_ptr, u_long raw_wtpReasonOtherSolutionConjunctTimes_val);
    int wtpReasonOtherSolutionConjunctTimes_get( dot11ConjunctionTable_rowreq_ctx *rowreq_ctx, u_long * wtpReasonOtherSolutionConjunctTimes_val_ptr );
    int wtpReasonTerminalNotSupportAllSpeedFailConjunctionTimes_map(u_long *mib_wtpReasonTerminalNotSupportAllSpeedFailConjunctionTimes_val_ptr, u_long raw_wtpReasonTerminalNotSupportAllSpeedFailConjunctionTimes_val);
    int wtpReasonTerminalNotSupportAllSpeedFailConjunctionTimes_get( dot11ConjunctionTable_rowreq_ctx *rowreq_ctx, u_long * wtpReasonTerminalNotSupportAllSpeedFailConjunctionTimes_val_ptr );
	int	wtpNotContainedInStdReasonAssocFailSum_map(u_long *mib_wtpNotContainedInStdReasonAssocFailSum_val_ptr, u_long raw_wtpNotContainedInStdReasonAssocFailSum_val);
    int wtpNotContainedInStdReasonAssocFailSum_get( dot11ConjunctionTable_rowreq_ctx *rowreq_ctx, u_long * wtpNotContainedInStdReasonAssocFailSum_val_ptr );
	int wtpUnknowReasonAssocFailSum_map(u_long *mib_wtpUnknowReasonAssocFailSum_val_ptr, u_long raw_wtpUnknowReasonAssocFailSum_val);
    int wtpUnknowReasonAssocFailSum_get( dot11ConjunctionTable_rowreq_ctx *rowreq_ctx, u_long * wtpUnknowReasonAssocFailSum_val_ptr );
	int wtpPreAssCannotShiftDeassocFailSum_map(u_long *mib_wtpPreAssCannotShiftDeassocFailSum_val_ptr, u_long raw_wtpPreAssCannotShiftDeassocFailSum_val);
    int wtpPreAssCannotShiftDeassocFailSum_get( dot11ConjunctionTable_rowreq_ctx *rowreq_ctx, u_long * wtpPreAssCannotShiftDeassocFailSum_val_ptr );

int dot11ConjunctionTable_indexes_set_tbl_idx(dot11ConjunctionTable_mib_index *tbl_idx, char *wtpMacAddr_val_ptr,  size_t wtpMacAddr_val_ptr_len);
int dot11ConjunctionTable_indexes_set(dot11ConjunctionTable_rowreq_ctx *rowreq_ctx, char *wtpMacAddr_val_ptr,  size_t wtpMacAddr_val_ptr_len);




#ifdef __cplusplus
}
#endif

#endif /* DOT11CONJUNCTIONTABLE_DATA_GET_H */
/** @} */