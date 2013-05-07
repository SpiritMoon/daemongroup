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
#include "dot11SSIDVlanTable.h"


/** @defgroup data_get data_get: Routines to get data
 *
 * TODO:230:M: Implement dot11SSIDVlanTable get routines.
 * TODO:240:M: Implement dot11SSIDVlanTable mapping routines (if any).
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
 *** Table dot11SSIDVlanTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * DOT11-AC-MIB::dot11SSIDVlanTable is subid 3 of dot11wtpConfig.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.2.12.3, length: 12
*/

/* ---------------------------------------------------------------------
 * TODO:200:r: Implement dot11SSIDVlanTable data context functions.
 */


/**
 * set mib index(es)
 *
 * @param tbl_idx mib index structure
 * @param wtpId_val
 * @param wlanId_val
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
dot11SSIDVlanTable_indexes_set_tbl_idx(dot11SSIDVlanTable_mib_index *tbl_idx, long wtpId_val, long wlanId_val)
{
    DEBUGMSGTL(("verbose:dot11SSIDVlanTable:dot11SSIDVlanTable_indexes_set_tbl_idx","called\n"));

    /* wtpId(1)/INTEGER/ASN_INTEGER/long(long)//l/A/W/e/r/d/h */
    tbl_idx->wtpId = wtpId_val;
    
    /* wlanId(2)/INTEGER/ASN_INTEGER/long(long)//l/A/W/e/r/d/h */
    tbl_idx->wlanId = wlanId_val;
    

    return MFD_SUCCESS;
} /* dot11SSIDVlanTable_indexes_set_tbl_idx */

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
dot11SSIDVlanTable_indexes_set(dot11SSIDVlanTable_rowreq_ctx *rowreq_ctx, long wtpId_val, long wlanId_val)
{
    DEBUGMSGTL(("verbose:dot11SSIDVlanTable:dot11SSIDVlanTable_indexes_set","called\n"));

    if(MFD_SUCCESS != dot11SSIDVlanTable_indexes_set_tbl_idx(&rowreq_ctx->tbl_idx
                                   , wtpId_val
                                   , wlanId_val
           ))
        return MFD_ERROR;

    /*
     * convert mib index to oid index
     */
    rowreq_ctx->oid_idx.len = sizeof(rowreq_ctx->oid_tmp) / sizeof(oid);
    if(0 != dot11SSIDVlanTable_index_to_oid(&rowreq_ctx->oid_idx,
                                    &rowreq_ctx->tbl_idx)) {
        return MFD_ERROR;
    }

    return MFD_SUCCESS;
} /* dot11SSIDVlanTable_indexes_set */


/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11SSIDVlanEntry.VlanId
 * VlanId is subid 3 of dot11SSIDVlanEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.31656.6.1.2.12.3.1.3
 * Description:
Set Vlan Id.
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
 * Extract the current value of the VlanId data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param VlanId_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
VlanId_get( dot11SSIDVlanTable_rowreq_ctx *rowreq_ctx, long * VlanId_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != VlanId_val_ptr );


    DEBUGMSGTL(("verbose:dot11SSIDVlanTable:VlanId_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the VlanId data.
 * copy (* VlanId_val_ptr ) from rowreq_ctx->data
 */
    (* VlanId_val_ptr ) = rowreq_ctx->data.VlanId;

    return MFD_SUCCESS;
} /* VlanId_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11SSIDVlanEntry.VlanRowStatus
 * VlanRowStatus is subid 4 of dot11SSIDVlanEntry.
 * Its status is Current, and its access level is Create.
 * OID: .1.3.6.1.4.1.31656.6.1.2.12.3.1.4
 * Description:
This variable is used to create, modify, and/or delete a row
		        	 in this table.
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
 * Extract the current value of the VlanRowStatus data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param VlanRowStatus_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
VlanRowStatus_get( dot11SSIDVlanTable_rowreq_ctx *rowreq_ctx, u_long * VlanRowStatus_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != VlanRowStatus_val_ptr );

    (* VlanRowStatus_val_ptr ) = rowreq_ctx->data.VlanRowStatus;

    return MFD_SUCCESS;
} /* VlanRowStatus_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11SSIDVlanEntry.wtpMacAddress
 * wtpMacAddress is subid 5 of dot11SSIDVlanEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.2.12.3.1.5
 * Description:
wtpMacAddress.
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
 * Extract the current value of the wtpMacAddress data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param wtpMacAddress_val_ptr_ptr
 *        Pointer to storage for a char variable
 * @param wtpMacAddress_val_ptr_len_ptr
 *        Pointer to a size_t. On entry, it will contain the size (in bytes)
 *        pointed to by wtpMacAddress.
 *        On exit, this value should contain the data size (in bytes).
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
*
 * @note If you need more than (*wtpMacAddress_val_ptr_len_ptr) bytes of memory,
 *       allocate it using malloc() and update wtpMacAddress_val_ptr_ptr.
 *       <b>DO NOT</b> free the previous pointer.
 *       The MFD helper will release the memory you allocate.
 *
 * @remark If you call this function yourself, you are responsible
 *         for checking if the pointer changed, and freeing any
 *         previously allocated memory. (Not necessary if you pass
 *         in a pointer to static memory, obviously.)
 */
int
wtpMacAddress_get( dot11SSIDVlanTable_rowreq_ctx *rowreq_ctx, char **wtpMacAddress_val_ptr_ptr, size_t *wtpMacAddress_val_ptr_len_ptr )
{
   /** we should have a non-NULL pointer and enough storage */
   netsnmp_assert( (NULL != wtpMacAddress_val_ptr_ptr) && (NULL != *wtpMacAddress_val_ptr_ptr));
   netsnmp_assert( NULL != wtpMacAddress_val_ptr_len_ptr );


    DEBUGMSGTL(("verbose:dot11SSIDVlanTable:wtpMacAddress_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the wtpMacAddress data.
 * copy (* wtpMacAddress_val_ptr_ptr ) data and (* wtpMacAddress_val_ptr_len_ptr ) from rowreq_ctx->data
 */
    /*
     * make sure there is enough space for wtpMacAddress data
     */
    if ((NULL == (* wtpMacAddress_val_ptr_ptr )) ||
        ((* wtpMacAddress_val_ptr_len_ptr ) <
         (rowreq_ctx->data.wtpMacAddress_len* sizeof(rowreq_ctx->data.wtpMacAddress[0])))) {
        /*
         * allocate space for wtpMacAddress data
         */
        (* wtpMacAddress_val_ptr_ptr ) = malloc(rowreq_ctx->data.wtpMacAddress_len* sizeof(rowreq_ctx->data.wtpMacAddress[0]));
        if(NULL == (* wtpMacAddress_val_ptr_ptr )) {
            snmp_log(LOG_ERR,"could not allocate memory\n");
            return MFD_ERROR;
        }
    }
    (* wtpMacAddress_val_ptr_len_ptr ) = rowreq_ctx->data.wtpMacAddress_len* sizeof(rowreq_ctx->data.wtpMacAddress[0]);
    memcpy( (* wtpMacAddress_val_ptr_ptr ), rowreq_ctx->data.wtpMacAddress, rowreq_ctx->data.wtpMacAddress_len* sizeof(rowreq_ctx->data.wtpMacAddress[0]) );

    return MFD_SUCCESS;
} /* wtpMacAddress_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11SSIDVlanEntry.wlanSSID
 * wlanSSID is subid 6 of dot11SSIDVlanEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.2.12.3.1.6
 * Description:
wlanSSID.
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
 * Extract the current value of the wlanSSID data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param wlanSSID_val_ptr_ptr
 *        Pointer to storage for a char variable
 * @param wlanSSID_val_ptr_len_ptr
 *        Pointer to a size_t. On entry, it will contain the size (in bytes)
 *        pointed to by wlanSSID.
 *        On exit, this value should contain the data size (in bytes).
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
*
 * @note If you need more than (*wlanSSID_val_ptr_len_ptr) bytes of memory,
 *       allocate it using malloc() and update wlanSSID_val_ptr_ptr.
 *       <b>DO NOT</b> free the previous pointer.
 *       The MFD helper will release the memory you allocate.
 *
 * @remark If you call this function yourself, you are responsible
 *         for checking if the pointer changed, and freeing any
 *         previously allocated memory. (Not necessary if you pass
 *         in a pointer to static memory, obviously.)
 */
int
wlanSSID_get( dot11SSIDVlanTable_rowreq_ctx *rowreq_ctx, char **wlanSSID_val_ptr_ptr, size_t *wlanSSID_val_ptr_len_ptr )
{
   /** we should have a non-NULL pointer and enough storage */
   netsnmp_assert( (NULL != wlanSSID_val_ptr_ptr) && (NULL != *wlanSSID_val_ptr_ptr));
   netsnmp_assert( NULL != wlanSSID_val_ptr_len_ptr );


    DEBUGMSGTL(("verbose:dot11SSIDVlanTable:wlanSSID_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the wlanSSID data.
 * copy (* wlanSSID_val_ptr_ptr ) data and (* wlanSSID_val_ptr_len_ptr ) from rowreq_ctx->data
 */
    /*
     * make sure there is enough space for wlanSSID data
     */
    if ((NULL == (* wlanSSID_val_ptr_ptr )) ||
        ((* wlanSSID_val_ptr_len_ptr ) <
         (rowreq_ctx->data.wlanSSID_len* sizeof(rowreq_ctx->data.wlanSSID[0])))) {
        /*
         * allocate space for wlanSSID data
         */
        (* wlanSSID_val_ptr_ptr ) = malloc(rowreq_ctx->data.wlanSSID_len* sizeof(rowreq_ctx->data.wlanSSID[0]));
        if(NULL == (* wlanSSID_val_ptr_ptr )) {
            snmp_log(LOG_ERR,"could not allocate memory\n");
            return MFD_ERROR;
        }
    }
    (* wlanSSID_val_ptr_len_ptr ) = rowreq_ctx->data.wlanSSID_len* sizeof(rowreq_ctx->data.wlanSSID[0]);
    memcpy( (* wlanSSID_val_ptr_ptr ), rowreq_ctx->data.wlanSSID, rowreq_ctx->data.wlanSSID_len* sizeof(rowreq_ctx->data.wlanSSID[0]) );

    return MFD_SUCCESS;
} /* wlanSSID_get */



/** @} */