/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 12088 $ of $ 
 *
 * $Id:$
 */
/* standard Net-SNMP includes */
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

/* include our parent header */
#include "dot11StaticRouteTable.h"


/** @defgroup data_get data_get: Routines to get data
 *
 * TODO:230:M: Implement dot11StaticRouteTable get routines.
 * TODO:240:M: Implement dot11StaticRouteTable mapping routines (if any).
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
 *** Table dot11StaticRouteTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * DOT11-AC-MIB::dot11StaticRouteTable is subid 1 of dot11RouteGroup.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.2.32.1, length: 12
*/

/* ---------------------------------------------------------------------
 * TODO:200:r: Implement dot11StaticRouteTable data context functions.
 */


/**
 * set mib index(es)
 *
 * @param tbl_idx mib index structure
 * @param staticRouteIndex_val
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
dot11StaticRouteTable_indexes_set_tbl_idx(dot11StaticRouteTable_mib_index *tbl_idx, long staticRouteIndex_val)
{
    DEBUGMSGTL(("verbose:dot11StaticRouteTable:dot11StaticRouteTable_indexes_set_tbl_idx","called\n"));

    /* staticRouteIndex(1)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h */
    tbl_idx->staticRouteIndex = staticRouteIndex_val;
    

    return MFD_SUCCESS;
} /* dot11StaticRouteTable_indexes_set_tbl_idx */

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
dot11StaticRouteTable_indexes_set(dot11StaticRouteTable_rowreq_ctx *rowreq_ctx, long staticRouteIndex_val)
{
    DEBUGMSGTL(("verbose:dot11StaticRouteTable:dot11StaticRouteTable_indexes_set","called\n"));

    if(MFD_SUCCESS != dot11StaticRouteTable_indexes_set_tbl_idx(&rowreq_ctx->tbl_idx
                                   , staticRouteIndex_val
           ))
        return MFD_ERROR;

    /*
     * convert mib index to oid index
     */
    rowreq_ctx->oid_idx.len = sizeof(rowreq_ctx->oid_tmp) / sizeof(oid);
    if(0 != dot11StaticRouteTable_index_to_oid(&rowreq_ctx->oid_idx,
                                    &rowreq_ctx->tbl_idx)) {
        return MFD_ERROR;
    }

    return MFD_SUCCESS;
} /* dot11StaticRouteTable_indexes_set */


/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11StaticRouteEntry.ipRouteStaticDest
 * ipRouteStaticDest is subid 2 of dot11StaticRouteEntry.
 * Its status is Current, and its access level is Create.
 * OID: .1.3.6.1.4.1.31656.6.1.2.32.1.1.2
 * Description:
ip route decsript
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
 * Extract the current value of the ipRouteStaticDest data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param ipRouteStaticDest_val_ptr
 *        Pointer to storage for a u_long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
ipRouteStaticDest_get( dot11StaticRouteTable_rowreq_ctx *rowreq_ctx, u_long * ipRouteStaticDest_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != ipRouteStaticDest_val_ptr );


    DEBUGMSGTL(("verbose:dot11StaticRouteTable:ipRouteStaticDest_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the ipRouteStaticDest data.
 * copy (* ipRouteStaticDest_val_ptr ) from rowreq_ctx->data
 */
    (* ipRouteStaticDest_val_ptr ) = rowreq_ctx->data.ipRouteStaticDest;

    return MFD_SUCCESS;
} /* ipRouteStaticDest_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11StaticRouteEntry.ipRouteStaticMask
 * ipRouteStaticMask is subid 3 of dot11StaticRouteEntry.
 * Its status is Current, and its access level is Create.
 * OID: .1.3.6.1.4.1.31656.6.1.2.32.1.1.3
 * Description:
ip route decsript
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
 * Extract the current value of the ipRouteStaticMask data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param ipRouteStaticMask_val_ptr
 *        Pointer to storage for a u_long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
ipRouteStaticMask_get( dot11StaticRouteTable_rowreq_ctx *rowreq_ctx, u_long * ipRouteStaticMask_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != ipRouteStaticMask_val_ptr );


    DEBUGMSGTL(("verbose:dot11StaticRouteTable:ipRouteStaticMask_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the ipRouteStaticMask data.
 * copy (* ipRouteStaticMask_val_ptr ) from rowreq_ctx->data
 */
    (* ipRouteStaticMask_val_ptr ) = rowreq_ctx->data.ipRouteStaticMask;

    return MFD_SUCCESS;
} /* ipRouteStaticMask_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11StaticRouteEntry.ipRouteStaticMode
 * ipRouteStaticMode is subid 4 of dot11StaticRouteEntry.
 * Its status is Current, and its access level is Create.
 * OID: .1.3.6.1.4.1.31656.6.1.2.32.1.1.4
 * Description:
ip route decsript
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  1      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 * Enum range: 3/8. Values:  network(1), interface(2), null0(3)
 *
 * Its syntax is INTEGER (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (u_long)
 */
/**
 * Extract the current value of the ipRouteStaticMode data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param ipRouteStaticMode_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
ipRouteStaticMode_get( dot11StaticRouteTable_rowreq_ctx *rowreq_ctx, u_long * ipRouteStaticMode_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != ipRouteStaticMode_val_ptr );


    DEBUGMSGTL(("verbose:dot11StaticRouteTable:ipRouteStaticMode_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the ipRouteStaticMode data.
 * copy (* ipRouteStaticMode_val_ptr ) from rowreq_ctx->data
 */
    (* ipRouteStaticMode_val_ptr ) = rowreq_ctx->data.ipRouteStaticMode;

    return MFD_SUCCESS;
} /* ipRouteStaticMode_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11StaticRouteEntry.ipRouteStaticSubnet
 * ipRouteStaticSubnet is subid 5 of dot11StaticRouteEntry.
 * Its status is Current, and its access level is Create.
 * OID: .1.3.6.1.4.1.31656.6.1.2.32.1.1.5
 * Description:
ip route Priority decsript
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
 * Extract the current value of the ipRouteStaticSubnet data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param ipRouteStaticSubnet_val_ptr
 *        Pointer to storage for a u_long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
ipRouteStaticSubnet_get( dot11StaticRouteTable_rowreq_ctx *rowreq_ctx, u_long * ipRouteStaticSubnet_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != ipRouteStaticSubnet_val_ptr );


    DEBUGMSGTL(("verbose:dot11StaticRouteTable:ipRouteStaticSubnet_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the ipRouteStaticSubnet data.
 * copy (* ipRouteStaticSubnet_val_ptr ) from rowreq_ctx->data
 */
    (* ipRouteStaticSubnet_val_ptr ) = rowreq_ctx->data.ipRouteStaticSubnet;

    return MFD_SUCCESS;
} /* ipRouteStaticSubnet_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11StaticRouteEntry.ipRouteStaticInterface
 * ipRouteStaticInterface is subid 6 of dot11StaticRouteEntry.
 * Its status is Current, and its access level is Create.
 * OID: .1.3.6.1.4.1.31656.6.1.2.32.1.1.6
 * Description:
ip route decsript
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
 * Extract the current value of the ipRouteStaticInterface data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param ipRouteStaticInterface_val_ptr_ptr
 *        Pointer to storage for a char variable
 * @param ipRouteStaticInterface_val_ptr_len_ptr
 *        Pointer to a size_t. On entry, it will contain the size (in bytes)
 *        pointed to by ipRouteStaticInterface.
 *        On exit, this value should contain the data size (in bytes).
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
*
 * @note If you need more than (*ipRouteStaticInterface_val_ptr_len_ptr) bytes of memory,
 *       allocate it using malloc() and update ipRouteStaticInterface_val_ptr_ptr.
 *       <b>DO NOT</b> free the previous pointer.
 *       The MFD helper will release the memory you allocate.
 *
 * @remark If you call this function yourself, you are responsible
 *         for checking if the pointer changed, and freeing any
 *         previously allocated memory. (Not necessary if you pass
 *         in a pointer to static memory, obviously.)
 */
int
ipRouteStaticInterface_get( dot11StaticRouteTable_rowreq_ctx *rowreq_ctx, char **ipRouteStaticInterface_val_ptr_ptr, size_t *ipRouteStaticInterface_val_ptr_len_ptr )
{
   /** we should have a non-NULL pointer and enough storage */
   netsnmp_assert( (NULL != ipRouteStaticInterface_val_ptr_ptr) && (NULL != *ipRouteStaticInterface_val_ptr_ptr));
   netsnmp_assert( NULL != ipRouteStaticInterface_val_ptr_len_ptr );


    DEBUGMSGTL(("verbose:dot11StaticRouteTable:ipRouteStaticInterface_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the ipRouteStaticInterface data.
 * copy (* ipRouteStaticInterface_val_ptr_ptr ) data and (* ipRouteStaticInterface_val_ptr_len_ptr ) from rowreq_ctx->data
 */
    /*
     * make sure there is enough space for ipRouteStaticInterface data
     */
    if ((NULL == (* ipRouteStaticInterface_val_ptr_ptr )) ||
        ((* ipRouteStaticInterface_val_ptr_len_ptr ) <
         (rowreq_ctx->data.ipRouteStaticInterface_len* sizeof(rowreq_ctx->data.ipRouteStaticInterface[0])))) {
        /*
         * allocate space for ipRouteStaticInterface data
         */
        (* ipRouteStaticInterface_val_ptr_ptr ) = malloc(rowreq_ctx->data.ipRouteStaticInterface_len* sizeof(rowreq_ctx->data.ipRouteStaticInterface[0]));
        if(NULL == (* ipRouteStaticInterface_val_ptr_ptr )) {
            snmp_log(LOG_ERR,"could not allocate memory\n");
            return MFD_ERROR;
        }
    }
    (* ipRouteStaticInterface_val_ptr_len_ptr ) = rowreq_ctx->data.ipRouteStaticInterface_len* sizeof(rowreq_ctx->data.ipRouteStaticInterface[0]);
    memcpy( (* ipRouteStaticInterface_val_ptr_ptr ), rowreq_ctx->data.ipRouteStaticInterface, rowreq_ctx->data.ipRouteStaticInterface_len* sizeof(rowreq_ctx->data.ipRouteStaticInterface[0]) );

    return MFD_SUCCESS;
} /* ipRouteStaticInterface_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11StaticRouteEntry.ipRouteStaticActive
 * ipRouteStaticActive is subid 7 of dot11StaticRouteEntry.
 * Its status is Current, and its access level is Create.
 * OID: .1.3.6.1.4.1.31656.6.1.2.32.1.1.7
 * Description:
ip route decsript
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  1      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 * Enum range: 3/8. Values:  none(1), reject(2), blackhole(3), equalize(4)
 *
 * Its syntax is INTEGER (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (u_long)
 */
/**
 * Extract the current value of the ipRouteStaticActive data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param ipRouteStaticActive_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
ipRouteStaticActive_get( dot11StaticRouteTable_rowreq_ctx *rowreq_ctx, u_long * ipRouteStaticActive_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != ipRouteStaticActive_val_ptr );


    DEBUGMSGTL(("verbose:dot11StaticRouteTable:ipRouteStaticActive_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the ipRouteStaticActive data.
 * copy (* ipRouteStaticActive_val_ptr ) from rowreq_ctx->data
 */
    (* ipRouteStaticActive_val_ptr ) = rowreq_ctx->data.ipRouteStaticActive;

    return MFD_SUCCESS;
} /* ipRouteStaticActive_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11StaticRouteEntry.ipRouteStaticMetric
 * ipRouteStaticMetric is subid 8 of dot11StaticRouteEntry.
 * Its status is Current, and its access level is Create.
 * OID: .1.3.6.1.4.1.31656.6.1.2.32.1.1.8
 * Description:
ip route decsript
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 1      hashint   0
 *   settable   1
 *
 * Ranges:  1 - 255;
 *
 * Its syntax is INTEGER (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (long)
 */
/**
 * Extract the current value of the ipRouteStaticMetric data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param ipRouteStaticMetric_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
ipRouteStaticMetric_get( dot11StaticRouteTable_rowreq_ctx *rowreq_ctx, long * ipRouteStaticMetric_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != ipRouteStaticMetric_val_ptr );


    DEBUGMSGTL(("verbose:dot11StaticRouteTable:ipRouteStaticMetric_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the ipRouteStaticMetric data.
 * copy (* ipRouteStaticMetric_val_ptr ) from rowreq_ctx->data
 */
    (* ipRouteStaticMetric_val_ptr ) = rowreq_ctx->data.ipRouteStaticMetric;

    return MFD_SUCCESS;
} /* ipRouteStaticMetric_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11StaticRouteEntry.ipRouteStaticRowStatus
 * ipRouteStaticRowStatus is subid 9 of dot11StaticRouteEntry.
 * Its status is Current, and its access level is Create.
 * OID: .1.3.6.1.4.1.31656.6.1.2.32.1.1.9
 * Description:
ip route decsript
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  1      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 * Enum range: 3/8. Values:  active(1), notInService(2), notReady(3), createAndGo(4), createAndWait(5), destroy(6)
 *
 * Its syntax is RowStatus (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (u_long)
 */
/**
 * Extract the current value of the ipRouteStaticRowStatus data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param ipRouteStaticRowStatus_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
ipRouteStaticRowStatus_get( dot11StaticRouteTable_rowreq_ctx *rowreq_ctx, u_long * ipRouteStaticRowStatus_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != ipRouteStaticRowStatus_val_ptr );

    (* ipRouteStaticRowStatus_val_ptr ) = rowreq_ctx->data.ipRouteStaticRowStatus;

    return MFD_SUCCESS;
} /* ipRouteStaticRowStatus_get */



/** @} */