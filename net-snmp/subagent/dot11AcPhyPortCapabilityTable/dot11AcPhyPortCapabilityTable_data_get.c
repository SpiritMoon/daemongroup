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
#include "dot11AcPhyPortCapabilityTable.h"


/** @defgroup data_get data_get: Routines to get data
 *
 * TODO:230:M: Implement dot11AcPhyPortCapabilityTable get routines.
 * TODO:240:M: Implement dot11AcPhyPortCapabilityTable mapping routines (if any).
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
 *** Table dot11AcPhyPortCapabilityTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * DOT11-AC-MIB::dot11AcPhyPortCapabilityTable is subid 7 of dot11AcInterface.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.2.4.7, length: 12
*/

/* ---------------------------------------------------------------------
 * TODO:200:r: Implement dot11AcPhyPortCapabilityTable data context functions.
 */


/**
 * set mib index(es)
 *
 * @param tbl_idx mib index structure
 * @param PhyPortIndex_val
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
dot11AcPhyPortCapabilityTable_indexes_set_tbl_idx(dot11AcPhyPortCapabilityTable_mib_index *tbl_idx, long PhyPortIndex_val)
{
    DEBUGMSGTL(("verbose:dot11AcPhyPortCapabilityTable:dot11AcPhyPortCapabilityTable_indexes_set_tbl_idx","called\n"));

    /* PhyPortIndex(1)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h */
    tbl_idx->PhyPortIndex = PhyPortIndex_val;
    

    return MFD_SUCCESS;
} /* dot11AcPhyPortCapabilityTable_indexes_set_tbl_idx */

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
dot11AcPhyPortCapabilityTable_indexes_set(dot11AcPhyPortCapabilityTable_rowreq_ctx *rowreq_ctx, long PhyPortIndex_val)
{
    DEBUGMSGTL(("verbose:dot11AcPhyPortCapabilityTable:dot11AcPhyPortCapabilityTable_indexes_set","called\n"));

    if(MFD_SUCCESS != dot11AcPhyPortCapabilityTable_indexes_set_tbl_idx(&rowreq_ctx->tbl_idx
                                   , PhyPortIndex_val
           ))
        return MFD_ERROR;

    /*
     * convert mib index to oid index
     */
    rowreq_ctx->oid_idx.len = sizeof(rowreq_ctx->oid_tmp) / sizeof(oid);
    if(0 != dot11AcPhyPortCapabilityTable_index_to_oid(&rowreq_ctx->oid_idx,
                                    &rowreq_ctx->tbl_idx)) {
        return MFD_ERROR;
    }

    return MFD_SUCCESS;
} /* dot11AcPhyPortCapabilityTable_indexes_set */


/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11AcPhyPortCapabilityEntry.acPhyPortInUcastPkts
 * acPhyPortInUcastPkts is subid 1 of dot11AcPhyPortCapabilityEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.2.4.7.1.1
 * Description:
The total number of unicast packets the physical port received.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is COUNTER64 (based on perltype COUNTER64)
 * The net-snmp type is ASN_COUNTER64. The C type decl is U64 (U64)
 */
/**
 * Extract the current value of the acPhyPortInUcastPkts data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param acPhyPortInUcastPkts_val_ptr
 *        Pointer to storage for a U64 variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
acPhyPortInUcastPkts_get( dot11AcPhyPortCapabilityTable_rowreq_ctx *rowreq_ctx, unsigned long long * acPhyPortInUcastPkts_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != acPhyPortInUcastPkts_val_ptr );

/*
 * TODO:231:o: |-> copy acPhyPortInUcastPkts data.
 * get (* acPhyPortInUcastPkts_val_ptr ).low and (* acPhyPortInUcastPkts_val_ptr ).high from rowreq_ctx->data
 */
    (* acPhyPortInUcastPkts_val_ptr ) = rowreq_ctx->data.acPhyPortInUcastPkts;
    //(* acPhyPortInUcastPkts_val_ptr ).low = rowreq_ctx->data.acPhyPortInUcastPkts.low;


    return MFD_SUCCESS;
} /* acPhyPortInUcastPkts_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11AcPhyPortCapabilityEntry.acPhyPortInNUcastPkts
 * acPhyPortInNUcastPkts is subid 2 of dot11AcPhyPortCapabilityEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.2.4.7.1.2
 * Description:
The total number of non-unicast packets the physical port received.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is COUNTER64 (based on perltype COUNTER64)
 * The net-snmp type is ASN_COUNTER64. The C type decl is U64 (U64)
 */
/**
 * Extract the current value of the acPhyPortInNUcastPkts data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param acPhyPortInNUcastPkts_val_ptr
 *        Pointer to storage for a U64 variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
acPhyPortInNUcastPkts_get( dot11AcPhyPortCapabilityTable_rowreq_ctx *rowreq_ctx, unsigned long long * acPhyPortInNUcastPkts_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != acPhyPortInNUcastPkts_val_ptr );

/*
 * TODO:231:o: |-> copy acPhyPortInNUcastPkts data.
 * get (* acPhyPortInNUcastPkts_val_ptr ).low and (* acPhyPortInNUcastPkts_val_ptr ).high from rowreq_ctx->data
 */
    (* acPhyPortInNUcastPkts_val_ptr ) = rowreq_ctx->data.acPhyPortInNUcastPkts;
    //(* acPhyPortInNUcastPkts_val_ptr ).low = rowreq_ctx->data.acPhyPortInNUcastPkts.low;


    return MFD_SUCCESS;
} /* acPhyPortInNUcastPkts_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11AcPhyPortCapabilityEntry.acPhyPortInOctets
 * acPhyPortInOctets is subid 3 of dot11AcPhyPortCapabilityEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.2.4.7.1.3
 * Description:
The total number of bytes the physical port received.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is COUNTER64 (based on perltype COUNTER64)
 * The net-snmp type is ASN_COUNTER64. The C type decl is U64 (U64)
 */
/**
 * Extract the current value of the acPhyPortInOctets data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param acPhyPortInOctets_val_ptr
 *        Pointer to storage for a U64 variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
acPhyPortInOctets_get( dot11AcPhyPortCapabilityTable_rowreq_ctx *rowreq_ctx, unsigned long long * acPhyPortInOctets_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != acPhyPortInOctets_val_ptr );

/*
 * TODO:231:o: |-> copy acPhyPortInOctets data.
 * get (* acPhyPortInOctets_val_ptr ).low and (* acPhyPortInOctets_val_ptr ).high from rowreq_ctx->data
 */
    (* acPhyPortInOctets_val_ptr ) = rowreq_ctx->data.acPhyPortInOctets;
    //(* acPhyPortInOctets_val_ptr ).low = rowreq_ctx->data.acPhyPortInOctets.low;


    return MFD_SUCCESS;
} /* acPhyPortInOctets_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11AcPhyPortCapabilityEntry.acPhyPortInDiscardPkts
 * acPhyPortInDiscardPkts is subid 4 of dot11AcPhyPortCapabilityEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.2.4.7.1.4
 * Description:
The total number of packets the physical port received and discarded.
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
 * Extract the current value of the acPhyPortInDiscardPkts data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param acPhyPortInDiscardPkts_val_ptr
 *        Pointer to storage for a u_long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
acPhyPortInDiscardPkts_get( dot11AcPhyPortCapabilityTable_rowreq_ctx *rowreq_ctx, u_long * acPhyPortInDiscardPkts_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != acPhyPortInDiscardPkts_val_ptr );


    DEBUGMSGTL(("verbose:dot11AcPhyPortCapabilityTable:acPhyPortInDiscardPkts_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the acPhyPortInDiscardPkts data.
 * copy (* acPhyPortInDiscardPkts_val_ptr ) from rowreq_ctx->data
 */
    (* acPhyPortInDiscardPkts_val_ptr ) = rowreq_ctx->data.acPhyPortInDiscardPkts;

    return MFD_SUCCESS;
} /* acPhyPortInDiscardPkts_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11AcPhyPortCapabilityEntry.acPhyPortInErrors
 * acPhyPortInErrors is subid 5 of dot11AcPhyPortCapabilityEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.2.4.7.1.5
 * Description:
The total number of error packets the physical port received.
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
 * Extract the current value of the acPhyPortInErrors data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param acPhyPortInErrors_val_ptr
 *        Pointer to storage for a u_long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
acPhyPortInErrors_get( dot11AcPhyPortCapabilityTable_rowreq_ctx *rowreq_ctx, u_long * acPhyPortInErrors_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != acPhyPortInErrors_val_ptr );


    DEBUGMSGTL(("verbose:dot11AcPhyPortCapabilityTable:acPhyPortInErrors_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the acPhyPortInErrors data.
 * copy (* acPhyPortInErrors_val_ptr ) from rowreq_ctx->data
 */
    (* acPhyPortInErrors_val_ptr ) = rowreq_ctx->data.acPhyPortInErrors;

    return MFD_SUCCESS;
} /* acPhyPortInErrors_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11AcPhyPortCapabilityEntry.acPhyPortOutUcastPkts
 * acPhyPortOutUcastPkts is subid 6 of dot11AcPhyPortCapabilityEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.2.4.7.1.6
 * Description:
The total number of unicast packets the physical port sent.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is COUNTER64 (based on perltype COUNTER64)
 * The net-snmp type is ASN_COUNTER64. The C type decl is U64 (U64)
 */
/**
 * Extract the current value of the acPhyPortOutUcastPkts data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param acPhyPortOutUcastPkts_val_ptr
 *        Pointer to storage for a U64 variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
acPhyPortOutUcastPkts_get( dot11AcPhyPortCapabilityTable_rowreq_ctx *rowreq_ctx, unsigned long long * acPhyPortOutUcastPkts_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != acPhyPortOutUcastPkts_val_ptr );

/*
 * TODO:231:o: |-> copy acPhyPortOutUcastPkts data.
 * get (* acPhyPortOutUcastPkts_val_ptr ).low and (* acPhyPortOutUcastPkts_val_ptr ).high from rowreq_ctx->data
 */
    (* acPhyPortOutUcastPkts_val_ptr ) = rowreq_ctx->data.acPhyPortOutUcastPkts;
    //(* acPhyPortOutUcastPkts_val_ptr ).low = rowreq_ctx->data.acPhyPortOutUcastPkts.low;


    return MFD_SUCCESS;
} /* acPhyPortOutUcastPkts_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11AcPhyPortCapabilityEntry.acPhyPortOutNUcastPkts
 * acPhyPortOutNUcastPkts is subid 7 of dot11AcPhyPortCapabilityEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.2.4.7.1.7
 * Description:
The total number of non-unicast packets the physical port sent.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is COUNTER64 (based on perltype COUNTER64)
 * The net-snmp type is ASN_COUNTER64. The C type decl is U64 (U64)
 */
/**
 * Extract the current value of the acPhyPortOutNUcastPkts data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param acPhyPortOutNUcastPkts_val_ptr
 *        Pointer to storage for a U64 variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
acPhyPortOutNUcastPkts_get( dot11AcPhyPortCapabilityTable_rowreq_ctx *rowreq_ctx, unsigned long long * acPhyPortOutNUcastPkts_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != acPhyPortOutNUcastPkts_val_ptr );

/*
 * TODO:231:o: |-> copy acPhyPortOutNUcastPkts data.
 * get (* acPhyPortOutNUcastPkts_val_ptr ).low and (* acPhyPortOutNUcastPkts_val_ptr ).high from rowreq_ctx->data
 */
    (* acPhyPortOutNUcastPkts_val_ptr ) = rowreq_ctx->data.acPhyPortOutNUcastPkts;
    //(* acPhyPortOutNUcastPkts_val_ptr ).low = rowreq_ctx->data.acPhyPortOutNUcastPkts.low;


    return MFD_SUCCESS;
} /* acPhyPortOutNUcastPkts_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11AcPhyPortCapabilityEntry.acPhyPortOutOctets
 * acPhyPortOutOctets is subid 8 of dot11AcPhyPortCapabilityEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.2.4.7.1.8
 * Description:
The total number of bytes the physical port sent.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is COUNTER64 (based on perltype COUNTER64)
 * The net-snmp type is ASN_COUNTER64. The C type decl is U64 (U64)
 */
/**
 * Extract the current value of the acPhyPortOutOctets data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param acPhyPortOutOctets_val_ptr
 *        Pointer to storage for a U64 variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
acPhyPortOutOctets_get( dot11AcPhyPortCapabilityTable_rowreq_ctx *rowreq_ctx, unsigned long long * acPhyPortOutOctets_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != acPhyPortOutOctets_val_ptr );

/*
 * TODO:231:o: |-> copy acPhyPortOutOctets data.
 * get (* acPhyPortOutOctets_val_ptr ).low and (* acPhyPortOutOctets_val_ptr ).high from rowreq_ctx->data
 */
    (* acPhyPortOutOctets_val_ptr ) = rowreq_ctx->data.acPhyPortOutOctets;
    //(* acPhyPortOutOctets_val_ptr ).low = rowreq_ctx->data.acPhyPortOutOctets.low;


    return MFD_SUCCESS;
} /* acPhyPortOutOctets_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11AcPhyPortCapabilityEntry.acPhyPortOutDiscardPkts
 * acPhyPortOutDiscardPkts is subid 9 of dot11AcPhyPortCapabilityEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.2.4.7.1.9
 * Description:
The total number of packets the physical port sent and discarded.
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
 * Extract the current value of the acPhyPortOutDiscardPkts data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param acPhyPortOutDiscardPkts_val_ptr
 *        Pointer to storage for a u_long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
acPhyPortOutDiscardPkts_get( dot11AcPhyPortCapabilityTable_rowreq_ctx *rowreq_ctx, u_long * acPhyPortOutDiscardPkts_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != acPhyPortOutDiscardPkts_val_ptr );


    DEBUGMSGTL(("verbose:dot11AcPhyPortCapabilityTable:acPhyPortOutDiscardPkts_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the acPhyPortOutDiscardPkts data.
 * copy (* acPhyPortOutDiscardPkts_val_ptr ) from rowreq_ctx->data
 */
    (* acPhyPortOutDiscardPkts_val_ptr ) = rowreq_ctx->data.acPhyPortOutDiscardPkts;

    return MFD_SUCCESS;
} /* acPhyPortOutDiscardPkts_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11AcPhyPortCapabilityEntry.acPhyPortOutErrors
 * acPhyPortOutErrors is subid 10 of dot11AcPhyPortCapabilityEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.2.4.7.1.10
 * Description:
The total number of error packets the physical port sent.
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
 * Extract the current value of the acPhyPortOutErrors data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param acPhyPortOutErrors_val_ptr
 *        Pointer to storage for a u_long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
acPhyPortOutErrors_get( dot11AcPhyPortCapabilityTable_rowreq_ctx *rowreq_ctx, u_long * acPhyPortOutErrors_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != acPhyPortOutErrors_val_ptr );


    DEBUGMSGTL(("verbose:dot11AcPhyPortCapabilityTable:acPhyPortOutErrors_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the acPhyPortOutErrors data.
 * copy (* acPhyPortOutErrors_val_ptr ) from rowreq_ctx->data
 */
    (* acPhyPortOutErrors_val_ptr ) = rowreq_ctx->data.acPhyPortOutErrors;

    return MFD_SUCCESS;
} /* acPhyPortOutErrors_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11AcPhyPortCapabilityEntry.acPhyPortInMulticastPkts
 * acPhyPortInMulticastPkts is subid 11 of dot11AcPhyPortCapabilityEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.2.4.7.1.11
 * Description:
The total number of multicast packets the physical port received.
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
 * Extract the current value of the acPhyPortInMulticastPkts data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param acPhyPortInMulticastPkts_val_ptr
 *        Pointer to storage for a u_long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
acPhyPortInMulticastPkts_get( dot11AcPhyPortCapabilityTable_rowreq_ctx *rowreq_ctx, u_long * acPhyPortInMulticastPkts_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != acPhyPortInMulticastPkts_val_ptr );


    DEBUGMSGTL(("verbose:dot11AcPhyPortCapabilityTable:acPhyPortInMulticastPkts_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the acPhyPortInMulticastPkts data.
 * copy (* acPhyPortInMulticastPkts_val_ptr ) from rowreq_ctx->data
 */
    (* acPhyPortInMulticastPkts_val_ptr ) = rowreq_ctx->data.acPhyPortInMulticastPkts;

    return MFD_SUCCESS;
} /* acPhyPortInMulticastPkts_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11AcPhyPortCapabilityEntry.acPhyPortOutMulticastPkts
 * acPhyPortOutMulticastPkts is subid 12 of dot11AcPhyPortCapabilityEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.2.4.7.1.12
 * Description:
The total number of multicast packets the physical port sent.
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
 * Extract the current value of the acPhyPortOutMulticastPkts data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param acPhyPortOutMulticastPkts_val_ptr
 *        Pointer to storage for a u_long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
acPhyPortOutMulticastPkts_get( dot11AcPhyPortCapabilityTable_rowreq_ctx *rowreq_ctx, u_long * acPhyPortOutMulticastPkts_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != acPhyPortOutMulticastPkts_val_ptr );


    DEBUGMSGTL(("verbose:dot11AcPhyPortCapabilityTable:acPhyPortOutMulticastPkts_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the acPhyPortOutMulticastPkts data.
 * copy (* acPhyPortOutMulticastPkts_val_ptr ) from rowreq_ctx->data
 */
    (* acPhyPortOutMulticastPkts_val_ptr ) = rowreq_ctx->data.acPhyPortOutMulticastPkts;

    return MFD_SUCCESS;
} /* acPhyPortOutMulticastPkts_get */



/** @} */
