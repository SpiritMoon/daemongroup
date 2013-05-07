/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.18.2.1 $ of : mfd-data-get.m2c,v $ 
 *
 * $Id: dot11ApInfoTableByInterface_data_get.c,v 1.1 2011/03/03 09:54:37 qiaojie Exp $
 */
/* standard Net-SNMP includes */
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

/* include our parent header */
#include "dot11ApInfoTableByInterface.h"


/** @defgroup data_get data_get: Routines to get data
 *
 * TODO:230:M: Implement dot11ApInfoTableByInterface get routines.
 * TODO:240:M: Implement dot11ApInfoTableByInterface mapping routines (if any).
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
 *** Table dot11ApInfoTableByInterface
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11ApInfoTableByInterface is subid 2 of dot11APInfoByInterface.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.2.30.2, length: 12
*/

/* ---------------------------------------------------------------------
 * TODO:200:r: Implement dot11ApInfoTableByInterface data context functions.
 */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11APSummaryInfoEntry.Interface
 * Interface is subid 1 of dot11APSummaryInfoEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.2.30.1.1.1
 * Description:
Interface name
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
 * default-node-Interface.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
Interface_dot11ApInfoTableByInterface_map(char **mib_Interface_val_ptr_ptr, size_t *mib_Interface_val_ptr_len_ptr, char *raw_Interface_val_ptr, size_t raw_Interface_val_ptr_len, int allow_realloc)
{
    int converted_len;

    netsnmp_assert(NULL != raw_Interface_val_ptr);
    netsnmp_assert((NULL != mib_Interface_val_ptr_ptr) && (NULL != mib_Interface_val_ptr_len_ptr));
    
    DEBUGMSGTL(("verbose:dot11ApInfoTableByInterface:Interface_map","called\n"));
    
    /*
     * TODO:241:r: |-> Implement Interface non-integer mapping
     * it is hard to autogenerate code for mapping types that are not simple
     * integers, so here is an idea of what you might need to do. It will
     * probably need some tweaking to get right.
     */
    /*
     * if the length of the raw data doesn't directly correspond with
     * the length of the mib data, set converted_len to the
     * space required.
     */
    converted_len = raw_Interface_val_ptr_len; /* assume equal */
    if((NULL == *mib_Interface_val_ptr_ptr) || (*mib_Interface_val_ptr_len_ptr < converted_len)) {
        if(! allow_realloc) {
            snmp_log(LOG_ERR,"not enough space for value mapping\n");
            return SNMP_ERR_GENERR;
        }
        *mib_Interface_val_ptr_ptr = realloc( *mib_Interface_val_ptr_ptr, converted_len * sizeof(**mib_Interface_val_ptr_ptr));
        if(NULL == *mib_Interface_val_ptr_ptr) {
            snmp_log(LOG_ERR,"could not allocate memory\n");
            return SNMP_ERR_GENERR;
        }
    }
    *mib_Interface_val_ptr_len_ptr = converted_len;
    memcpy( *mib_Interface_val_ptr_ptr, raw_Interface_val_ptr, converted_len );

    return MFD_SUCCESS;
} /* Interface_map */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11ApInfoEntry.wtpMAC
 * wtpMAC is subid 1 of dot11ApInfoEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.2.30.2.1.1
 * Description:
AP MAC address
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
 * default-node-wtpMAC.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
wtpMAC_dot11ApInfoTableByInterface_map(char **mib_wtpMAC_val_ptr_ptr, size_t *mib_wtpMAC_val_ptr_len_ptr, char *raw_wtpMAC_val_ptr, size_t raw_wtpMAC_val_ptr_len, int allow_realloc)
{
    int converted_len;

    netsnmp_assert(NULL != raw_wtpMAC_val_ptr);
    netsnmp_assert((NULL != mib_wtpMAC_val_ptr_ptr) && (NULL != mib_wtpMAC_val_ptr_len_ptr));
    
    DEBUGMSGTL(("verbose:dot11ApInfoTableByInterface:wtpMAC_map","called\n"));
    
    /*
     * TODO:241:r: |-> Implement wtpMAC non-integer mapping
     * it is hard to autogenerate code for mapping types that are not simple
     * integers, so here is an idea of what you might need to do. It will
     * probably need some tweaking to get right.
     */
    /*
     * if the length of the raw data doesn't directly correspond with
     * the length of the mib data, set converted_len to the
     * space required.
     */
    converted_len = raw_wtpMAC_val_ptr_len; /* assume equal */
    if((NULL == *mib_wtpMAC_val_ptr_ptr) || (*mib_wtpMAC_val_ptr_len_ptr < converted_len)) {
        if(! allow_realloc) {
            snmp_log(LOG_ERR,"not enough space for value mapping\n");
            return SNMP_ERR_GENERR;
        }
        *mib_wtpMAC_val_ptr_ptr = realloc( *mib_wtpMAC_val_ptr_ptr, converted_len * sizeof(**mib_wtpMAC_val_ptr_ptr));
        if(NULL == *mib_wtpMAC_val_ptr_ptr) {
            snmp_log(LOG_ERR,"could not allocate memory\n");
            return SNMP_ERR_GENERR;
        }
    }
    *mib_wtpMAC_val_ptr_len_ptr = converted_len;
    memcpy( *mib_wtpMAC_val_ptr_ptr, raw_wtpMAC_val_ptr, converted_len );

    return MFD_SUCCESS;
} /* wtpMAC_map */


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
dot11ApInfoTableByInterface_indexes_set_tbl_idx(dot11ApInfoTableByInterface_mib_index *tbl_idx, char *Interface_val_ptr,  size_t Interface_val_ptr_len, char *wtpMAC_val_ptr,  size_t wtpMAC_val_ptr_len)
{
    DEBUGMSGTL(("verbose:dot11ApInfoTableByInterface:dot11ApInfoTableByInterface_indexes_set_tbl_idx","called\n"));

    /* Interface(1)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H */
     tbl_idx->Interface_len = sizeof(tbl_idx->Interface);
    /*
     * make sure there is enough space for Interface data
     */
    if ((NULL == tbl_idx->Interface) ||
        (tbl_idx->Interface_len < (Interface_val_ptr_len * sizeof(tbl_idx->Interface[0])))) {
        snmp_log(LOG_ERR,"not enough space for value\n");
        return MFD_ERROR;
    }
    tbl_idx->Interface_len = Interface_val_ptr_len * sizeof(tbl_idx->Interface[0]);
    memcpy( tbl_idx->Interface, Interface_val_ptr, tbl_idx->Interface_len );
    
    /* wtpMAC(1)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H */
     tbl_idx->wtpMAC_len = sizeof(tbl_idx->wtpMAC);
    /*
     * make sure there is enough space for wtpMAC data
     */
    if ((NULL == tbl_idx->wtpMAC) ||
        (tbl_idx->wtpMAC_len < (wtpMAC_val_ptr_len * sizeof(tbl_idx->wtpMAC[0])))) {
        snmp_log(LOG_ERR,"not enough space for value\n");
        return MFD_ERROR;
    }
    tbl_idx->wtpMAC_len = wtpMAC_val_ptr_len * sizeof(tbl_idx->wtpMAC[0]);
    memcpy( tbl_idx->wtpMAC, wtpMAC_val_ptr, tbl_idx->wtpMAC_len );
    

    return MFD_SUCCESS;
} /* dot11ApInfoTableByInterface_indexes_set_tbl_idx */

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
dot11ApInfoTableByInterface_indexes_set(dot11ApInfoTableByInterface_rowreq_ctx *rowreq_ctx, char *Interface_val_ptr,  size_t Interface_val_ptr_len, char *wtpMAC_val_ptr,  size_t wtpMAC_val_ptr_len)
{
    DEBUGMSGTL(("verbose:dot11ApInfoTableByInterface:dot11ApInfoTableByInterface_indexes_set","called\n"));

    if(MFD_SUCCESS != dot11ApInfoTableByInterface_indexes_set_tbl_idx(&rowreq_ctx->tbl_idx
                                   , Interface_val_ptr, Interface_val_ptr_len
                                   , wtpMAC_val_ptr, wtpMAC_val_ptr_len
           ))
        return MFD_ERROR;

    /*
     * convert mib index to oid index
     */
    rowreq_ctx->oid_idx.len = sizeof(rowreq_ctx->oid_tmp) / sizeof(oid);
    if(0 != dot11ApInfoTableByInterface_index_to_oid(&rowreq_ctx->oid_idx,
                                    &rowreq_ctx->tbl_idx)) {
        return MFD_ERROR;
    }

    return MFD_SUCCESS;
} /* dot11ApInfoTableByInterface_indexes_set */


/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11ApInfoEntry.wtpIPAddr
 * wtpIPAddr is subid 2 of dot11ApInfoEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.2.30.2.1.2
 * Description:
AP IP address
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is IPADDR (based on perltype IPADDR)
 * The net-snmp type is ASN_IPADDRESS. The C type decl is u_long (u_long)
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
 * default-node-wtpIPAddr.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
wtpIPAddr_dot11ApInfoTableByInterface_map(u_long *mib_wtpIPAddr_val_ptr, u_long raw_wtpIPAddr_val)
{
    netsnmp_assert(NULL != mib_wtpIPAddr_val_ptr);
    
    DEBUGMSGTL(("verbose:dot11ApInfoTableByInterface:wtpIPAddr_map","called\n"));
    
    /*
     * TODO:241:o: |-> Implement wtpIPAddr mapping.
     * If the values for your data type don't exactly match the
     * possible values defined by the mib, you should map them here.
     */
    (*mib_wtpIPAddr_val_ptr) = raw_wtpIPAddr_val;

    return MFD_SUCCESS;
} /* wtpIPAddr_map */

/**
 * Extract the current value of the wtpIPAddr data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param wtpIPAddr_val_ptr
 *        Pointer to storage for a u_long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
wtpIPAddr_dot11ApInfoTableByInterface_get( dot11ApInfoTableByInterface_rowreq_ctx *rowreq_ctx, u_long * wtpIPAddr_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != wtpIPAddr_val_ptr );


    DEBUGMSGTL(("verbose:dot11ApInfoTableByInterface:wtpIPAddr_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the wtpIPAddr data.
 * set (* wtpIPAddr_val_ptr ) from rowreq_ctx->data
 */
    (* wtpIPAddr_val_ptr ) = rowreq_ctx->data.wtpIPAddr;

    return MFD_SUCCESS;
} /* wtpIPAddr_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11ApInfoEntry.wtpSN
 * wtpSN is subid 3 of dot11ApInfoEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.2.30.2.1.3
 * Description:
AP IP SN
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
 * default-node-wtpSN.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
wtpSN_dot11ApInfoTableByInterface_map(char **mib_wtpSN_val_ptr_ptr, size_t *mib_wtpSN_val_ptr_len_ptr, char *raw_wtpSN_val_ptr, size_t raw_wtpSN_val_ptr_len, int allow_realloc)
{
    int converted_len;

    netsnmp_assert(NULL != raw_wtpSN_val_ptr);
    netsnmp_assert((NULL != mib_wtpSN_val_ptr_ptr) && (NULL != mib_wtpSN_val_ptr_len_ptr));
    
    DEBUGMSGTL(("verbose:dot11ApInfoTableByInterface:wtpSN_map","called\n"));
    
    /*
     * TODO:241:r: |-> Implement wtpSN non-integer mapping
     * it is hard to autogenerate code for mapping types that are not simple
     * integers, so here is an idea of what you might need to do. It will
     * probably need some tweaking to get right.
     */
    /*
     * if the length of the raw data doesn't directly correspond with
     * the length of the mib data, set converted_len to the
     * space required.
     */
    converted_len = raw_wtpSN_val_ptr_len; /* assume equal */
    if((NULL == *mib_wtpSN_val_ptr_ptr) || (*mib_wtpSN_val_ptr_len_ptr < converted_len)) {
        if(! allow_realloc) {
            snmp_log(LOG_ERR,"not enough space for value mapping\n");
            return SNMP_ERR_GENERR;
        }
        *mib_wtpSN_val_ptr_ptr = realloc( *mib_wtpSN_val_ptr_ptr, converted_len * sizeof(**mib_wtpSN_val_ptr_ptr));
        if(NULL == *mib_wtpSN_val_ptr_ptr) {
            snmp_log(LOG_ERR,"could not allocate memory\n");
            return SNMP_ERR_GENERR;
        }
    }
    *mib_wtpSN_val_ptr_len_ptr = converted_len;
    memcpy( *mib_wtpSN_val_ptr_ptr, raw_wtpSN_val_ptr, converted_len );

    return MFD_SUCCESS;
} /* wtpSN_map */

/**
 * Extract the current value of the wtpSN data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param wtpSN_val_ptr_ptr
 *        Pointer to storage for a char variable
 * @param wtpSN_val_ptr_len_ptr
 *        Pointer to a size_t. On entry, it will contain the size (in bytes)
 *        pointed to by wtpSN.
 *        On exit, this value should contain the data size (in bytes).
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
*
 * @note If you need more than (*wtpSN_val_ptr_len_ptr) bytes of memory,
 *       allocate it using malloc() and update wtpSN_val_ptr_ptr.
 *       <b>DO NOT</b> free the previous pointer.
 *       The MFD helper will release the memory you allocate.
 *
 * @remark If you call this function yourself, you are responsible
 *         for checking if the pointer changed, and freeing any
 *         previously allocated memory. (Not necessary if you pass
 *         in a pointer to static memory, obviously.)
 */
int
wtpSN_dot11ApInfoTableByInterface_get( dot11ApInfoTableByInterface_rowreq_ctx *rowreq_ctx, char **wtpSN_val_ptr_ptr, size_t *wtpSN_val_ptr_len_ptr )
{
   /** we should have a non-NULL pointer and enough storage */
   netsnmp_assert( (NULL != wtpSN_val_ptr_ptr) && (NULL != *wtpSN_val_ptr_ptr));
   netsnmp_assert( NULL != wtpSN_val_ptr_len_ptr );


    DEBUGMSGTL(("verbose:dot11ApInfoTableByInterface:wtpSN_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the wtpSN data.
 * set (* wtpSN_val_ptr_ptr ) and (* wtpSN_val_ptr_len_ptr ) from rowreq_ctx->data
 */
    /*
     * make sure there is enough space for wtpSN data
     */
    if ((NULL == (* wtpSN_val_ptr_ptr )) ||
        ((* wtpSN_val_ptr_len_ptr ) < (rowreq_ctx->data.wtpSN_len * sizeof((* wtpSN_val_ptr_ptr )[0])))) {
        /*
         * allocate space for wtpSN data
         */
        (* wtpSN_val_ptr_ptr ) = malloc(rowreq_ctx->data.wtpSN_len * sizeof((* wtpSN_val_ptr_ptr )[0]));
        if(NULL == (* wtpSN_val_ptr_ptr )) {
            snmp_log(LOG_ERR,"could not allocate memory\n");
            return MFD_ERROR;
        }
    }
    (* wtpSN_val_ptr_len_ptr ) = rowreq_ctx->data.wtpSN_len * sizeof((* wtpSN_val_ptr_ptr )[0]);
    memcpy( (* wtpSN_val_ptr_ptr ), rowreq_ctx->data.wtpSN, (* wtpSN_val_ptr_len_ptr ) );

    return MFD_SUCCESS;
} /* wtpSN_get */



/** @} */