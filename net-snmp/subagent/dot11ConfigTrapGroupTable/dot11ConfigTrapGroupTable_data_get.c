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
#include "dot11ConfigTrapGroupTable.h"


/** @defgroup data_get data_get: Routines to get data
 *
 * TODO:230:M: Implement dot11ConfigTrapGroupTable get routines.
 * TODO:240:M: Implement dot11ConfigTrapGroupTable mapping routines (if any).
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
 *** Table dot11ConfigTrapGroupTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * DOT11-AC-MIB::dot11ConfigTrapGroupTable is subid 1 of dot11ConfigTrapGroup.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.2.19.1, length: 12
*/

/* ---------------------------------------------------------------------
 * TODO:200:r: Implement dot11ConfigTrapGroupTable data context functions.
 */


/**
 * set mib index(es)
 *
 * @param tbl_idx mib index structure
 * @param TrapID_val
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
dot11ConfigTrapGroupTable_indexes_set_tbl_idx(dot11ConfigTrapGroupTable_mib_index *tbl_idx, long TrapID_val)
{
    DEBUGMSGTL(("verbose:dot11ConfigTrapGroupTable:dot11ConfigTrapGroupTable_indexes_set_tbl_idx","called\n"));

    /* TrapID(1)/INTEGER/ASN_INTEGER/long(long)//l/A/W/e/r/d/h */
    tbl_idx->TrapID = TrapID_val;
    

    return MFD_SUCCESS;
} /* dot11ConfigTrapGroupTable_indexes_set_tbl_idx */

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
dot11ConfigTrapGroupTable_indexes_set(dot11ConfigTrapGroupTable_rowreq_ctx *rowreq_ctx, long TrapID_val)
{
    DEBUGMSGTL(("verbose:dot11ConfigTrapGroupTable:dot11ConfigTrapGroupTable_indexes_set","called\n"));

    if(MFD_SUCCESS != dot11ConfigTrapGroupTable_indexes_set_tbl_idx(&rowreq_ctx->tbl_idx
                                   , TrapID_val
           ))
        return MFD_ERROR;

    /*
     * convert mib index to oid index
     */
    rowreq_ctx->oid_idx.len = sizeof(rowreq_ctx->oid_tmp) / sizeof(oid);
    if(0 != dot11ConfigTrapGroupTable_index_to_oid(&rowreq_ctx->oid_idx,
                                    &rowreq_ctx->tbl_idx)) {
        return MFD_ERROR;
    }

    return MFD_SUCCESS;
} /* dot11ConfigTrapGroupTable_indexes_set */


/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11ConfigTrapGroupEntry.TrapName
 * TrapName is subid 2 of dot11ConfigTrapGroupEntry.
 * Its status is Current, and its access level is Create.
 * OID: .1.3.6.1.4.1.31656.6.1.2.19.1.1.2
 * Description:
Trap Name,the lenth of trap name should be 1 to 30,
					trap name should be ASCII value in the Non-control characters (Spaces except).
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 1      hashint   1
 *   settable   1
 *   hint: 255a
 *
 * Ranges:  1 - 30;
 *
 * Its syntax is DisplayString (based on perltype OCTETSTR)
 * The net-snmp type is ASN_OCTET_STR. The C type decl is char (char)
 * This data type requires a length.  (Max 30)
 */
/**
 * Extract the current value of the TrapName data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param TrapName_val_ptr_ptr
 *        Pointer to storage for a char variable
 * @param TrapName_val_ptr_len_ptr
 *        Pointer to a size_t. On entry, it will contain the size (in bytes)
 *        pointed to by TrapName.
 *        On exit, this value should contain the data size (in bytes).
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
*
 * @note If you need more than (*TrapName_val_ptr_len_ptr) bytes of memory,
 *       allocate it using malloc() and update TrapName_val_ptr_ptr.
 *       <b>DO NOT</b> free the previous pointer.
 *       The MFD helper will release the memory you allocate.
 *
 * @remark If you call this function yourself, you are responsible
 *         for checking if the pointer changed, and freeing any
 *         previously allocated memory. (Not necessary if you pass
 *         in a pointer to static memory, obviously.)
 */
int
TrapName_get( dot11ConfigTrapGroupTable_rowreq_ctx *rowreq_ctx, char **TrapName_val_ptr_ptr, size_t *TrapName_val_ptr_len_ptr )
{
   /** we should have a non-NULL pointer and enough storage */
   netsnmp_assert( (NULL != TrapName_val_ptr_ptr) && (NULL != *TrapName_val_ptr_ptr));
   netsnmp_assert( NULL != TrapName_val_ptr_len_ptr );


    DEBUGMSGTL(("verbose:dot11ConfigTrapGroupTable:TrapName_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the TrapName data.
 * copy (* TrapName_val_ptr_ptr ) data and (* TrapName_val_ptr_len_ptr ) from rowreq_ctx->data
 */
    /*
     * make sure there is enough space for TrapName data
     */
    if ((NULL == (* TrapName_val_ptr_ptr )) ||
        ((* TrapName_val_ptr_len_ptr ) <
         (rowreq_ctx->data.TrapName_len* sizeof(rowreq_ctx->data.TrapName[0])))) {
        /*
         * allocate space for TrapName data
         */
        (* TrapName_val_ptr_ptr ) = malloc(rowreq_ctx->data.TrapName_len* sizeof(rowreq_ctx->data.TrapName[0]));
        if(NULL == (* TrapName_val_ptr_ptr )) {
            snmp_log(LOG_ERR,"could not allocate memory\n");
            return MFD_ERROR;
        }
    }
    (* TrapName_val_ptr_len_ptr ) = rowreq_ctx->data.TrapName_len* sizeof(rowreq_ctx->data.TrapName[0]);
    memcpy( (* TrapName_val_ptr_ptr ), rowreq_ctx->data.TrapName, rowreq_ctx->data.TrapName_len* sizeof(rowreq_ctx->data.TrapName[0]) );

    return MFD_SUCCESS;
} /* TrapName_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11ConfigTrapGroupEntry.TrapVersion
 * TrapVersion is subid 3 of dot11ConfigTrapGroupEntry.
 * Its status is Current, and its access level is Create.
 * OID: .1.3.6.1.4.1.31656.6.1.2.19.1.1.3
 * Description:
Trap Version.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  1      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 * Enum range: 2/8. Values:  v1(1), v2c(2), v3(3)
 *
 * Its syntax is INTEGER (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (u_long)
 */
/**
 * Extract the current value of the TrapVersion data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param TrapVersion_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
TrapVersion_get( dot11ConfigTrapGroupTable_rowreq_ctx *rowreq_ctx, u_long * TrapVersion_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != TrapVersion_val_ptr );


    DEBUGMSGTL(("verbose:dot11ConfigTrapGroupTable:TrapVersion_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the TrapVersion data.
 * copy (* TrapVersion_val_ptr ) from rowreq_ctx->data
 */
    (* TrapVersion_val_ptr ) = rowreq_ctx->data.TrapVersion;

    return MFD_SUCCESS;
} /* TrapVersion_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11ConfigTrapGroupEntry.TrapSourIPAddress
 * TrapSourIPAddress is subid 4 of dot11ConfigTrapGroupEntry.
 * Its status is Current, and its access level is Create.
 * OID: .1.3.6.1.4.1.31656.6.1.2.19.1.1.4
 * Description:
Trap Source IP Address,optional.
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
 * Extract the current value of the TrapSourIPAddress data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param TrapSourIPAddress_val_ptr
 *        Pointer to storage for a u_long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
TrapSourIPAddress_get( dot11ConfigTrapGroupTable_rowreq_ctx *rowreq_ctx, u_long * TrapSourIPAddress_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != TrapSourIPAddress_val_ptr );


    DEBUGMSGTL(("verbose:dot11ConfigTrapGroupTable:TrapSourIPAddress_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the TrapSourIPAddress data.
 * copy (* TrapSourIPAddress_val_ptr ) from rowreq_ctx->data
 */
    (* TrapSourIPAddress_val_ptr ) = rowreq_ctx->data.TrapSourIPAddress;

    return MFD_SUCCESS;
} /* TrapSourIPAddress_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11ConfigTrapGroupEntry.TrapDestIPAddress
 * TrapDestIPAddress is subid 5 of dot11ConfigTrapGroupEntry.
 * Its status is Current, and its access level is Create.
 * OID: .1.3.6.1.4.1.31656.6.1.2.19.1.1.5
 * Description:
Trap Destination IP Address.
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
 * Extract the current value of the TrapDestIPAddress data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param TrapDestIPAddress_val_ptr
 *        Pointer to storage for a u_long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
TrapDestIPAddress_get( dot11ConfigTrapGroupTable_rowreq_ctx *rowreq_ctx, u_long * TrapDestIPAddress_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != TrapDestIPAddress_val_ptr );


    DEBUGMSGTL(("verbose:dot11ConfigTrapGroupTable:TrapDestIPAddress_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the TrapDestIPAddress data.
 * copy (* TrapDestIPAddress_val_ptr ) from rowreq_ctx->data
 */
    (* TrapDestIPAddress_val_ptr ) = rowreq_ctx->data.TrapDestIPAddress;

    return MFD_SUCCESS;
} /* TrapDestIPAddress_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11ConfigTrapGroupEntry.TrapCommunity
 * TrapCommunity is subid 6 of dot11ConfigTrapGroupEntry.
 * Its status is Current, and its access level is Create.
 * OID: .1.3.6.1.4.1.31656.6.1.2.19.1.1.6
 * Description:
Trap Name,The lenth of community name should be 1 to 20,
					community name should be ASCII value in the Non-control characters (Spaces except),
					and it's can't begin with #,double quotes,single quotes,
					\ only appeared in end
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 1      hashint   1
 *   settable   1
 *   hint: 255a
 *
 * Ranges:  1 - 20;
 *
 * Its syntax is DisplayString (based on perltype OCTETSTR)
 * The net-snmp type is ASN_OCTET_STR. The C type decl is char (char)
 * This data type requires a length.  (Max 20)
 */
/**
 * Extract the current value of the TrapCommunity data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param TrapCommunity_val_ptr_ptr
 *        Pointer to storage for a char variable
 * @param TrapCommunity_val_ptr_len_ptr
 *        Pointer to a size_t. On entry, it will contain the size (in bytes)
 *        pointed to by TrapCommunity.
 *        On exit, this value should contain the data size (in bytes).
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
*
 * @note If you need more than (*TrapCommunity_val_ptr_len_ptr) bytes of memory,
 *       allocate it using malloc() and update TrapCommunity_val_ptr_ptr.
 *       <b>DO NOT</b> free the previous pointer.
 *       The MFD helper will release the memory you allocate.
 *
 * @remark If you call this function yourself, you are responsible
 *         for checking if the pointer changed, and freeing any
 *         previously allocated memory. (Not necessary if you pass
 *         in a pointer to static memory, obviously.)
 */
int
TrapCommunity_get( dot11ConfigTrapGroupTable_rowreq_ctx *rowreq_ctx, char **TrapCommunity_val_ptr_ptr, size_t *TrapCommunity_val_ptr_len_ptr )
{
   /** we should have a non-NULL pointer and enough storage */
   netsnmp_assert( (NULL != TrapCommunity_val_ptr_ptr) && (NULL != *TrapCommunity_val_ptr_ptr));
   netsnmp_assert( NULL != TrapCommunity_val_ptr_len_ptr );


    DEBUGMSGTL(("verbose:dot11ConfigTrapGroupTable:TrapCommunity_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the TrapCommunity data.
 * copy (* TrapCommunity_val_ptr_ptr ) data and (* TrapCommunity_val_ptr_len_ptr ) from rowreq_ctx->data
 */
    /*
     * make sure there is enough space for TrapCommunity data
     */
    if ((NULL == (* TrapCommunity_val_ptr_ptr )) ||
        ((* TrapCommunity_val_ptr_len_ptr ) <
         (rowreq_ctx->data.TrapCommunity_len* sizeof(rowreq_ctx->data.TrapCommunity[0])))) {
        /*
         * allocate space for TrapCommunity data
         */
        (* TrapCommunity_val_ptr_ptr ) = malloc(rowreq_ctx->data.TrapCommunity_len* sizeof(rowreq_ctx->data.TrapCommunity[0]));
        if(NULL == (* TrapCommunity_val_ptr_ptr )) {
            snmp_log(LOG_ERR,"could not allocate memory\n");
            return MFD_ERROR;
        }
    }
    (* TrapCommunity_val_ptr_len_ptr ) = rowreq_ctx->data.TrapCommunity_len* sizeof(rowreq_ctx->data.TrapCommunity[0]);
    memcpy( (* TrapCommunity_val_ptr_ptr ), rowreq_ctx->data.TrapCommunity, rowreq_ctx->data.TrapCommunity_len* sizeof(rowreq_ctx->data.TrapCommunity[0]) );

    return MFD_SUCCESS;
} /* TrapCommunity_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11ConfigTrapGroupEntry.TrapState
 * TrapState is subid 7 of dot11ConfigTrapGroupEntry.
 * Its status is Current, and its access level is Create.
 * OID: .1.3.6.1.4.1.31656.6.1.2.19.1.1.7
 * Description:
Trap State.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  1      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 * Enum range: 2/8. Values:  disable(0), enable(1)
 *
 * Its syntax is INTEGER (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (u_long)
 */
/**
 * Extract the current value of the TrapState data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param TrapState_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
TrapState_get( dot11ConfigTrapGroupTable_rowreq_ctx *rowreq_ctx, u_long * TrapState_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != TrapState_val_ptr );


    DEBUGMSGTL(("verbose:dot11ConfigTrapGroupTable:TrapState_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the TrapState data.
 * copy (* TrapState_val_ptr ) from rowreq_ctx->data
 */
    (* TrapState_val_ptr ) = rowreq_ctx->data.TrapState;

    return MFD_SUCCESS;
} /* TrapState_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11ConfigTrapGroupEntry.TrapDestPort
 * TrapDestPort is subid 8 of dot11ConfigTrapGroupEntry.
 * Its status is Current, and its access level is Create.
 * OID: .1.3.6.1.4.1.31656.6.1.2.19.1.1.8
 * Description:
Trap Destination Port,optional,default is 162.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 1      hashint   0
 *   settable   1
 *
 * Ranges:  1 - 65535;
 *
 * Its syntax is INTEGER (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (long)
 */
/**
 * Extract the current value of the TrapDestPort data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param TrapDestPort_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
TrapDestPort_get( dot11ConfigTrapGroupTable_rowreq_ctx *rowreq_ctx, long * TrapDestPort_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != TrapDestPort_val_ptr );


    DEBUGMSGTL(("verbose:dot11ConfigTrapGroupTable:TrapDestPort_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the TrapDestPort data.
 * copy (* TrapDestPort_val_ptr ) from rowreq_ctx->data
 */
    (* TrapDestPort_val_ptr ) = rowreq_ctx->data.TrapDestPort;

    return MFD_SUCCESS;
} /* TrapDestPort_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11ConfigTrapGroupEntry.TrapRowStatus
 * TrapRowStatus is subid 9 of dot11ConfigTrapGroupEntry.
 * Its status is Current, and its access level is Create.
 * OID: .1.3.6.1.4.1.31656.6.1.2.19.1.1.9
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
 * Extract the current value of the TrapRowStatus data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param TrapRowStatus_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
TrapRowStatus_get( dot11ConfigTrapGroupTable_rowreq_ctx *rowreq_ctx, u_long * TrapRowStatus_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != TrapRowStatus_val_ptr );

    (* TrapRowStatus_val_ptr ) = rowreq_ctx->data.TrapRowStatus;

    return MFD_SUCCESS;
} /* TrapRowStatus_get */



/** @} */