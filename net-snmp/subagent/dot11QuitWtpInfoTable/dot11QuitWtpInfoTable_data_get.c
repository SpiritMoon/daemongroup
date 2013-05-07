/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.18.2.1 $ of : mfd-data-get.m2c,v $ 
 *
 * $Id:$
 */
/* standard Net-SNMP includes */
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

/* include our parent header */
#include "dot11QuitWtpInfoTable.h"


/** @defgroup data_get data_get: Routines to get data
 *
 * TODO:230:M: Implement dot11QuitWtpInfoTable get routines.
 * TODO:240:M: Implement dot11QuitWtpInfoTable mapping routines (if any).
 *
 * These routine are used to get the value for individual objects. The
 * row context is passed, along with a pointer to the memory where the
 * value should be copied.
 *
 * @{
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table dot11QuitWtpInfoTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11QuitWtpInfoTable is subid 7 of wtpStats.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.1.2.7, length: 12
*/

/* ---------------------------------------------------------------------
 * TODO:200:r: Implement dot11QuitWtpInfoTable data context functions.
 */

/*---------------------------------------------------------------------
 * DOT11-WTP-MIB::dot11QuitWtpInfoEntry.QuitWtpMacAddr
 * QuitWtpMacAddr is subid 1 of dot11QuitWtpInfoEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.1.2.7.1.1
 * Description:
Quit AP MAC.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 1      hashint   1
 *   settable   0
 *   hint: 255a
 *
 * Ranges:  0 - 255;
 *
 * Its syntax is DisplayString (based on perltype OCTETSTR)
 * The net-snmp type is ASN_OCTET_STR. The C type decl is char (char)
 * This data type requires a length.  (Max 255)
 */
/**
 * map a value from its original native format to the MIB format.
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_ERROR           : Any other error
 *
 * @note parameters follow the memset convention (dest, src).
 *
 * @note generation and use of this function can be turned off by re-running
 * mib2c after adding the following line to the file
 * default-node-QuitWtpMacAddr.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
QuitWtpMacAddr_map(char **mib_QuitWtpMacAddr_val_ptr_ptr, size_t *mib_QuitWtpMacAddr_val_ptr_len_ptr, char *raw_QuitWtpMacAddr_val_ptr, size_t raw_QuitWtpMacAddr_val_ptr_len, int allow_realloc)
{
    int converted_len;

    netsnmp_assert(NULL != raw_QuitWtpMacAddr_val_ptr);
    netsnmp_assert((NULL != mib_QuitWtpMacAddr_val_ptr_ptr) && (NULL != mib_QuitWtpMacAddr_val_ptr_len_ptr));
    
    DEBUGMSGTL(("verbose:dot11QuitWtpInfoTable:QuitWtpMacAddr_map","called\n"));
    
    /*
     * TODO:241:r: |-> Implement QuitWtpMacAddr non-integer mapping
     * it is hard to autogenerate code for mapping types that are not simple
     * integers, so here is an idea of what you might need to do. It will
     * probably need some tweaking to get right.
     */
    /*
     * if the length of the raw data doesn't directly correspond with
     * the length of the mib data, set converted_len to the
     * space required.
     */
    converted_len = raw_QuitWtpMacAddr_val_ptr_len; /* assume equal */
    if((NULL == *mib_QuitWtpMacAddr_val_ptr_ptr) || (*mib_QuitWtpMacAddr_val_ptr_len_ptr < converted_len)) {
        if(! allow_realloc) {
            snmp_log(LOG_ERR,"not enough space for value mapping\n");
            return SNMP_ERR_GENERR;
        }
        *mib_QuitWtpMacAddr_val_ptr_ptr = realloc( *mib_QuitWtpMacAddr_val_ptr_ptr, converted_len * sizeof(**mib_QuitWtpMacAddr_val_ptr_ptr));
        if(NULL == *mib_QuitWtpMacAddr_val_ptr_ptr) {
            snmp_log(LOG_ERR,"could not allocate memory\n");
            return SNMP_ERR_GENERR;
        }
    }
    *mib_QuitWtpMacAddr_val_ptr_len_ptr = converted_len;
    memcpy( *mib_QuitWtpMacAddr_val_ptr_ptr, raw_QuitWtpMacAddr_val_ptr, converted_len );

    return MFD_SUCCESS;
} /* QuitWtpMacAddr_map */


/**
 * set mib index(es)
 *
 * @param tbl_idx mib index structure
 *
 * @retval MFD_SUCCESS     : success.
 * @retval MFD_ERROR       : other error.
 *
 * @remark
 *  This convenience function is useful for setting all the MIB index
 *  components with a single function call. It is assume that the C values
 *  have already been mapped from their native/rawformat to the MIB format.
 */
int
dot11QuitWtpInfoTable_indexes_set_tbl_idx(dot11QuitWtpInfoTable_mib_index *tbl_idx, char *QuitWtpMacAddr_val_ptr,  size_t QuitWtpMacAddr_val_ptr_len)
{
    DEBUGMSGTL(("verbose:dot11QuitWtpInfoTable:dot11QuitWtpInfoTable_indexes_set_tbl_idx","called\n"));

    /* QuitWtpMacAddr(1)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H */
     tbl_idx->QuitWtpMacAddr_len = sizeof(tbl_idx->QuitWtpMacAddr);
    /*
     * make sure there is enough space for QuitWtpMacAddr data
     */
    if ((NULL == tbl_idx->QuitWtpMacAddr) ||
        (tbl_idx->QuitWtpMacAddr_len < (QuitWtpMacAddr_val_ptr_len * sizeof(tbl_idx->QuitWtpMacAddr[0])))) {
        snmp_log(LOG_ERR,"not enough space for value\n");
        return MFD_ERROR;
    }
    tbl_idx->QuitWtpMacAddr_len = QuitWtpMacAddr_val_ptr_len * sizeof(tbl_idx->QuitWtpMacAddr[0]);
    memcpy( tbl_idx->QuitWtpMacAddr, QuitWtpMacAddr_val_ptr, tbl_idx->QuitWtpMacAddr_len );
    

    return MFD_SUCCESS;
} /* dot11QuitWtpInfoTable_indexes_set_tbl_idx */

/**
 * @internal
 * set row context indexes
 *
 * @param reqreq_ctx the row context that needs updated indexes
 *
 * @retval MFD_SUCCESS     : success.
 * @retval MFD_ERROR       : other error.
 *
 * @remark
 *  This function sets the mib indexs, then updates the oid indexs
 *  from the mib index.
 */
int
dot11QuitWtpInfoTable_indexes_set(dot11QuitWtpInfoTable_rowreq_ctx *rowreq_ctx, char *QuitWtpMacAddr_val_ptr,  size_t QuitWtpMacAddr_val_ptr_len)
{
    DEBUGMSGTL(("verbose:dot11QuitWtpInfoTable:dot11QuitWtpInfoTable_indexes_set","called\n"));

    if(MFD_SUCCESS != dot11QuitWtpInfoTable_indexes_set_tbl_idx(&rowreq_ctx->tbl_idx
                                   , QuitWtpMacAddr_val_ptr, QuitWtpMacAddr_val_ptr_len
           ))
        return MFD_ERROR;

    /*
     * convert mib index to oid index
     */
    rowreq_ctx->oid_idx.len = sizeof(rowreq_ctx->oid_tmp) / sizeof(oid);
    if(0 != dot11QuitWtpInfoTable_index_to_oid(&rowreq_ctx->oid_idx,
                                    &rowreq_ctx->tbl_idx)) {
        return MFD_ERROR;
    }

    return MFD_SUCCESS;
} /* dot11QuitWtpInfoTable_indexes_set */


/*---------------------------------------------------------------------
 * DOT11-WTP-MIB::dot11QuitWtpInfoEntry.QuitWtpID
 * QuitWtpID is subid 2 of dot11QuitWtpInfoEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.1.2.7.1.2
 * Description:
Quit AP ID.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is INTEGER (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (long)
 */
/**
 * map a value from its original native format to the MIB format.
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_ERROR           : Any other error
 *
 * @note parameters follow the memset convention (dest, src).
 *
 * @note generation and use of this function can be turned off by re-running
 * mib2c after adding the following line to the file
 * default-node-QuitWtpID.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
QuitWtpID_map(long *mib_QuitWtpID_val_ptr, long raw_QuitWtpID_val)
{
    netsnmp_assert(NULL != mib_QuitWtpID_val_ptr);
    
    DEBUGMSGTL(("verbose:dot11QuitWtpInfoTable:QuitWtpID_map","called\n"));
    
    /*
     * TODO:241:o: |-> Implement QuitWtpID mapping.
     * If the values for your data type don't exactly match the
     * possible values defined by the mib, you should map them here.
     */
    (*mib_QuitWtpID_val_ptr) = raw_QuitWtpID_val;

    return MFD_SUCCESS;
} /* QuitWtpID_map */

/**
 * Extract the current value of the QuitWtpID data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param QuitWtpID_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
QuitWtpID_get( dot11QuitWtpInfoTable_rowreq_ctx *rowreq_ctx, long * QuitWtpID_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != QuitWtpID_val_ptr );


    DEBUGMSGTL(("verbose:dot11QuitWtpInfoTable:QuitWtpID_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the QuitWtpID data.
 * set (* QuitWtpID_val_ptr ) from rowreq_ctx->data
 */
    (* QuitWtpID_val_ptr ) = rowreq_ctx->data.QuitWtpID;

    return MFD_SUCCESS;
} /* QuitWtpID_get */

/*---------------------------------------------------------------------
 * DOT11-WTP-MIB::dot11QuitWtpInfoEntry.QuitWtpState
 * QuitWtpState is subid 3 of dot11QuitWtpInfoEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.1.2.7.1.3
 * Description:
Quit AP state.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  1      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 * Enum range: 1/8. Values:  quit(7)
 *
 * Its syntax is INTEGER (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (u_long)
 */
/**
 * map a value from its original native format to the MIB format.
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_ERROR           : Any other error
 *
 * @note parameters follow the memset convention (dest, src).
 *
 * @note generation and use of this function can be turned off by re-running
 * mib2c after adding the following line to the file
 * default-node-QuitWtpState.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
QuitWtpState_map(u_long *mib_QuitWtpState_val_ptr, u_long raw_QuitWtpState_val)
{
    netsnmp_assert(NULL != mib_QuitWtpState_val_ptr);
    
    DEBUGMSGTL(("verbose:dot11QuitWtpInfoTable:QuitWtpState_map","called\n"));
    
    /*
     * TODO:241:o: |-> Implement QuitWtpState enum mapping.
     * uses INTERNAL_* macros defined in the header files
     */
    switch(raw_QuitWtpState_val) {
        case INTERNAL_QUITWTPSTATE_QUIT:
             *mib_QuitWtpState_val_ptr = QUITWTPSTATE_QUIT;
             break;

             default:
                 snmp_log(LOG_ERR, "couldn't map value %ld for QuitWtpState\n", raw_QuitWtpState_val );
                 return MFD_ERROR;
    }

    return MFD_SUCCESS;
} /* QuitWtpState_map */

/**
 * Extract the current value of the QuitWtpState data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param QuitWtpState_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
QuitWtpState_get( dot11QuitWtpInfoTable_rowreq_ctx *rowreq_ctx, u_long * QuitWtpState_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != QuitWtpState_val_ptr );


    DEBUGMSGTL(("verbose:dot11QuitWtpInfoTable:QuitWtpState_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the QuitWtpState data.
 * set (* QuitWtpState_val_ptr ) from rowreq_ctx->data
 */
    (* QuitWtpState_val_ptr ) = rowreq_ctx->data.QuitWtpState;

    return MFD_SUCCESS;
} /* QuitWtpState_get */



/** @} */