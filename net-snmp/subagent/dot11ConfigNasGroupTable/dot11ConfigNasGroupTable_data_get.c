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
#include "dot11ConfigNasGroupTable.h"


/** @defgroup data_get data_get: Routines to get data
 *
 * TODO:230:M: Implement dot11ConfigNasGroupTable get routines.
 * TODO:240:M: Implement dot11ConfigNasGroupTable mapping routines (if any).
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
 *** Table dot11ConfigNasGroupTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * DOT11-AC-MIB::dot11ConfigNasGroupTable is subid 1 of dot11ConfigNasGroup.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.2.21.1, length: 12
*/

/* ---------------------------------------------------------------------
 * TODO:200:r: Implement dot11ConfigNasGroupTable data context functions.
 */


/**
 * set mib index(es)
 *
 * @param tbl_idx mib index structure
 * @param NasID_val
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
dot11ConfigNasGroupTable_indexes_set_tbl_idx(dot11ConfigNasGroupTable_mib_index *tbl_idx, long NasID_val)
{
    DEBUGMSGTL(("verbose:dot11ConfigNasGroupTable:dot11ConfigNasGroupTable_indexes_set_tbl_idx","called\n"));

    /* NasID(1)/INTEGER/ASN_INTEGER/long(long)//l/A/W/e/r/d/h */
    tbl_idx->NasID = NasID_val;
    

    return MFD_SUCCESS;
} /* dot11ConfigNasGroupTable_indexes_set_tbl_idx */

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
dot11ConfigNasGroupTable_indexes_set(dot11ConfigNasGroupTable_rowreq_ctx *rowreq_ctx, long NasID_val)
{
    DEBUGMSGTL(("verbose:dot11ConfigNasGroupTable:dot11ConfigNasGroupTable_indexes_set","called\n"));

    if(MFD_SUCCESS != dot11ConfigNasGroupTable_indexes_set_tbl_idx(&rowreq_ctx->tbl_idx
                                   , NasID_val
           ))
        return MFD_ERROR;

    /*
     * convert mib index to oid index
     */
    rowreq_ctx->oid_idx.len = sizeof(rowreq_ctx->oid_tmp) / sizeof(oid);
    if(0 != dot11ConfigNasGroupTable_index_to_oid(&rowreq_ctx->oid_idx,
                                    &rowreq_ctx->tbl_idx)) {
        return MFD_ERROR;
    }

    return MFD_SUCCESS;
} /* dot11ConfigNasGroupTable_indexes_set */


/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11ConfigNasGroupEntry.NasName
 * NasName is subid 2 of dot11ConfigNasGroupEntry.
 * Its status is Current, and its access level is Create.
 * OID: .1.3.6.1.4.1.31656.6.1.2.21.1.1.2
 * Description:
NasID   name.
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
 * Extract the current value of the NasName data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param NasName_val_ptr_ptr
 *        Pointer to storage for a char variable
 * @param NasName_val_ptr_len_ptr
 *        Pointer to a size_t. On entry, it will contain the size (in bytes)
 *        pointed to by NasName.
 *        On exit, this value should contain the data size (in bytes).
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
*
 * @note If you need more than (*NasName_val_ptr_len_ptr) bytes of memory,
 *       allocate it using malloc() and update NasName_val_ptr_ptr.
 *       <b>DO NOT</b> free the previous pointer.
 *       The MFD helper will release the memory you allocate.
 *
 * @remark If you call this function yourself, you are responsible
 *         for checking if the pointer changed, and freeing any
 *         previously allocated memory. (Not necessary if you pass
 *         in a pointer to static memory, obviously.)
 */
int
NasName_get( dot11ConfigNasGroupTable_rowreq_ctx *rowreq_ctx, char **NasName_val_ptr_ptr, size_t *NasName_val_ptr_len_ptr )
{
   /** we should have a non-NULL pointer and enough storage */
   netsnmp_assert( (NULL != NasName_val_ptr_ptr) && (NULL != *NasName_val_ptr_ptr));
   netsnmp_assert( NULL != NasName_val_ptr_len_ptr );


    DEBUGMSGTL(("verbose:dot11ConfigNasGroupTable:NasName_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the NasName data.
 * copy (* NasName_val_ptr_ptr ) data and (* NasName_val_ptr_len_ptr ) from rowreq_ctx->data
 */
    /*
     * make sure there is enough space for NasName data
     */
    if ((NULL == (* NasName_val_ptr_ptr )) ||
        ((* NasName_val_ptr_len_ptr ) <
         (rowreq_ctx->data.NasName_len* sizeof(rowreq_ctx->data.NasName[0])))) {
        /*
         * allocate space for NasName data
         */
        (* NasName_val_ptr_ptr ) = malloc(rowreq_ctx->data.NasName_len* sizeof(rowreq_ctx->data.NasName[0]));
        if(NULL == (* NasName_val_ptr_ptr )) {
            snmp_log(LOG_ERR,"could not allocate memory\n");
            return MFD_ERROR;
        }
    }
    (* NasName_val_ptr_len_ptr ) = rowreq_ctx->data.NasName_len* sizeof(rowreq_ctx->data.NasName[0]);
    memcpy( (* NasName_val_ptr_ptr ), rowreq_ctx->data.NasName, rowreq_ctx->data.NasName_len* sizeof(rowreq_ctx->data.NasName[0]) );

    return MFD_SUCCESS;
} /* NasName_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11ConfigNasGroupEntry.NasRowStatus
 * NasRowStatus is subid 3 of dot11ConfigNasGroupEntry.
 * Its status is Current, and its access level is Create.
 * OID: .1.3.6.1.4.1.31656.6.1.2.21.1.1.3
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
 * Extract the current value of the NasRowStatus data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param NasRowStatus_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
NasRowStatus_get( dot11ConfigNasGroupTable_rowreq_ctx *rowreq_ctx, u_long * NasRowStatus_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != NasRowStatus_val_ptr );

    (* NasRowStatus_val_ptr ) = rowreq_ctx->data.NasRowStatus;

    return MFD_SUCCESS;
} /* NasRowStatus_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11ConfigNasGroupEntry.NasKeyType
 * NasKeyType is subid 4 of dot11ConfigNasGroupEntry.
 * Its status is Current, and its access level is Create.
 * OID: .1.3.6.1.4.1.31656.6.1.2.21.1.1.4
 * Description:
NasID KeyType.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  1      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 * Enum range: 5/8. Values:  wlanid(0), vlanid(1), wtpid(2), iprange(3), interface(4)
 *
 * Its syntax is INTEGER (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (u_long)
 */
/**
 * Extract the current value of the NasKeyType data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param NasKeyType_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
NasKeyType_get( dot11ConfigNasGroupTable_rowreq_ctx *rowreq_ctx, u_long * NasKeyType_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != NasKeyType_val_ptr );


    DEBUGMSGTL(("verbose:dot11ConfigNasGroupTable:NasKeyType_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the NasKeyType data.
 * copy (* NasKeyType_val_ptr ) from rowreq_ctx->data
 */
    (* NasKeyType_val_ptr ) = rowreq_ctx->data.NasKeyType;

    return MFD_SUCCESS;
} /* NasKeyType_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11ConfigNasGroupEntry.NasKeyValue
 * NasKeyValue is subid 5 of dot11ConfigNasGroupEntry.
 * Its status is Current, and its access level is Create.
 * OID: .1.3.6.1.4.1.31656.6.1.2.21.1.1.5
 * Description:
NasID KeyValue,key value depends on key type.If key type is iprange(3),
					the form of key value should be A.B.C.D or A1.B1.C1.D1-A2.B2.C3.D2
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
 * Extract the current value of the NasKeyValue data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param NasKeyValue_val_ptr_ptr
 *        Pointer to storage for a char variable
 * @param NasKeyValue_val_ptr_len_ptr
 *        Pointer to a size_t. On entry, it will contain the size (in bytes)
 *        pointed to by NasKeyValue.
 *        On exit, this value should contain the data size (in bytes).
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
*
 * @note If you need more than (*NasKeyValue_val_ptr_len_ptr) bytes of memory,
 *       allocate it using malloc() and update NasKeyValue_val_ptr_ptr.
 *       <b>DO NOT</b> free the previous pointer.
 *       The MFD helper will release the memory you allocate.
 *
 * @remark If you call this function yourself, you are responsible
 *         for checking if the pointer changed, and freeing any
 *         previously allocated memory. (Not necessary if you pass
 *         in a pointer to static memory, obviously.)
 */
int
NasKeyValue_get( dot11ConfigNasGroupTable_rowreq_ctx *rowreq_ctx, char **NasKeyValue_val_ptr_ptr, size_t *NasKeyValue_val_ptr_len_ptr )
{
   /** we should have a non-NULL pointer and enough storage */
   netsnmp_assert( (NULL != NasKeyValue_val_ptr_ptr) && (NULL != *NasKeyValue_val_ptr_ptr));
   netsnmp_assert( NULL != NasKeyValue_val_ptr_len_ptr );


    DEBUGMSGTL(("verbose:dot11ConfigNasGroupTable:NasKeyValue_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the NasKeyValue data.
 * copy (* NasKeyValue_val_ptr_ptr ) data and (* NasKeyValue_val_ptr_len_ptr ) from rowreq_ctx->data
 */
    /*
     * make sure there is enough space for NasKeyValue data
     */
    if ((NULL == (* NasKeyValue_val_ptr_ptr )) ||
        ((* NasKeyValue_val_ptr_len_ptr ) <
         (rowreq_ctx->data.NasKeyValue_len* sizeof(rowreq_ctx->data.NasKeyValue[0])))) {
        /*
         * allocate space for NasKeyValue data
         */
        (* NasKeyValue_val_ptr_ptr ) = malloc(rowreq_ctx->data.NasKeyValue_len* sizeof(rowreq_ctx->data.NasKeyValue[0]));
        if(NULL == (* NasKeyValue_val_ptr_ptr )) {
            snmp_log(LOG_ERR,"could not allocate memory\n");
            return MFD_ERROR;
        }
    }
    (* NasKeyValue_val_ptr_len_ptr ) = rowreq_ctx->data.NasKeyValue_len* sizeof(rowreq_ctx->data.NasKeyValue[0]);
    memcpy( (* NasKeyValue_val_ptr_ptr ), rowreq_ctx->data.NasKeyValue, rowreq_ctx->data.NasKeyValue_len* sizeof(rowreq_ctx->data.NasKeyValue[0]) );

    return MFD_SUCCESS;
} /* NasKeyValue_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11ConfigNasGroupEntry.NasSyntaxisPoint
 * NasSyntaxisPoint is subid 6 of dot11ConfigNasGroupEntry.
 * Its status is Current, and its access level is Create.
 * OID: .1.3.6.1.4.1.31656.6.1.2.21.1.1.6
 * Description:
NasID   Group.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 1      hashint   0
 *   settable   1
 *
 * Ranges:  0 - 99;
 *
 * Its syntax is INTEGER (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (long)
 */
/**
 * Extract the current value of the NasSyntaxisPoint data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param NasSyntaxisPoint_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
NasSyntaxisPoint_get( dot11ConfigNasGroupTable_rowreq_ctx *rowreq_ctx, long * NasSyntaxisPoint_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != NasSyntaxisPoint_val_ptr );


    DEBUGMSGTL(("verbose:dot11ConfigNasGroupTable:NasSyntaxisPoint_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the NasSyntaxisPoint data.
 * copy (* NasSyntaxisPoint_val_ptr ) from rowreq_ctx->data
 */
    (* NasSyntaxisPoint_val_ptr ) = rowreq_ctx->data.NasSyntaxisPoint;

    return MFD_SUCCESS;
} /* NasSyntaxisPoint_get */



/** @} */
