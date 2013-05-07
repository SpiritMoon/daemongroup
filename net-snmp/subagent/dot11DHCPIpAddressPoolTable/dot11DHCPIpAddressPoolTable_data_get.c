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
#include "dot11DHCPIpAddressPoolTable.h"


/** @defgroup data_get data_get: Routines to get data
 *
 * TODO:230:M: Implement dot11DHCPIpAddressPoolTable get routines.
 * TODO:240:M: Implement dot11DHCPIpAddressPoolTable mapping routines (if any).
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
 *** Table dot11DHCPIpAddressPoolTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11DHCPIpAddressPoolTable is subid 4 of dot11Service.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.2.6.4, length: 12
*/

/* ---------------------------------------------------------------------
 * TODO:200:r: Implement dot11DHCPIpAddressPoolTable data context functions.
 */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11DHCPIpAddressPoolEntry.AddPoolIndex
 * AddPoolIndex is subid 1 of dot11DHCPIpAddressPoolEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.2.6.4.1.1
 * Description:
DHCP Address Pool Index.
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
 * default-node-AddPoolIndex.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
AddPoolIndex_map(long *mib_AddPoolIndex_val_ptr, long raw_AddPoolIndex_val)
{
    netsnmp_assert(NULL != mib_AddPoolIndex_val_ptr);
    
    DEBUGMSGTL(("verbose:dot11DHCPIpAddressPoolTable:AddPoolIndex_map","called\n"));
    
    /*
     * TODO:241:o: |-> Implement AddPoolIndex mapping.
     * If the values for your data type don't exactly match the
     * possible values defined by the mib, you should map them here.
     */
    (*mib_AddPoolIndex_val_ptr) = raw_AddPoolIndex_val;

    return MFD_SUCCESS;
} /* AddPoolIndex_map */


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
dot11DHCPIpAddressPoolTable_indexes_set_tbl_idx(dot11DHCPIpAddressPoolTable_mib_index *tbl_idx, long AddPoolIndex_val)
{
    DEBUGMSGTL(("verbose:dot11DHCPIpAddressPoolTable:dot11DHCPIpAddressPoolTable_indexes_set_tbl_idx","called\n"));

    /* AddPoolIndex(1)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h */
    tbl_idx->AddPoolIndex = AddPoolIndex_val;
    

    return MFD_SUCCESS;
} /* dot11DHCPIpAddressPoolTable_indexes_set_tbl_idx */

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
dot11DHCPIpAddressPoolTable_indexes_set(dot11DHCPIpAddressPoolTable_rowreq_ctx *rowreq_ctx, long AddPoolIndex_val)
{
    DEBUGMSGTL(("verbose:dot11DHCPIpAddressPoolTable:dot11DHCPIpAddressPoolTable_indexes_set","called\n"));

    if(MFD_SUCCESS != dot11DHCPIpAddressPoolTable_indexes_set_tbl_idx(&rowreq_ctx->tbl_idx
                                   , AddPoolIndex_val
           ))
        return MFD_ERROR;

    /*
     * convert mib index to oid index
     */
    rowreq_ctx->oid_idx.len = sizeof(rowreq_ctx->oid_tmp) / sizeof(oid);
    if(0 != dot11DHCPIpAddressPoolTable_index_to_oid(&rowreq_ctx->oid_idx,
                                    &rowreq_ctx->tbl_idx)) {
        return MFD_ERROR;
    }

    return MFD_SUCCESS;
} /* dot11DHCPIpAddressPoolTable_indexes_set */


/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11DHCPIpAddressPoolEntry.IPAddpoolStartAdd
 * IPAddpoolStartAdd is subid 2 of dot11DHCPIpAddressPoolEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.31656.6.1.2.6.4.1.2
 * Description:
IP Address pool starting address.
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
 * default-node-IPAddpoolStartAdd.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
IPAddpoolStartAdd_map(u_long *mib_IPAddpoolStartAdd_val_ptr, u_long raw_IPAddpoolStartAdd_val)
{
    netsnmp_assert(NULL != mib_IPAddpoolStartAdd_val_ptr);
    
    DEBUGMSGTL(("verbose:dot11DHCPIpAddressPoolTable:IPAddpoolStartAdd_map","called\n"));
    
    /*
     * TODO:241:o: |-> Implement IPAddpoolStartAdd mapping.
     * If the values for your data type don't exactly match the
     * possible values defined by the mib, you should map them here.
     */
    (*mib_IPAddpoolStartAdd_val_ptr) = raw_IPAddpoolStartAdd_val;

    return MFD_SUCCESS;
} /* IPAddpoolStartAdd_map */

/**
 * Extract the current value of the IPAddpoolStartAdd data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param IPAddpoolStartAdd_val_ptr
 *        Pointer to storage for a u_long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
IPAddpoolStartAdd_get( dot11DHCPIpAddressPoolTable_rowreq_ctx *rowreq_ctx, u_long * IPAddpoolStartAdd_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != IPAddpoolStartAdd_val_ptr );


    DEBUGMSGTL(("verbose:dot11DHCPIpAddressPoolTable:IPAddpoolStartAdd_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the IPAddpoolStartAdd data.
 * set (* IPAddpoolStartAdd_val_ptr ) from rowreq_ctx->data
 */
    (* IPAddpoolStartAdd_val_ptr ) = rowreq_ctx->data.IPAddpoolStartAdd;

    return MFD_SUCCESS;
} /* IPAddpoolStartAdd_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11DHCPIpAddressPoolEntry.IPAddpoolEndAdd
 * IPAddpoolEndAdd is subid 3 of dot11DHCPIpAddressPoolEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.31656.6.1.2.6.4.1.3
 * Description:
IP Address pool ending address.
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
 * default-node-IPAddpoolEndAdd.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
IPAddpoolEndAdd_map(u_long *mib_IPAddpoolEndAdd_val_ptr, u_long raw_IPAddpoolEndAdd_val)
{
    netsnmp_assert(NULL != mib_IPAddpoolEndAdd_val_ptr);
    
    DEBUGMSGTL(("verbose:dot11DHCPIpAddressPoolTable:IPAddpoolEndAdd_map","called\n"));
    
    /*
     * TODO:241:o: |-> Implement IPAddpoolEndAdd mapping.
     * If the values for your data type don't exactly match the
     * possible values defined by the mib, you should map them here.
     */
    (*mib_IPAddpoolEndAdd_val_ptr) = raw_IPAddpoolEndAdd_val;

    return MFD_SUCCESS;
} /* IPAddpoolEndAdd_map */

/**
 * Extract the current value of the IPAddpoolEndAdd data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param IPAddpoolEndAdd_val_ptr
 *        Pointer to storage for a u_long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
IPAddpoolEndAdd_get( dot11DHCPIpAddressPoolTable_rowreq_ctx *rowreq_ctx, u_long * IPAddpoolEndAdd_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != IPAddpoolEndAdd_val_ptr );


    DEBUGMSGTL(("verbose:dot11DHCPIpAddressPoolTable:IPAddpoolEndAdd_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the IPAddpoolEndAdd data.
 * set (* IPAddpoolEndAdd_val_ptr ) from rowreq_ctx->data
 */
    (* IPAddpoolEndAdd_val_ptr ) = rowreq_ctx->data.IPAddpoolEndAdd;

    return MFD_SUCCESS;
} /* IPAddpoolEndAdd_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11DHCPIpAddressPoolEntry.GatewayAddress
 * GatewayAddress is subid 4 of dot11DHCPIpAddressPoolEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.31656.6.1.2.6.4.1.4
 * Description:
Gateway Address.
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
 * default-node-GatewayAddress.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
GatewayAddress_map(u_long *mib_GatewayAddress_val_ptr, u_long raw_GatewayAddress_val)
{
    netsnmp_assert(NULL != mib_GatewayAddress_val_ptr);
    
    DEBUGMSGTL(("verbose:dot11DHCPIpAddressPoolTable:GatewayAddress_map","called\n"));
    
    /*
     * TODO:241:o: |-> Implement GatewayAddress mapping.
     * If the values for your data type don't exactly match the
     * possible values defined by the mib, you should map them here.
     */
    (*mib_GatewayAddress_val_ptr) = raw_GatewayAddress_val;

    return MFD_SUCCESS;
} /* GatewayAddress_map */

/**
 * Extract the current value of the GatewayAddress data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param GatewayAddress_val_ptr
 *        Pointer to storage for a u_long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
GatewayAddress_get( dot11DHCPIpAddressPoolTable_rowreq_ctx *rowreq_ctx, u_long * GatewayAddress_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != GatewayAddress_val_ptr );


    DEBUGMSGTL(("verbose:dot11DHCPIpAddressPoolTable:GatewayAddress_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the GatewayAddress data.
 * set (* GatewayAddress_val_ptr ) from rowreq_ctx->data
 */
    (* GatewayAddress_val_ptr ) = rowreq_ctx->data.GatewayAddress;

    return MFD_SUCCESS;
} /* GatewayAddress_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11DHCPIpAddressPoolEntry.IPAddLeasePeriod
 * IPAddLeasePeriod is subid 5 of dot11DHCPIpAddressPoolEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.31656.6.1.2.6.4.1.5
 * Description:
IP Address Lease Periods.
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
 * default-node-IPAddLeasePeriod.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
IPAddLeasePeriod_map(long *mib_IPAddLeasePeriod_val_ptr, long raw_IPAddLeasePeriod_val)
{
    netsnmp_assert(NULL != mib_IPAddLeasePeriod_val_ptr);
    
    DEBUGMSGTL(("verbose:dot11DHCPIpAddressPoolTable:IPAddLeasePeriod_map","called\n"));
    
    /*
     * TODO:241:o: |-> Implement IPAddLeasePeriod mapping.
     * If the values for your data type don't exactly match the
     * possible values defined by the mib, you should map them here.
     */
    (*mib_IPAddLeasePeriod_val_ptr) = raw_IPAddLeasePeriod_val;

    return MFD_SUCCESS;
} /* IPAddLeasePeriod_map */

/**
 * Extract the current value of the IPAddLeasePeriod data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param IPAddLeasePeriod_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
IPAddLeasePeriod_get( dot11DHCPIpAddressPoolTable_rowreq_ctx *rowreq_ctx, long * IPAddLeasePeriod_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != IPAddLeasePeriod_val_ptr );


    DEBUGMSGTL(("verbose:dot11DHCPIpAddressPoolTable:IPAddLeasePeriod_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the IPAddLeasePeriod data.
 * set (* IPAddLeasePeriod_val_ptr ) from rowreq_ctx->data
 */
    (* IPAddLeasePeriod_val_ptr ) = rowreq_ctx->data.IPAddLeasePeriod;

    return MFD_SUCCESS;
} /* IPAddLeasePeriod_get */



/** @} */