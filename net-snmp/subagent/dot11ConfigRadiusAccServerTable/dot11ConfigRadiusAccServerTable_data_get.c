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
#include "dot11ConfigRadiusAccServerTable.h"


/** @defgroup data_get data_get: Routines to get data
 *
 * TODO:230:M: Implement dot11ConfigRadiusAccServerTable get routines.
 * TODO:240:M: Implement dot11ConfigRadiusAccServerTable mapping routines (if any).
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
 *** Table dot11ConfigRadiusAccServerTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11ConfigRadiusAccServerTable is subid 7 of dot11securityConfig.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.2.14.7, length: 12
*/

/* ---------------------------------------------------------------------
 * TODO:200:r: Implement dot11ConfigRadiusAccServerTable data context functions.
 */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11ConfigRadiusAccServerEntry.RadiusAccServerID
 * RadiusAccServerID is subid 1 of dot11ConfigRadiusAccServerEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.2.14.7.1.1
 * Description:
RadiusAccServerID.
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
 * default-node-RadiusAccServerID.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
RadiusAccServerID_dot11ConfigRadiusAccServerTable_map(long *mib_RadiusAccServerID_val_ptr, long raw_RadiusAccServerID_val)
{
    netsnmp_assert(NULL != mib_RadiusAccServerID_val_ptr);
    
    DEBUGMSGTL(("verbose:dot11ConfigRadiusAccServerTable:RadiusAccServerID_map","called\n"));
    
    /*
     * TODO:241:o: |-> Implement RadiusAccServerID mapping.
     * If the values for your data type don't exactly match the
     * possible values defined by the mib, you should map them here.
     */
    (*mib_RadiusAccServerID_val_ptr) = raw_RadiusAccServerID_val;

    return MFD_SUCCESS;
} /* RadiusAccServerID_map */


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
dot11ConfigRadiusAccServerTable_indexes_set_tbl_idx(dot11ConfigRadiusAccServerTable_mib_index *tbl_idx, long RadiusAccServerID_val)
{
    DEBUGMSGTL(("verbose:dot11ConfigRadiusAccServerTable:dot11ConfigRadiusAccServerTable_indexes_set_tbl_idx","called\n"));

    /* RadiusAccServerID(1)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h */
    tbl_idx->RadiusAccServerID = RadiusAccServerID_val;
    

    return MFD_SUCCESS;
} /* dot11ConfigRadiusAccServerTable_indexes_set_tbl_idx */

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
dot11ConfigRadiusAccServerTable_indexes_set(dot11ConfigRadiusAccServerTable_rowreq_ctx *rowreq_ctx, long RadiusAccServerID_val)
{
    DEBUGMSGTL(("verbose:dot11ConfigRadiusAccServerTable:dot11ConfigRadiusAccServerTable_indexes_set","called\n"));

    if(MFD_SUCCESS != dot11ConfigRadiusAccServerTable_indexes_set_tbl_idx(&rowreq_ctx->tbl_idx
                                   , RadiusAccServerID_val
           ))
        return MFD_ERROR;

    /*
     * convert mib index to oid index
     */
    rowreq_ctx->oid_idx.len = sizeof(rowreq_ctx->oid_tmp) / sizeof(oid);
    if(0 != dot11ConfigRadiusAccServerTable_index_to_oid(&rowreq_ctx->oid_idx,
                                    &rowreq_ctx->tbl_idx)) {
        return MFD_ERROR;
    }

    return MFD_SUCCESS;
} /* dot11ConfigRadiusAccServerTable_indexes_set */


/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11ConfigRadiusAccServerEntry.NewAccServerIPAdd
 * NewAccServerIPAdd is subid 2 of dot11ConfigRadiusAccServerEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.31656.6.1.2.14.7.1.2
 * Description:
NewAccServerIPAdd.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
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
 * default-node-NewAccServerIPAdd.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
NewAccServerIPAdd_map(u_long *mib_NewAccServerIPAdd_val_ptr, u_long raw_NewAccServerIPAdd_val)
{
    netsnmp_assert(NULL != mib_NewAccServerIPAdd_val_ptr);
    
    DEBUGMSGTL(("verbose:dot11ConfigRadiusAccServerTable:NewAccServerIPAdd_map","called\n"));
    
    /*
     * TODO:241:o: |-> Implement NewAccServerIPAdd mapping.
     * If the values for your data type don't exactly match the
     * possible values defined by the mib, you should map them here.
     */
    (*mib_NewAccServerIPAdd_val_ptr) = raw_NewAccServerIPAdd_val;

    return MFD_SUCCESS;
} /* NewAccServerIPAdd_map */

/**
 * Extract the current value of the NewAccServerIPAdd data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param NewAccServerIPAdd_val_ptr
 *        Pointer to storage for a u_long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
NewAccServerIPAdd_get( dot11ConfigRadiusAccServerTable_rowreq_ctx *rowreq_ctx, u_long * NewAccServerIPAdd_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != NewAccServerIPAdd_val_ptr );


    DEBUGMSGTL(("verbose:dot11ConfigRadiusAccServerTable:NewAccServerIPAdd_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the NewAccServerIPAdd data.
 * set (* NewAccServerIPAdd_val_ptr ) from rowreq_ctx->data
 */
    (* NewAccServerIPAdd_val_ptr ) = rowreq_ctx->data.NewAccServerIPAdd;

    return MFD_SUCCESS;
} /* NewAccServerIPAdd_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11ConfigRadiusAccServerEntry.NewAccServerPort
 * NewAccServerPort is subid 3 of dot11ConfigRadiusAccServerEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.31656.6.1.2.14.7.1.3
 * Description:
NewAccServerPort.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
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
 * default-node-NewAccServerPort.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
NewAccServerPort_map(long *mib_NewAccServerPort_val_ptr, long raw_NewAccServerPort_val)
{
    netsnmp_assert(NULL != mib_NewAccServerPort_val_ptr);
    
    DEBUGMSGTL(("verbose:dot11ConfigRadiusAccServerTable:NewAccServerPort_map","called\n"));
    
    /*
     * TODO:241:o: |-> Implement NewAccServerPort mapping.
     * If the values for your data type don't exactly match the
     * possible values defined by the mib, you should map them here.
     */
    (*mib_NewAccServerPort_val_ptr) = raw_NewAccServerPort_val;

    return MFD_SUCCESS;
} /* NewAccServerPort_map */

/**
 * Extract the current value of the NewAccServerPort data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param NewAccServerPort_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
NewAccServerPort_get( dot11ConfigRadiusAccServerTable_rowreq_ctx *rowreq_ctx, long * NewAccServerPort_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != NewAccServerPort_val_ptr );


    DEBUGMSGTL(("verbose:dot11ConfigRadiusAccServerTable:NewAccServerPort_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the NewAccServerPort data.
 * set (* NewAccServerPort_val_ptr ) from rowreq_ctx->data
 */
    (* NewAccServerPort_val_ptr ) = rowreq_ctx->data.NewAccServerPort;

    return MFD_SUCCESS;
} /* NewAccServerPort_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11ConfigRadiusAccServerEntry.NewAccServerSharedkey
 * NewAccServerSharedkey is subid 4 of dot11ConfigRadiusAccServerEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.31656.6.1.2.14.7.1.4
 * Description:
NewAccServerSharedkey.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 1      hashint   1
 *   settable   1
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
 * default-node-NewAccServerSharedkey.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
NewAccServerSharedkey_map(char **mib_NewAccServerSharedkey_val_ptr_ptr, size_t *mib_NewAccServerSharedkey_val_ptr_len_ptr, char *raw_NewAccServerSharedkey_val_ptr, size_t raw_NewAccServerSharedkey_val_ptr_len, int allow_realloc)
{
    int converted_len;

    netsnmp_assert(NULL != raw_NewAccServerSharedkey_val_ptr);
    netsnmp_assert((NULL != mib_NewAccServerSharedkey_val_ptr_ptr) && (NULL != mib_NewAccServerSharedkey_val_ptr_len_ptr));
    
    DEBUGMSGTL(("verbose:dot11ConfigRadiusAccServerTable:NewAccServerSharedkey_map","called\n"));
    
    /*
     * TODO:241:r: |-> Implement NewAccServerSharedkey non-integer mapping
     * it is hard to autogenerate code for mapping types that are not simple
     * integers, so here is an idea of what you might need to do. It will
     * probably need some tweaking to get right.
     */
    /*
     * if the length of the raw data doesn't directly correspond with
     * the length of the mib data, set converted_len to the
     * space required.
     */
    converted_len = raw_NewAccServerSharedkey_val_ptr_len; /* assume equal */
    if((NULL == *mib_NewAccServerSharedkey_val_ptr_ptr) || (*mib_NewAccServerSharedkey_val_ptr_len_ptr < converted_len)) {
        if(! allow_realloc) {
            snmp_log(LOG_ERR,"not enough space for value mapping\n");
            return SNMP_ERR_GENERR;
        }
        *mib_NewAccServerSharedkey_val_ptr_ptr = realloc( *mib_NewAccServerSharedkey_val_ptr_ptr, converted_len * sizeof(**mib_NewAccServerSharedkey_val_ptr_ptr));
        if(NULL == *mib_NewAccServerSharedkey_val_ptr_ptr) {
            snmp_log(LOG_ERR,"could not allocate memory\n");
            return SNMP_ERR_GENERR;
        }
    }
    *mib_NewAccServerSharedkey_val_ptr_len_ptr = converted_len;
    memcpy( *mib_NewAccServerSharedkey_val_ptr_ptr, raw_NewAccServerSharedkey_val_ptr, converted_len );

    return MFD_SUCCESS;
} /* NewAccServerSharedkey_map */

/**
 * Extract the current value of the NewAccServerSharedkey data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param NewAccServerSharedkey_val_ptr_ptr
 *        Pointer to storage for a char variable
 * @param NewAccServerSharedkey_val_ptr_len_ptr
 *        Pointer to a size_t. On entry, it will contain the size (in bytes)
 *        pointed to by NewAccServerSharedkey.
 *        On exit, this value should contain the data size (in bytes).
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
*
 * @note If you need more than (*NewAccServerSharedkey_val_ptr_len_ptr) bytes of memory,
 *       allocate it using malloc() and update NewAccServerSharedkey_val_ptr_ptr.
 *       <b>DO NOT</b> free the previous pointer.
 *       The MFD helper will release the memory you allocate.
 *
 * @remark If you call this function yourself, you are responsible
 *         for checking if the pointer changed, and freeing any
 *         previously allocated memory. (Not necessary if you pass
 *         in a pointer to static memory, obviously.)
 */
int
NewAccServerSharedkey_get( dot11ConfigRadiusAccServerTable_rowreq_ctx *rowreq_ctx, char **NewAccServerSharedkey_val_ptr_ptr, size_t *NewAccServerSharedkey_val_ptr_len_ptr )
{
   /** we should have a non-NULL pointer and enough storage */
   netsnmp_assert( (NULL != NewAccServerSharedkey_val_ptr_ptr) && (NULL != *NewAccServerSharedkey_val_ptr_ptr));
   netsnmp_assert( NULL != NewAccServerSharedkey_val_ptr_len_ptr );


    DEBUGMSGTL(("verbose:dot11ConfigRadiusAccServerTable:NewAccServerSharedkey_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the NewAccServerSharedkey data.
 * set (* NewAccServerSharedkey_val_ptr_ptr ) and (* NewAccServerSharedkey_val_ptr_len_ptr ) from rowreq_ctx->data
 */
    /*
     * make sure there is enough space for NewAccServerSharedkey data
     */
    if ((NULL == (* NewAccServerSharedkey_val_ptr_ptr )) ||
        ((* NewAccServerSharedkey_val_ptr_len_ptr ) < (rowreq_ctx->data.NewAccServerSharedkey_len * sizeof((* NewAccServerSharedkey_val_ptr_ptr )[0])))) {
        /*
         * allocate space for NewAccServerSharedkey data
         */
        (* NewAccServerSharedkey_val_ptr_ptr ) = malloc(rowreq_ctx->data.NewAccServerSharedkey_len * sizeof((* NewAccServerSharedkey_val_ptr_ptr )[0]));
        if(NULL == (* NewAccServerSharedkey_val_ptr_ptr )) {
            snmp_log(LOG_ERR,"could not allocate memory\n");
            return MFD_ERROR;
        }
    }
    (* NewAccServerSharedkey_val_ptr_len_ptr ) = rowreq_ctx->data.NewAccServerSharedkey_len * sizeof((* NewAccServerSharedkey_val_ptr_ptr )[0]);
    memcpy( (* NewAccServerSharedkey_val_ptr_ptr ), rowreq_ctx->data.NewAccServerSharedkey, (* NewAccServerSharedkey_val_ptr_len_ptr ) );

    return MFD_SUCCESS;
} /* NewAccServerSharedkey_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11ConfigRadiusAccServerEntry.NewRadiusAccServerIPAdd
 * NewRadiusAccServerIPAdd is subid 5 of dot11ConfigRadiusAccServerEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.31656.6.1.2.14.7.1.5
 * Description:
NewRadiusAccServerIPAdd.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
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
 * default-node-NewRadiusAccServerIPAdd.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
NewRadiusAccServerIPAdd_map(u_long *mib_NewRadiusAccServerIPAdd_val_ptr, u_long raw_NewRadiusAccServerIPAdd_val)
{
    netsnmp_assert(NULL != mib_NewRadiusAccServerIPAdd_val_ptr);
    
    DEBUGMSGTL(("verbose:dot11ConfigRadiusAccServerTable:NewRadiusAccServerIPAdd_map","called\n"));
    
    /*
     * TODO:241:o: |-> Implement NewRadiusAccServerIPAdd mapping.
     * If the values for your data type don't exactly match the
     * possible values defined by the mib, you should map them here.
     */
    (*mib_NewRadiusAccServerIPAdd_val_ptr) = raw_NewRadiusAccServerIPAdd_val;

    return MFD_SUCCESS;
} /* NewRadiusAccServerIPAdd_map */

/**
 * Extract the current value of the NewRadiusAccServerIPAdd data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param NewRadiusAccServerIPAdd_val_ptr
 *        Pointer to storage for a u_long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
NewRadiusAccServerIPAdd_get( dot11ConfigRadiusAccServerTable_rowreq_ctx *rowreq_ctx, u_long * NewRadiusAccServerIPAdd_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != NewRadiusAccServerIPAdd_val_ptr );


    DEBUGMSGTL(("verbose:dot11ConfigRadiusAccServerTable:NewRadiusAccServerIPAdd_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the NewRadiusAccServerIPAdd data.
 * set (* NewRadiusAccServerIPAdd_val_ptr ) from rowreq_ctx->data
 */
    (* NewRadiusAccServerIPAdd_val_ptr ) = rowreq_ctx->data.NewRadiusAccServerIPAdd;

    return MFD_SUCCESS;
} /* NewRadiusAccServerIPAdd_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11ConfigRadiusAccServerEntry.NewRadiusAccServerPort
 * NewRadiusAccServerPort is subid 6 of dot11ConfigRadiusAccServerEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.31656.6.1.2.14.7.1.6
 * Description:
NewRadiusAccServerPort.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
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
 * default-node-NewRadiusAccServerPort.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
NewRadiusAccServerPort_map(long *mib_NewRadiusAccServerPort_val_ptr, long raw_NewRadiusAccServerPort_val)
{
    netsnmp_assert(NULL != mib_NewRadiusAccServerPort_val_ptr);
    
    DEBUGMSGTL(("verbose:dot11ConfigRadiusAccServerTable:NewRadiusAccServerPort_map","called\n"));
    
    /*
     * TODO:241:o: |-> Implement NewRadiusAccServerPort mapping.
     * If the values for your data type don't exactly match the
     * possible values defined by the mib, you should map them here.
     */
    (*mib_NewRadiusAccServerPort_val_ptr) = raw_NewRadiusAccServerPort_val;

    return MFD_SUCCESS;
} /* NewRadiusAccServerPort_map */

/**
 * Extract the current value of the NewRadiusAccServerPort data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param NewRadiusAccServerPort_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
NewRadiusAccServerPort_get( dot11ConfigRadiusAccServerTable_rowreq_ctx *rowreq_ctx, long * NewRadiusAccServerPort_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != NewRadiusAccServerPort_val_ptr );


    DEBUGMSGTL(("verbose:dot11ConfigRadiusAccServerTable:NewRadiusAccServerPort_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the NewRadiusAccServerPort data.
 * set (* NewRadiusAccServerPort_val_ptr ) from rowreq_ctx->data
 */
    (* NewRadiusAccServerPort_val_ptr ) = rowreq_ctx->data.NewRadiusAccServerPort;

    return MFD_SUCCESS;
} /* NewRadiusAccServerPort_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11ConfigRadiusAccServerEntry.NewRadiusAccServerSharedkey
 * NewRadiusAccServerSharedkey is subid 7 of dot11ConfigRadiusAccServerEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.31656.6.1.2.14.7.1.7
 * Description:
NewRadiusAccServerSharedkey.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 1      hashint   1
 *   settable   1
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
 * default-node-NewRadiusAccServerSharedkey.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
NewRadiusAccServerSharedkey_map(char **mib_NewRadiusAccServerSharedkey_val_ptr_ptr, size_t *mib_NewRadiusAccServerSharedkey_val_ptr_len_ptr, char *raw_NewRadiusAccServerSharedkey_val_ptr, size_t raw_NewRadiusAccServerSharedkey_val_ptr_len, int allow_realloc)
{
    int converted_len;

    netsnmp_assert(NULL != raw_NewRadiusAccServerSharedkey_val_ptr);
    netsnmp_assert((NULL != mib_NewRadiusAccServerSharedkey_val_ptr_ptr) && (NULL != mib_NewRadiusAccServerSharedkey_val_ptr_len_ptr));
    
    DEBUGMSGTL(("verbose:dot11ConfigRadiusAccServerTable:NewRadiusAccServerSharedkey_map","called\n"));
    
    /*
     * TODO:241:r: |-> Implement NewRadiusAccServerSharedkey non-integer mapping
     * it is hard to autogenerate code for mapping types that are not simple
     * integers, so here is an idea of what you might need to do. It will
     * probably need some tweaking to get right.
     */
    /*
     * if the length of the raw data doesn't directly correspond with
     * the length of the mib data, set converted_len to the
     * space required.
     */
    converted_len = raw_NewRadiusAccServerSharedkey_val_ptr_len; /* assume equal */
    if((NULL == *mib_NewRadiusAccServerSharedkey_val_ptr_ptr) || (*mib_NewRadiusAccServerSharedkey_val_ptr_len_ptr < converted_len)) {
        if(! allow_realloc) {
            snmp_log(LOG_ERR,"not enough space for value mapping\n");
            return SNMP_ERR_GENERR;
        }
        *mib_NewRadiusAccServerSharedkey_val_ptr_ptr = realloc( *mib_NewRadiusAccServerSharedkey_val_ptr_ptr, converted_len * sizeof(**mib_NewRadiusAccServerSharedkey_val_ptr_ptr));
        if(NULL == *mib_NewRadiusAccServerSharedkey_val_ptr_ptr) {
            snmp_log(LOG_ERR,"could not allocate memory\n");
            return SNMP_ERR_GENERR;
        }
    }
    *mib_NewRadiusAccServerSharedkey_val_ptr_len_ptr = converted_len;
    memcpy( *mib_NewRadiusAccServerSharedkey_val_ptr_ptr, raw_NewRadiusAccServerSharedkey_val_ptr, converted_len );

    return MFD_SUCCESS;
} /* NewRadiusAccServerSharedkey_map */

/**
 * Extract the current value of the NewRadiusAccServerSharedkey data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param NewRadiusAccServerSharedkey_val_ptr_ptr
 *        Pointer to storage for a char variable
 * @param NewRadiusAccServerSharedkey_val_ptr_len_ptr
 *        Pointer to a size_t. On entry, it will contain the size (in bytes)
 *        pointed to by NewRadiusAccServerSharedkey.
 *        On exit, this value should contain the data size (in bytes).
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
*
 * @note If you need more than (*NewRadiusAccServerSharedkey_val_ptr_len_ptr) bytes of memory,
 *       allocate it using malloc() and update NewRadiusAccServerSharedkey_val_ptr_ptr.
 *       <b>DO NOT</b> free the previous pointer.
 *       The MFD helper will release the memory you allocate.
 *
 * @remark If you call this function yourself, you are responsible
 *         for checking if the pointer changed, and freeing any
 *         previously allocated memory. (Not necessary if you pass
 *         in a pointer to static memory, obviously.)
 */
int
NewRadiusAccServerSharedkey_get( dot11ConfigRadiusAccServerTable_rowreq_ctx *rowreq_ctx, char **NewRadiusAccServerSharedkey_val_ptr_ptr, size_t *NewRadiusAccServerSharedkey_val_ptr_len_ptr )
{
   /** we should have a non-NULL pointer and enough storage */
   netsnmp_assert( (NULL != NewRadiusAccServerSharedkey_val_ptr_ptr) && (NULL != *NewRadiusAccServerSharedkey_val_ptr_ptr));
   netsnmp_assert( NULL != NewRadiusAccServerSharedkey_val_ptr_len_ptr );


    DEBUGMSGTL(("verbose:dot11ConfigRadiusAccServerTable:NewRadiusAccServerSharedkey_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the NewRadiusAccServerSharedkey data.
 * set (* NewRadiusAccServerSharedkey_val_ptr_ptr ) and (* NewRadiusAccServerSharedkey_val_ptr_len_ptr ) from rowreq_ctx->data
 */
    /*
     * make sure there is enough space for NewRadiusAccServerSharedkey data
     */
    if ((NULL == (* NewRadiusAccServerSharedkey_val_ptr_ptr )) ||
        ((* NewRadiusAccServerSharedkey_val_ptr_len_ptr ) < (rowreq_ctx->data.NewRadiusAccServerSharedkey_len * sizeof((* NewRadiusAccServerSharedkey_val_ptr_ptr )[0])))) {
        /*
         * allocate space for NewRadiusAccServerSharedkey data
         */
        (* NewRadiusAccServerSharedkey_val_ptr_ptr ) = malloc(rowreq_ctx->data.NewRadiusAccServerSharedkey_len * sizeof((* NewRadiusAccServerSharedkey_val_ptr_ptr )[0]));
        if(NULL == (* NewRadiusAccServerSharedkey_val_ptr_ptr )) {
            snmp_log(LOG_ERR,"could not allocate memory\n");
            return MFD_ERROR;
        }
    }
    (* NewRadiusAccServerSharedkey_val_ptr_len_ptr ) = rowreq_ctx->data.NewRadiusAccServerSharedkey_len * sizeof((* NewRadiusAccServerSharedkey_val_ptr_ptr )[0]);
    memcpy( (* NewRadiusAccServerSharedkey_val_ptr_ptr ), rowreq_ctx->data.NewRadiusAccServerSharedkey, (* NewRadiusAccServerSharedkey_val_ptr_len_ptr ) );

    return MFD_SUCCESS;
} /* NewRadiusAccServerSharedkey_get */



/** @} */