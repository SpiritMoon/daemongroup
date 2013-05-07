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
#include "dot11WtpTeminalTable.h"


/** @defgroup data_get data_get: Routines to get data
 *
 * TODO:230:M: Implement dot11WtpTeminalTable get routines.
 * TODO:240:M: Implement dot11WtpTeminalTable mapping routines (if any).
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
 *** Table dot11WtpTeminalTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11WtpTeminalTable is subid 1 of wlanPortal.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.1.17.1, length: 12
*/

/* ---------------------------------------------------------------------
 * TODO:200:r: Implement dot11WtpTeminalTable data context functions.
 */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11ConfigTrapSwitchEntry.wtpMacAddr
 * wtpMacAddr is subid 1 of dot11ConfigTrapSwitchEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.2.18.2.1.1
 * Description:
AP Mac  Address Group.
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
 * default-node-wtpMacAddr.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
wtpMacAddr_dot11WtpTeminalTable_map(char **mib_wtpMacAddr_val_ptr_ptr, size_t *mib_wtpMacAddr_val_ptr_len_ptr, char *raw_wtpMacAddr_val_ptr, size_t raw_wtpMacAddr_val_ptr_len, int allow_realloc)
{
    int converted_len;

    netsnmp_assert(NULL != raw_wtpMacAddr_val_ptr);
    netsnmp_assert((NULL != mib_wtpMacAddr_val_ptr_ptr) && (NULL != mib_wtpMacAddr_val_ptr_len_ptr));
    
    DEBUGMSGTL(("verbose:dot11WtpTeminalTable:wtpMacAddr_map","called\n"));
    
    /*
     * TODO:241:r: |-> Implement wtpMacAddr non-integer mapping
     * it is hard to autogenerate code for mapping types that are not simple
     * integers, so here is an idea of what you might need to do. It will
     * probably need some tweaking to get right.
     */
    /*
     * if the length of the raw data doesn't directly correspond with
     * the length of the mib data, set converted_len to the
     * space required.
     */
    converted_len = raw_wtpMacAddr_val_ptr_len; /* assume equal */
    if((NULL == *mib_wtpMacAddr_val_ptr_ptr) || (*mib_wtpMacAddr_val_ptr_len_ptr < converted_len)) {
        if(! allow_realloc) {
            snmp_log(LOG_ERR,"not enough space for value mapping\n");
            return SNMP_ERR_GENERR;
        }
        *mib_wtpMacAddr_val_ptr_ptr = realloc( *mib_wtpMacAddr_val_ptr_ptr, converted_len * sizeof(**mib_wtpMacAddr_val_ptr_ptr));
        if(NULL == *mib_wtpMacAddr_val_ptr_ptr) {
            snmp_log(LOG_ERR,"could not allocate memory\n");
            return SNMP_ERR_GENERR;
        }
    }
    *mib_wtpMacAddr_val_ptr_len_ptr = converted_len;
    memcpy( *mib_wtpMacAddr_val_ptr_ptr, raw_wtpMacAddr_val_ptr, converted_len );

    return MFD_SUCCESS;
} /* wtpMacAddr_map */


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
dot11WtpTeminalTable_indexes_set_tbl_idx(dot11WtpTeminalTable_mib_index *tbl_idx, char *wtpMacAddr_val_ptr,  size_t wtpMacAddr_val_ptr_len)
{
    DEBUGMSGTL(("verbose:dot11WtpTeminalTable:dot11WtpTeminalTable_indexes_set_tbl_idx","called\n"));

    /* wtpMacAddr(1)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H */
     tbl_idx->wtpMacAddr_len = sizeof(tbl_idx->wtpMacAddr);
    /*
     * make sure there is enough space for wtpMacAddr data
     */
    if ((NULL == tbl_idx->wtpMacAddr) ||
        (tbl_idx->wtpMacAddr_len < (wtpMacAddr_val_ptr_len * sizeof(tbl_idx->wtpMacAddr[0])))) {
        snmp_log(LOG_ERR,"not enough space for value\n");
        return MFD_ERROR;
    }
    tbl_idx->wtpMacAddr_len = wtpMacAddr_val_ptr_len * sizeof(tbl_idx->wtpMacAddr[0]);
    memcpy( tbl_idx->wtpMacAddr, wtpMacAddr_val_ptr, tbl_idx->wtpMacAddr_len );
    

    return MFD_SUCCESS;
} /* dot11WtpTeminalTable_indexes_set_tbl_idx */

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
dot11WtpTeminalTable_indexes_set(dot11WtpTeminalTable_rowreq_ctx *rowreq_ctx, char *wtpMacAddr_val_ptr,  size_t wtpMacAddr_val_ptr_len)
{
    DEBUGMSGTL(("verbose:dot11WtpTeminalTable:dot11WtpTeminalTable_indexes_set","called\n"));

    if(MFD_SUCCESS != dot11WtpTeminalTable_indexes_set_tbl_idx(&rowreq_ctx->tbl_idx
                                   , wtpMacAddr_val_ptr, wtpMacAddr_val_ptr_len
           ))
        return MFD_ERROR;

    /*
     * convert mib index to oid index
     */
    rowreq_ctx->oid_idx.len = sizeof(rowreq_ctx->oid_tmp) / sizeof(oid);
    if(0 != dot11WtpTeminalTable_index_to_oid(&rowreq_ctx->oid_idx,
                                    &rowreq_ctx->tbl_idx)) {
        return MFD_ERROR;
    }

    return MFD_SUCCESS;
} /* dot11WtpTeminalTable_indexes_set */


/*---------------------------------------------------------------------
 * DOT11-WTP-MIB::dot11WtpTeminalEntry.portalCurusernum
 * portalCurusernum is subid 1 of dot11WtpTeminalEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.1.17.1.1.1
 * Description:
The ap portal current user total number).
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is COUNTER (based on perltype COUNTER)
 * The net-snmp type is ASN_COUNTER. The C type decl is u_long (u_long)
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
 * default-node-portalCurusernum.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
portalCurusernum_map(u_long *mib_portalCurusernum_val_ptr, u_long raw_portalCurusernum_val)
{
    netsnmp_assert(NULL != mib_portalCurusernum_val_ptr);
    
    DEBUGMSGTL(("verbose:dot11WtpTeminalTable:portalCurusernum_map","called\n"));
    
    /*
     * TODO:241:o: |-> Implement portalCurusernum mapping.
     * If the values for your data type don't exactly match the
     * possible values defined by the mib, you should map them here.
     */
    (*mib_portalCurusernum_val_ptr) = raw_portalCurusernum_val;

    return MFD_SUCCESS;
} /* portalCurusernum_map */

/**
 * Extract the current value of the portalCurusernum data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param portalCurusernum_val_ptr
 *        Pointer to storage for a u_long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
portalCurusernum_get( dot11WtpTeminalTable_rowreq_ctx *rowreq_ctx, u_long * portalCurusernum_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != portalCurusernum_val_ptr );


    DEBUGMSGTL(("verbose:dot11WtpTeminalTable:portalCurusernum_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the portalCurusernum data.
 * set (* portalCurusernum_val_ptr ) from rowreq_ctx->data
 */
    (* portalCurusernum_val_ptr ) = rowreq_ctx->data.portalCurusernum;

    return MFD_SUCCESS;
} /* portalCurusernum_get */

/*---------------------------------------------------------------------
 * DOT11-WTP-MIB::dot11WtpTeminalEntry.portalErrLogoffnum
 * portalErrLogoffnum is subid 2 of dot11WtpTeminalEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.1.17.1.1.2
 * Description:
The ap portal fail number.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is COUNTER (based on perltype COUNTER)
 * The net-snmp type is ASN_COUNTER. The C type decl is u_long (u_long)
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
 * default-node-portalErrLogoffnum.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
portalErrLogoffnum_map(u_long *mib_portalErrLogoffnum_val_ptr, u_long raw_portalErrLogoffnum_val)
{
    netsnmp_assert(NULL != mib_portalErrLogoffnum_val_ptr);
    
    DEBUGMSGTL(("verbose:dot11WtpTeminalTable:portalErrLogoffnum_map","called\n"));
    
    /*
     * TODO:241:o: |-> Implement portalErrLogoffnum mapping.
     * If the values for your data type don't exactly match the
     * possible values defined by the mib, you should map them here.
     */
    (*mib_portalErrLogoffnum_val_ptr) = raw_portalErrLogoffnum_val;

    return MFD_SUCCESS;
} /* portalErrLogoffnum_map */

/**
 * Extract the current value of the portalErrLogoffnum data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param portalErrLogoffnum_val_ptr
 *        Pointer to storage for a u_long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
portalErrLogoffnum_get( dot11WtpTeminalTable_rowreq_ctx *rowreq_ctx, u_long * portalErrLogoffnum_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != portalErrLogoffnum_val_ptr );


    DEBUGMSGTL(("verbose:dot11WtpTeminalTable:portalErrLogoffnum_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the portalErrLogoffnum data.
 * set (* portalErrLogoffnum_val_ptr ) from rowreq_ctx->data
 */
    (* portalErrLogoffnum_val_ptr ) = rowreq_ctx->data.portalErrLogoffnum;

    return MFD_SUCCESS;
} /* portalErrLogoffnum_get */

/*---------------------------------------------------------------------
 * DOT11-WTP-MIB::dot11WtpTeminalEntry.portalReqnum
 * portalReqnum is subid 3 of dot11WtpTeminalEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.1.17.1.1.3
 * Description:
The ap portal request number.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is COUNTER (based on perltype COUNTER)
 * The net-snmp type is ASN_COUNTER. The C type decl is u_long (u_long)
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
 * default-node-portalReqnum.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
portalReqnum_map(u_long *mib_portalReqnum_val_ptr, u_long raw_portalReqnum_val)
{
    netsnmp_assert(NULL != mib_portalReqnum_val_ptr);
    
    DEBUGMSGTL(("verbose:dot11WtpTeminalTable:portalReqnum_map","called\n"));
    
    /*
     * TODO:241:o: |-> Implement portalReqnum mapping.
     * If the values for your data type don't exactly match the
     * possible values defined by the mib, you should map them here.
     */
    (*mib_portalReqnum_val_ptr) = raw_portalReqnum_val;

    return MFD_SUCCESS;
} /* portalReqnum_map */

/**
 * Extract the current value of the portalReqnum data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param portalReqnum_val_ptr
 *        Pointer to storage for a u_long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
portalReqnum_get( dot11WtpTeminalTable_rowreq_ctx *rowreq_ctx, u_long * portalReqnum_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != portalReqnum_val_ptr );


    DEBUGMSGTL(("verbose:dot11WtpTeminalTable:portalReqnum_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the portalReqnum data.
 * set (* portalReqnum_val_ptr ) from rowreq_ctx->data
 */
    (* portalReqnum_val_ptr ) = rowreq_ctx->data.portalReqnum;

    return MFD_SUCCESS;
} /* portalReqnum_get */

/*---------------------------------------------------------------------
 * DOT11-WTP-MIB::dot11WtpTeminalEntry.portalReqsuccnum
 * portalReqsuccnum is subid 4 of dot11WtpTeminalEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.1.17.1.1.4
 * Description:
The ap portal request success number.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is COUNTER (based on perltype COUNTER)
 * The net-snmp type is ASN_COUNTER. The C type decl is u_long (u_long)
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
 * default-node-portalReqsuccnum.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
portalReqsuccnum_map(u_long *mib_portalReqsuccnum_val_ptr, u_long raw_portalReqsuccnum_val)
{
    netsnmp_assert(NULL != mib_portalReqsuccnum_val_ptr);
    
    DEBUGMSGTL(("verbose:dot11WtpTeminalTable:portalReqsuccnum_map","called\n"));
    
    /*
     * TODO:241:o: |-> Implement portalReqsuccnum mapping.
     * If the values for your data type don't exactly match the
     * possible values defined by the mib, you should map them here.
     */
    (*mib_portalReqsuccnum_val_ptr) = raw_portalReqsuccnum_val;

    return MFD_SUCCESS;
} /* portalReqsuccnum_map */

/**
 * Extract the current value of the portalReqsuccnum data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param portalReqsuccnum_val_ptr
 *        Pointer to storage for a u_long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
portalReqsuccnum_get( dot11WtpTeminalTable_rowreq_ctx *rowreq_ctx, u_long * portalReqsuccnum_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != portalReqsuccnum_val_ptr );


    DEBUGMSGTL(("verbose:dot11WtpTeminalTable:portalReqsuccnum_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the portalReqsuccnum data.
 * set (* portalReqsuccnum_val_ptr ) from rowreq_ctx->data
 */
    (* portalReqsuccnum_val_ptr ) = rowreq_ctx->data.portalReqsuccnum;

    return MFD_SUCCESS;
} /* portalReqsuccnum_get */

/*---------------------------------------------------------------------
 * DOT11-WTP-MIB::dot11WtpTeminalEntry.portalReqfailnum
 * portalReqfailnum is subid 5 of dot11WtpTeminalEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.1.17.1.1.5
 * Description:
The ap portal request fail number.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is COUNTER (based on perltype COUNTER)
 * The net-snmp type is ASN_COUNTER. The C type decl is u_long (u_long)
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
 * default-node-portalReqfailnum.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
portalReqfailnum_map(u_long *mib_portalReqfailnum_val_ptr, u_long raw_portalReqfailnum_val)
{
    netsnmp_assert(NULL != mib_portalReqfailnum_val_ptr);
    
    DEBUGMSGTL(("verbose:dot11WtpTeminalTable:portalReqfailnum_map","called\n"));
    
    /*
     * TODO:241:o: |-> Implement portalReqfailnum mapping.
     * If the values for your data type don't exactly match the
     * possible values defined by the mib, you should map them here.
     */
    (*mib_portalReqfailnum_val_ptr) = raw_portalReqfailnum_val;

    return MFD_SUCCESS;
} /* portalReqfailnum_map */

/**
 * Extract the current value of the portalReqfailnum data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param portalReqfailnum_val_ptr
 *        Pointer to storage for a u_long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
portalReqfailnum_get( dot11WtpTeminalTable_rowreq_ctx *rowreq_ctx, u_long * portalReqfailnum_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != portalReqfailnum_val_ptr );


    DEBUGMSGTL(("verbose:dot11WtpTeminalTable:portalReqfailnum_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the portalReqfailnum data.
 * set (* portalReqfailnum_val_ptr ) from rowreq_ctx->data
 */
    (* portalReqfailnum_val_ptr ) = rowreq_ctx->data.portalReqfailnum;

    return MFD_SUCCESS;
} /* portalReqfailnum_get */

/*---------------------------------------------------------------------
 * DOT11-WTP-MIB::dot11WtpTeminalEntry.portalAllUserOnlineTime
 * portalAllUserOnlineTime is subid 6 of dot11WtpTeminalEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.1.17.1.1.6
 * Description:
The  portal all users online time).
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is TICKS (based on perltype TICKS)
 * The net-snmp type is ASN_TIMETICKS. The C type decl is u_long (u_long)
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
 * default-node-portalAllUserOnlineTime.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
portalAllUserOnlineTime_map(u_long *mib_portalAllUserOnlineTime_val_ptr, u_long raw_portalAllUserOnlineTime_val)
{
    netsnmp_assert(NULL != mib_portalAllUserOnlineTime_val_ptr);
    
    DEBUGMSGTL(("verbose:dot11WtpTeminalTable:portalAllUserOnlineTime_map","called\n"));
    
    /*
     * TODO:241:o: |-> Implement portalAllUserOnlineTime mapping.
     * If the values for your data type don't exactly match the
     * possible values defined by the mib, you should map them here.
     */
    (*mib_portalAllUserOnlineTime_val_ptr) = raw_portalAllUserOnlineTime_val;

    return MFD_SUCCESS;
} /* portalAllUserOnlineTime_map */

/**
 * Extract the current value of the portalAllUserOnlineTime data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param portalAllUserOnlineTime_val_ptr
 *        Pointer to storage for a u_long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
portalAllUserOnlineTime_get( dot11WtpTeminalTable_rowreq_ctx *rowreq_ctx, u_long * portalAllUserOnlineTime_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != portalAllUserOnlineTime_val_ptr );


    DEBUGMSGTL(("verbose:dot11WtpTeminalTable:portalAllUserOnlineTime_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the portalAllUserOnlineTime data.
 * set (* portalAllUserOnlineTime_val_ptr ) from rowreq_ctx->data
 */
    (* portalAllUserOnlineTime_val_ptr ) = rowreq_ctx->data.portalAllUserOnlineTime;

    return MFD_SUCCESS;
} /* portalAllUserOnlineTime_get */

/*---------------------------------------------------------------------
 * DOT11-WTP-MIB::dot11WtpTeminalEntry.macAuthCurusernum
 * macAuthCurusernum is subid 7 of dot11WtpTeminalEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.1.17.1.1.7
 * Description:
The ap mac auth current user total number).
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is COUNTER (based on perltype COUNTER)
 * The net-snmp type is ASN_COUNTER. The C type decl is u_long (u_long)
 */
/**
 * Extract the current value of the macAuthCurusernum data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param macAuthCurusernum_val_ptr
 *        Pointer to storage for a u_long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
macAuthCurusernum_get( dot11WtpTeminalTable_rowreq_ctx *rowreq_ctx, u_long * macAuthCurusernum_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != macAuthCurusernum_val_ptr );


    DEBUGMSGTL(("verbose:dot11WtpTeminalTable:macAuthCurusernum_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the macAuthCurusernum data.
 * copy (* macAuthCurusernum_val_ptr ) from rowreq_ctx->data
 */
    (* macAuthCurusernum_val_ptr ) = rowreq_ctx->data.macAuthCurusernum;

    return MFD_SUCCESS;
} /* macAuthCurusernum_get */

/*---------------------------------------------------------------------
 * DOT11-WTP-MIB::dot11WtpTeminalEntry.macAuthErrLogoffnum
 * macAuthErrLogoffnum is subid 8 of dot11WtpTeminalEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.1.17.1.1.8
 * Description:
The ap mac auth fail number.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is COUNTER (based on perltype COUNTER)
 * The net-snmp type is ASN_COUNTER. The C type decl is u_long (u_long)
 */
/**
 * Extract the current value of the macAuthErrLogoffnum data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param macAuthErrLogoffnum_val_ptr
 *        Pointer to storage for a u_long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
macAuthErrLogoffnum_get( dot11WtpTeminalTable_rowreq_ctx *rowreq_ctx, u_long * macAuthErrLogoffnum_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != macAuthErrLogoffnum_val_ptr );


    DEBUGMSGTL(("verbose:dot11WtpTeminalTable:macAuthErrLogoffnum_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the macAuthErrLogoffnum data.
 * copy (* macAuthErrLogoffnum_val_ptr ) from rowreq_ctx->data
 */
    (* macAuthErrLogoffnum_val_ptr ) = rowreq_ctx->data.macAuthErrLogoffnum;

    return MFD_SUCCESS;
} /* macAuthErrLogoffnum_get */

/*---------------------------------------------------------------------
 * DOT11-WTP-MIB::dot11WtpTeminalEntry.macAuthReqnum
 * macAuthReqnum is subid 9 of dot11WtpTeminalEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.1.17.1.1.9
 * Description:
The ap mac auth request number.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is COUNTER (based on perltype COUNTER)
 * The net-snmp type is ASN_COUNTER. The C type decl is u_long (u_long)
 */
/**
 * Extract the current value of the macAuthReqnum data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param macAuthReqnum_val_ptr
 *        Pointer to storage for a u_long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
macAuthReqnum_get( dot11WtpTeminalTable_rowreq_ctx *rowreq_ctx, u_long * macAuthReqnum_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != macAuthReqnum_val_ptr );


    DEBUGMSGTL(("verbose:dot11WtpTeminalTable:macAuthReqnum_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the macAuthReqnum data.
 * copy (* macAuthReqnum_val_ptr ) from rowreq_ctx->data
 */
    (* macAuthReqnum_val_ptr ) = rowreq_ctx->data.macAuthReqnum;

    return MFD_SUCCESS;
} /* macAuthReqnum_get */

/*---------------------------------------------------------------------
 * DOT11-WTP-MIB::dot11WtpTeminalEntry.macAuthReqsuccnum
 * macAuthReqsuccnum is subid 10 of dot11WtpTeminalEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.1.17.1.1.10
 * Description:
The ap mac auth request success number.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is COUNTER (based on perltype COUNTER)
 * The net-snmp type is ASN_COUNTER. The C type decl is u_long (u_long)
 */
/**
 * Extract the current value of the macAuthReqsuccnum data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param macAuthReqsuccnum_val_ptr
 *        Pointer to storage for a u_long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
macAuthReqsuccnum_get( dot11WtpTeminalTable_rowreq_ctx *rowreq_ctx, u_long * macAuthReqsuccnum_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != macAuthReqsuccnum_val_ptr );


    DEBUGMSGTL(("verbose:dot11WtpTeminalTable:macAuthReqsuccnum_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the macAuthReqsuccnum data.
 * copy (* macAuthReqsuccnum_val_ptr ) from rowreq_ctx->data
 */
    (* macAuthReqsuccnum_val_ptr ) = rowreq_ctx->data.macAuthReqsuccnum;

    return MFD_SUCCESS;
} /* macAuthReqsuccnum_get */

/*---------------------------------------------------------------------
 * DOT11-WTP-MIB::dot11WtpTeminalEntry.macAuthReqfailnum
 * macAuthReqfailnum is subid 11 of dot11WtpTeminalEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.1.17.1.1.11
 * Description:
The ap mac auth request fail number.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is COUNTER (based on perltype COUNTER)
 * The net-snmp type is ASN_COUNTER. The C type decl is u_long (u_long)
 */
/**
 * Extract the current value of the macAuthReqfailnum data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param macAuthReqfailnum_val_ptr
 *        Pointer to storage for a u_long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
macAuthReqfailnum_get( dot11WtpTeminalTable_rowreq_ctx *rowreq_ctx, u_long * macAuthReqfailnum_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != macAuthReqfailnum_val_ptr );


    DEBUGMSGTL(("verbose:dot11WtpTeminalTable:macAuthReqfailnum_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the macAuthReqfailnum data.
 * copy (* macAuthReqfailnum_val_ptr ) from rowreq_ctx->data
 */
    (* macAuthReqfailnum_val_ptr ) = rowreq_ctx->data.macAuthReqfailnum;

    return MFD_SUCCESS;
} /* macAuthReqfailnum_get */

/*---------------------------------------------------------------------
 * DOT11-WTP-MIB::dot11WtpTeminalEntry.macAuthAllUserOnlineTime
 * macAuthAllUserOnlineTime is subid 12 of dot11WtpTeminalEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.1.17.1.1.12
 * Description:
The mac auth all users online time.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is TICKS (based on perltype TICKS)
 * The net-snmp type is ASN_TIMETICKS. The C type decl is u_long (u_long)
 */
/**
 * Extract the current value of the macAuthAllUserOnlineTime data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param macAuthAllUserOnlineTime_val_ptr
 *        Pointer to storage for a u_long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
macAuthAllUserOnlineTime_get( dot11WtpTeminalTable_rowreq_ctx *rowreq_ctx, u_long * macAuthAllUserOnlineTime_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != macAuthAllUserOnlineTime_val_ptr );


    DEBUGMSGTL(("verbose:dot11WtpTeminalTable:macAuthAllUserOnlineTime_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the macAuthAllUserOnlineTime data.
 * copy (* macAuthAllUserOnlineTime_val_ptr ) from rowreq_ctx->data
 */
    (* macAuthAllUserOnlineTime_val_ptr ) = rowreq_ctx->data.macAuthAllUserOnlineTime;

    return MFD_SUCCESS;
} /* macAuthAllUserOnlineTime_get */



/** @} */