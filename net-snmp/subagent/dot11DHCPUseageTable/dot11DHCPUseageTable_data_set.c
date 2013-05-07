/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 12077 $ of $
 *
 * $Id:$
 *
 */
/* standard Net-SNMP includes */
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

#include "ws_dhcp_conf.h"
/* include our parent header */
#include "dot11DHCPUseageTable.h"


/** @defgroup data_set data_set: Routines to set data
 *
 * These routines are used to set the value for individual objects. The
 * row context is passed, along with the new value.
 * 
 * @{
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table dot11DHCPUseageTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * DOT11-AC-MIB::dot11DHCPUseageTable is subid 6 of dot11Service.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.2.6.6, length: 12
*/
    /*
     * NOTE: if you update this chart, please update the versions in
     *       local/mib2c-conf.d/parent-set.m2i
     *       agent/mibgroup/helpers/baby_steps.c
     * while you're at it.
     */
    /*
     ***********************************************************************
     * Baby Steps Flow Chart (2004.06.05)                                  *
     *                                                                     *
     * +--------------+    +================+    U = unconditional path    *
     * |optional state|    ||required state||    S = path for success      *
     * +--------------+    +================+    E = path for error        *
     ***********************************************************************
     *
     *                        +--------------+
     *                        |     pre      |
     *                        |   request    |
     *                        +--------------+
     *                               | U
     *                        +==============+
     *       +----------------||  object    ||
     *       |              E ||  lookup    ||
     *       |                +==============+
     *       |                       | S
     *       |                +==============+
     *       |              E ||   check    ||
     *       |<---------------||   values   ||
     *       |                +==============+
     *       |                       | S
     *       |                +==============+
     *       |       +<-------||   undo     ||
     *       |       |      E ||   setup    ||
     *       |       |        +==============+
     *       |       |               | S
     *       |       |        +==============+
     *       |       |        ||    set     ||-------------------------->+
     *       |       |        ||   value    || E                         |
     *       |       |        +==============+                           |
     *       |       |               | S                                 |
     *       |       |        +--------------+                           |
     *       |       |        |    check     |-------------------------->|
     *       |       |        |  consistency | E                         |
     *       |       |        +--------------+                           |
     *       |       |               | S                                 |
     *       |       |        +==============+         +==============+  |
     *       |       |        ||   commit   ||-------->||     undo   ||  |
     *       |       |        ||            || E       ||    commit  ||  |
     *       |       |        +==============+         +==============+  |
     *       |       |               | S                     U |<--------+
     *       |       |        +--------------+         +==============+
     *       |       |        | irreversible |         ||    undo    ||
     *       |       |        |    commit    |         ||     set    ||
     *       |       |        +--------------+         +==============+
     *       |       |               | U                     U |
     *       |       +-------------->|<------------------------+
     *       |                +==============+
     *       |                ||   undo     ||
     *       |                ||  cleanup   ||
     *       |                +==============+
     *       +---------------------->| U
     *                        +--------------+
     *                        |    post      |
     *                        |   request    |
     *                        +--------------+
     *
     */

/**
 * Setup up context with information needed to undo a set request.
 *
 * This function will be called before the individual node undo setup
 * functions are called. If you need to do any undo setup that is not
 * related to a specific column, you can do it here.
 *
 * Note that the undo context has been allocated with
 * dot11DHCPUseageTable_allocate_data(), but may need extra
 * initialization similar to what you may have done in
 * dot11DHCPUseageTable_rowreq_ctx_init().
 * Note that an individual node's undo_setup function will only be called
 * if that node is being set to a new value.
 *
 * If there is any setup specific to a particular column (e.g. allocating
 * memory for a string), you should do that setup in the node's undo_setup
 * function, so it won't be done unless it is necessary.
 *
 * @param rowreq_ctx
 *        Pointer to the table context (dot11DHCPUseageTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error. set will fail.
 */
int
dot11DHCPUseageTable_undo_setup( dot11DHCPUseageTable_rowreq_ctx *rowreq_ctx)
{
    int rc = MFD_SUCCESS;

    DEBUGMSGTL(("verbose:dot11DHCPUseageTable:dot11DHCPUseageTable_undo_setup","called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert( NULL != rowreq_ctx );

    /*
     * TODO:451:M: |-> Setup dot11DHCPUseageTable undo.
     * set up dot11DHCPUseageTable undo information, in preparation for a set.
     * Undo storage is in (* DHCPOffernum_val_ptr )*
     */

    return rc;
} /* dot11DHCPUseageTable_undo_setup */

/**
 * Undo a set request.
 *
 * This function will be called before the individual node undo
 * functions are called. If you need to do any undo that is not
 * related to a specific column, you can do it here.
 *
 * Note that an individual node's undo function will only be called
 * if that node is being set to a new value.
 *
 * If there is anything  specific to a particular column (e.g. releasing
 * memory for a string), you should do that setup in the node's undo
 * function, so it won't be done unless it is necessary.
 *
 * @param rowreq_ctx
 *        Pointer to the table context (dot11DHCPUseageTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error. set will fail.
 */
int
dot11DHCPUseageTable_undo( dot11DHCPUseageTable_rowreq_ctx *rowreq_ctx)
{
    int rc = MFD_SUCCESS;

    DEBUGMSGTL(("verbose:dot11DHCPUseageTable:dot11DHCPUseageTable_undo","called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert( NULL != rowreq_ctx );

    /*
     * TODO:451:M: |-> dot11DHCPUseageTable undo.
     * dot11DHCPUseageTable undo information, in response to a failed set.
     * Undo storage is in (* DHCPOffernum_val_ptr )*
     */

    return rc;
} /* dot11DHCPUseageTable_undo_setup */

/**
 * Cleanup up context undo information.
 *
 * This function will be called after set/commit processing. If you
 * allocated any resources in undo_setup, this is the place to release
 * those resources.
 *
 * This function is called regardless of the success or failure of the set
 * request. If you need to perform different steps for cleanup depending
 * on success or failure, you can add a flag to the rowreq_ctx.
 *
 * @param rowreq_ctx
 *        Pointer to the table context (dot11DHCPUseageTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error
 */
int
dot11DHCPUseageTable_undo_cleanup( dot11DHCPUseageTable_rowreq_ctx *rowreq_ctx)
{
    int rc = MFD_SUCCESS;

    DEBUGMSGTL(("verbose:dot11DHCPUseageTable:dot11DHCPUseageTable_undo_cleanup","called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert( NULL != rowreq_ctx );

    /*
     * TODO:452:M: |-> Cleanup dot11DHCPUseageTable undo.
     * Undo storage is in (* DHCPOffernum_val_ptr )*
     */

    return rc;
} /* dot11DHCPUseageTable_undo_cleanup */

/**
 * commit new values.
 *
 * At this point, you should have done everything you can to ensure that
 * this commit will not fail.
 *
 * Should you need different behavior depending on which columns were
 * set, rowreq_ctx->column_set_flags will indicate which writeable columns were
 * set. The definitions for the COLUMN_*_FLAG bits can be found in
 * dot11DHCPUseageTable_oids.h.
 * A new row will have the MFD_ROW_CREATED bit set in rowreq_flags.
 *
 * @param dot11DHCPUseageTable_rowreq_ctx
 *        Pointer to the users context.
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error
 */
int
dot11DHCPUseageTable_commit( dot11DHCPUseageTable_rowreq_ctx *rowreq_ctx)
{
    int rc = MFD_SUCCESS;
    int             save_flags;

    DEBUGMSGTL(("verbose:dot11DHCPUseageTable:dot11DHCPUseageTable_commit","called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert( NULL != rowreq_ctx );

    /*
     * save flags, then clear until we actually do something
     */
    save_flags = rowreq_ctx->column_set_flags;
    rowreq_ctx->column_set_flags = 0;

    /*
     * commit dot11DHCPUseageTable data
     * 1) check the column's flag in save_flags to see if it was set.
     * 2) clear the flag when you handle that column
     * 3) set the column's flag in column_set_flags if it needs undo
     *    processing in case of a failure.
     */
    if (save_flags & COLUMN_DHCPMAXLIMIT_FLAG) {
       save_flags &= ~COLUMN_DHCPMAXLIMIT_FLAG; /* clear DHCPMaxLimit */
       /*
        * TODO:482:o: |-> commit column DHCPMaxLimit.
        */
       //rc = -1;
       if(-1 == rc) {
           snmp_log(LOG_ERR,"dot11DHCPUseageTable column DHCPMaxLimit commit failed\n");
       }
       else {
            /*
             * set flag, in case we need to undo DHCPMaxLimit
             */
            rowreq_ctx->column_set_flags |= COLUMN_DHCPMAXLIMIT_FLAG;
       }
    }

    /*
     * if we successfully commited this row, set the dirty flag.
     */
    if (MFD_SUCCESS == rc) {
        rowreq_ctx->rowreq_flags |= MFD_ROW_DIRTY;
    }

    if (save_flags) {
       snmp_log(LOG_ERR, "unhandled columns (0x%x) in commit\n", save_flags);
       return MFD_ERROR;
    }

    return rc;
} /* dot11DHCPUseageTable_commit */

/**
 * undo commit new values.
 *
 * Should you need different behavior depending on which columns were
 * set, rowreq_ctx->column_set_flags will indicate which writeable columns were
 * set. The definitions for the COLUMN_*_FLAG bits can be found in
 * dot11DHCPUseageTable_oids.h.
 * A new row will have the MFD_ROW_CREATED bit set in rowreq_flags.
 *
 * @param dot11DHCPUseageTable_rowreq_ctx
 *        Pointer to the users context.
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error
 */
int
dot11DHCPUseageTable_undo_commit( dot11DHCPUseageTable_rowreq_ctx *rowreq_ctx)
{
    int rc = MFD_SUCCESS;

    DEBUGMSGTL(("verbose:dot11DHCPUseageTable:dot11DHCPUseageTable_undo_commit","called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert( NULL != rowreq_ctx );

    /*
     * TODO:485:M: |-> Undo dot11DHCPUseageTable commit.
     * check the column's flag in rowreq_ctx->column_set_flags to see
     * if it was set during commit, then undo it.
     *
     * eg: if (rowreq_ctx->column_set_flags & COLUMN__FLAG) {}
     */

    
    /*
     * if we successfully un-commited this row, clear the dirty flag.
     */
    if (MFD_SUCCESS == rc) {
        rowreq_ctx->rowreq_flags &= ~MFD_ROW_DIRTY;
    }

    return rc;
} /* dot11DHCPUseageTable_undo_commit */

/*
 * TODO:440:M: Implement dot11DHCPUseageTable node value checks.
 * TODO:450:M: Implement dot11DHCPUseageTable undo functions.
 * TODO:460:M: Implement dot11DHCPUseageTable set functions.
 * TODO:480:M: Implement dot11DHCPUseageTable commit functions.
 */
/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11DHCPUseageEntry.DHCPMaxLimit
 * DHCPMaxLimit is subid 4 of dot11DHCPUseageEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.31656.6.1.2.6.6.1.4
 * Description:
DHCP useage max limit.
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
 * Check that the proposed new value is potentially valid.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param DHCPMaxLimit_val
 *        A long containing the new value.
 *
 * @retval MFD_SUCCESS        : incoming value is legal
 * @retval MFD_NOT_VALID_NOW  : incoming value is not valid now
 * @retval MFD_NOT_VALID_EVER : incoming value is never valid
 *
 * This is the place to check for requirements that are not
 * expressed in the mib syntax (for example, a requirement that
 * is detailed in the description for an object).
 *
 * You should check that the requested change between the undo value and the
 * new value is legal (ie, the transistion from one value to another
 * is legal).
 *      
 *@note
 * This check is only to determine if the new value
 * is \b potentially valid. This is the first check of many, and
 * is one of the simplest ones.
 * 
 *@note
 * this is not the place to do any checks for values
 * which depend on some other value in the mib. Those
 * types of checks should be done in the
 * dot11DHCPUseageTable_check_dependencies() function.
 *
 * The following checks have already been done for you:
 *    The syntax is ASN_INTEGER
 *
 * If there a no other checks you need to do, simply return MFD_SUCCESS.
 *
 */
int
DHCPMaxLimit_check_value( dot11DHCPUseageTable_rowreq_ctx *rowreq_ctx, long DHCPMaxLimit_val)
{
    DEBUGMSGTL(("verbose:dot11DHCPUseageTable:DHCPMaxLimit_check_value","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:441:o: |-> Check for valid DHCPMaxLimit value.
     */

    return MFD_SUCCESS; /* DHCPMaxLimit value not illegal */
} /* DHCPMaxLimit_check_value */

/**
 * Save old value information
 *
 * @param rowreq_ctx
 *        Pointer to the table context (dot11DHCPUseageTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error. set will fail.
 *
 * This function will be called after the table level undo setup function
 * dot11DHCPUseageTable_undo_setup has been called.
 *
 *@note
 * this function will only be called if a new value is set for this column.
 *
 * If there is any setup specific to a particular column (e.g. allocating
 * memory for a string), you should do that setup in this function, so it
 * won't be done unless it is necessary.
 */
int
DHCPMaxLimit_undo_setup( dot11DHCPUseageTable_rowreq_ctx *rowreq_ctx)
{
    DEBUGMSGTL(("verbose:dot11DHCPUseageTable:DHCPMaxLimit_undo_setup","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:455:o: |-> Setup DHCPMaxLimit undo.
     */
    /*
     * copy DHCPMaxLimit data
     * set rowreq_ctx->undo->DHCPMaxLimit from rowreq_ctx->data.DHCPMaxLimit
     */
    rowreq_ctx->undo->DHCPMaxLimit = rowreq_ctx->data.DHCPMaxLimit;


    return MFD_SUCCESS;
} /* DHCPMaxLimit_undo_setup */

/**
 * Set the new value.
 *
 * @param rowreq_ctx
 *        Pointer to the users context. You should know how to
 *        manipulate the value from this object.
 * @param DHCPMaxLimit_val
 *        A long containing the new value.
 */
int
DHCPMaxLimit_set( dot11DHCPUseageTable_rowreq_ctx *rowreq_ctx, long DHCPMaxLimit_val )
{

    DEBUGMSGTL(("verbose:dot11DHCPUseageTable:DHCPMaxLimit_set","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:461:M: |-> Set DHCPMaxLimit value.
     * set DHCPMaxLimit value in rowreq_ctx->data
     */
    char maxlimit[10] = {0};
	memset(maxlimit,0,sizeof(maxlimit));
    snprintf(maxlimit,sizeof(maxlimit)-1,"%d",DHCPMaxLimit_val);
	
	mod_dhcp_node(DHCP_XML, DHCP_NODE_CONF, DHCP_NODE_ATTR, rowreq_ctx->data.DHCPsubnet, "maxlimit", maxlimit);
    rowreq_ctx->data.DHCPMaxLimit = DHCPMaxLimit_val;

    return MFD_SUCCESS;
} /* DHCPMaxLimit_set */

/**
 * undo the previous set.
 *
 * @param rowreq_ctx
 *        Pointer to the users context.
 */
int
DHCPMaxLimit_undo( dot11DHCPUseageTable_rowreq_ctx *rowreq_ctx)
{

    DEBUGMSGTL(("verbose:dot11DHCPUseageTable:DHCPMaxLimit_undo","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:456:o: |-> Clean up DHCPMaxLimit undo.
     */
    /*
     * copy DHCPMaxLimit data
     * set rowreq_ctx->data.DHCPMaxLimit from rowreq_ctx->undo->DHCPMaxLimit
     */
    rowreq_ctx->data.DHCPMaxLimit = rowreq_ctx->undo->DHCPMaxLimit;

    
    return MFD_SUCCESS;
} /* DHCPMaxLimit_undo */

/**
 * check dependencies
 *
 * This is useful for for tables which have dependencies between columns
 * (or rows, or tables). For example, two columns allocating a percentage
 * of something add up 100%.
 *
 * Should you need different behavior depending on which columns were
 * set, rowreq_ctx->column_set_flags will indicate which writeable columns were
 * set. The definitions for the COLUMN_*_FLAG bits can be found in
 * dot11DHCPUseageTable_oids.h.
 * A new row will have the MFD_ROW_CREATED bit set in rowreq_flags.
 *
 * @retval MFD_SUCCESS all the changes to the row are legal
 * @retval MFD_ERROR   one or more changes are not legal
 *
 * (see README-table-dot11DHCPUseageTable if you don't have dependencies)
 */
int
dot11DHCPUseageTable_check_dependencies(dot11DHCPUseageTable_rowreq_ctx *rowreq_ctx)
{
    int rc = MFD_SUCCESS;
    
    DEBUGMSGTL(("internal:dot11DHCPUseageTable:dot11DHCPUseageTable_check_dependencies","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:470:o: Check dot11DHCPUseageTable row dependencies.
     * check that all new value are legal and consistent with each other
     */
    return rc;
} /* dot11DHCPUseageTable_check_dependencies */

/** @} */