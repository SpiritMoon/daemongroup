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
#include "dot11LegalDeviceTable.h"


/** @defgroup data_get data_get: Routines to get data
 *
 * TODO:230:M: Implement dot11LegalDeviceTable get routines.
 * TODO:240:M: Implement dot11LegalDeviceTable mapping routines (if any).
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
 *** Table dot11LegalDeviceTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * DOT11-AC-MIB::dot11LegalDeviceTable is subid 1 of dot11WhiteBlackList.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.2.8.1, length: 12
*/

/* ---------------------------------------------------------------------
 * TODO:200:r: Implement dot11LegalDeviceTable data context functions.
 */


/**
 * set mib index(es)
 *
 * @param tbl_idx mib index structure
 * @param legalMacID_val
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
dot11LegalDeviceTable_indexes_set_tbl_idx(dot11LegalDeviceTable_mib_index *tbl_idx, long legalMacID_val)
{
    DEBUGMSGTL(("verbose:dot11LegalDeviceTable:dot11LegalDeviceTable_indexes_set_tbl_idx","called\n"));

    /* legalMacID(1)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h */
    tbl_idx->legalMacID = legalMacID_val;
    

    return MFD_SUCCESS;
} /* dot11LegalDeviceTable_indexes_set_tbl_idx */

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
dot11LegalDeviceTable_indexes_set(dot11LegalDeviceTable_rowreq_ctx *rowreq_ctx, long legalMacID_val)
{
    DEBUGMSGTL(("verbose:dot11LegalDeviceTable:dot11LegalDeviceTable_indexes_set","called\n"));

    if(MFD_SUCCESS != dot11LegalDeviceTable_indexes_set_tbl_idx(&rowreq_ctx->tbl_idx
                                   , legalMacID_val
           ))
        return MFD_ERROR;

    /*
     * convert mib index to oid index
     */
    rowreq_ctx->oid_idx.len = sizeof(rowreq_ctx->oid_tmp) / sizeof(oid);
    if(0 != dot11LegalDeviceTable_index_to_oid(&rowreq_ctx->oid_idx,
                                    &rowreq_ctx->tbl_idx)) {
        return MFD_ERROR;
    }

    return MFD_SUCCESS;
} /* dot11LegalDeviceTable_indexes_set */


/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11LegalDeviceEntry.legalMacAddress
 * legalMacAddress is subid 2 of dot11LegalDeviceEntry.
 * Its status is Current, and its access level is Create.
 * OID: .1.3.6.1.4.1.31656.6.1.2.8.1.1.2
 * Description:
Legal MAC address.
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
 * Extract the current value of the legalMacAddress data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param legalMacAddress_val_ptr_ptr
 *        Pointer to storage for a char variable
 * @param legalMacAddress_val_ptr_len_ptr
 *        Pointer to a size_t. On entry, it will contain the size (in bytes)
 *        pointed to by legalMacAddress.
 *        On exit, this value should contain the data size (in bytes).
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
*
 * @note If you need more than (*legalMacAddress_val_ptr_len_ptr) bytes of memory,
 *       allocate it using malloc() and update legalMacAddress_val_ptr_ptr.
 *       <b>DO NOT</b> free the previous pointer.
 *       The MFD helper will release the memory you allocate.
 *
 * @remark If you call this function yourself, you are responsible
 *         for checking if the pointer changed, and freeing any
 *         previously allocated memory. (Not necessary if you pass
 *         in a pointer to static memory, obviously.)
 */
int
legalMacAddress_get( dot11LegalDeviceTable_rowreq_ctx *rowreq_ctx, char **legalMacAddress_val_ptr_ptr, size_t *legalMacAddress_val_ptr_len_ptr )
{
   /** we should have a non-NULL pointer and enough storage */
   netsnmp_assert( (NULL != legalMacAddress_val_ptr_ptr) && (NULL != *legalMacAddress_val_ptr_ptr));
   netsnmp_assert( NULL != legalMacAddress_val_ptr_len_ptr );


    DEBUGMSGTL(("verbose:dot11LegalDeviceTable:legalMacAddress_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the legalMacAddress data.
 * copy (* legalMacAddress_val_ptr_ptr ) data and (* legalMacAddress_val_ptr_len_ptr ) from rowreq_ctx->data
 */
    /*
     * make sure there is enough space for legalMacAddress data
     */
    if ((NULL == (* legalMacAddress_val_ptr_ptr )) ||
        ((* legalMacAddress_val_ptr_len_ptr ) <
         (rowreq_ctx->data.legalMacAddress_len* sizeof(rowreq_ctx->data.legalMacAddress[0])))) {
        /*
         * allocate space for legalMacAddress data
         */
        (* legalMacAddress_val_ptr_ptr ) = malloc(rowreq_ctx->data.legalMacAddress_len* sizeof(rowreq_ctx->data.legalMacAddress[0]));
        if(NULL == (* legalMacAddress_val_ptr_ptr )) {
            snmp_log(LOG_ERR,"could not allocate memory\n");
            return MFD_ERROR;
        }
    }
    (* legalMacAddress_val_ptr_len_ptr ) = rowreq_ctx->data.legalMacAddress_len* sizeof(rowreq_ctx->data.legalMacAddress[0]);
    memcpy( (* legalMacAddress_val_ptr_ptr ), rowreq_ctx->data.legalMacAddress, rowreq_ctx->data.legalMacAddress_len* sizeof(rowreq_ctx->data.legalMacAddress[0]) );

    return MFD_SUCCESS;
} /* legalMacAddress_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11LegalDeviceEntry.legalRowStatus
 * legalRowStatus is subid 3 of dot11LegalDeviceEntry.
 * Its status is Current, and its access level is Create.
 * OID: .1.3.6.1.4.1.31656.6.1.2.8.1.1.3
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
 * Extract the current value of the legalRowStatus data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param legalRowStatus_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
legalRowStatus_get( dot11LegalDeviceTable_rowreq_ctx *rowreq_ctx, u_long * legalRowStatus_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != legalRowStatus_val_ptr );

    (* legalRowStatus_val_ptr ) = rowreq_ctx->data.legalRowStatus;

    return MFD_SUCCESS;
} /* legalRowStatus_get */



/** @} */