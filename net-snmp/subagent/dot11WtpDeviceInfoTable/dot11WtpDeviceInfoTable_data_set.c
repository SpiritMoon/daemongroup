/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.18 $ of : mfd-data-set.m2c,v $
 *
 * $Id:$
 *
 */
/* standard Net-SNMP includes */
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

/* include our parent header */
#include "dot11WtpDeviceInfoTable.h"

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
 *** Table dot11WtpDeviceInfoTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11WtpDeviceInfoTable is subid 2 of wtpGeneralInfo.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.1.1.2, length: 12
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
 * Note that an individual node's undo_setup function will only be called
 * if that node is being set to a new value.
 *
 * If there is any setup specific to a particular column (e.g. allocating
 * memory for a string), you should do that setup in the node's undo_setup
 * function, so it won't be done unless it is necessary.
 *
 * @param rowreq_ctx
 *        Pointer to the table context (dot11WtpDeviceInfoTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error. set will fail.
 */
int
dot11WtpDeviceInfoTable_undo_setup( dot11WtpDeviceInfoTable_rowreq_ctx *rowreq_ctx)
{
    int rc = MFD_SUCCESS;

    DEBUGMSGTL(("verbose:dot11WtpDeviceInfoTable:dot11WtpDeviceInfoTable_undo_setup","called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert( NULL != rowreq_ctx );

    /*
     * TODO:451:M: |-> Setup dot11WtpDeviceInfoTable undo.
     * set up dot11WtpDeviceInfoTable undo information, in preparation for a set.
     */

    return rc;
} /* dot11WtpDeviceInfoTable_undo_setup */

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
 *        Pointer to the table context (dot11WtpDeviceInfoTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error
 */
int
dot11WtpDeviceInfoTable_undo_cleanup( dot11WtpDeviceInfoTable_rowreq_ctx *rowreq_ctx)
{
    int rc = MFD_SUCCESS;

    DEBUGMSGTL(("verbose:dot11WtpDeviceInfoTable:dot11WtpDeviceInfoTable_undo_cleanup","called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert( NULL != rowreq_ctx );

    /*
     * TODO:452:M: |-> Cleanup dot11WtpDeviceInfoTable undo.
     */

    return rc;
} /* dot11WtpDeviceInfoTable_undo_cleanup */

/**
 * commit new values.
 *
 * At this point, you should have done everything you can to ensure that
 * this commit will not fail.
 *
 * Should you need different behavior depending on which columns were
 * set, rowreq_ctx->column_set_flags will indicate which writeable columns were
 * set. The definitions for the FLAG_* bits can be found in
 * dot11WtpDeviceInfoTable_oids.h.
 * A new row will have the MFD_ROW_CREATED bit set in rowreq_flags.
 *
 * @param dot11WtpDeviceInfoTable_rowreq_ctx
 *        Pointer to the users context.
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error
 */
int
dot11WtpDeviceInfoTable_commit( dot11WtpDeviceInfoTable_rowreq_ctx *rowreq_ctx)
{
    int rc = MFD_SUCCESS;
    int             save_flags;

    DEBUGMSGTL(("verbose:dot11WtpDeviceInfoTable:dot11WtpDeviceInfoTable_commit","called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert( NULL != rowreq_ctx );

    /*
     * save flags, then clear until we actually do something
     */
    save_flags = rowreq_ctx->column_set_flags;
    rowreq_ctx->column_set_flags = 0;

    /*
     * commit dot11WtpDeviceInfoTable data
     * 1) check the column's flag in save_flags to see if it was set.
     * 2) clear the flag when you handle that column
     * 3) set the column's flag in column_set_flags if it needs undo
     *    processing in case of a failure.
     */
    if (save_flags & FLAG_WTPCPUUSAGETHRESHHD) {
       save_flags &= ~FLAG_WTPCPUUSAGETHRESHHD; /* clear wtpCPUusageThreshhd */
       /*
        * TODO:482:o: |-> commit column wtpCPUusageThreshhd.
        */
       //rc = -1;
       if(-1 == rc) {
           snmp_log(LOG_ERR,"dot11WtpDeviceInfoTable column wtpCPUusageThreshhd commit failed\n");
       }
       else {
            /*
             * set flag, in case we need to undo wtpCPUusageThreshhd
             */
            rowreq_ctx->column_set_flags |= FLAG_WTPCPUUSAGETHRESHHD;
       }
    }

    if (save_flags & FLAG_WTPMEMUSAGETHRESHHD) {
       save_flags &= ~FLAG_WTPMEMUSAGETHRESHHD; /* clear wtpMemUsageThreshhd */
       /*
        * TODO:482:o: |-> commit column wtpMemUsageThreshhd.
        */
       //rc = -1;
       if(-1 == rc) {
           snmp_log(LOG_ERR,"dot11WtpDeviceInfoTable column wtpMemUsageThreshhd commit failed\n");
       }
       else {
            /*
             * set flag, in case we need to undo wtpMemUsageThreshhd
             */
            rowreq_ctx->column_set_flags |= FLAG_WTPMEMUSAGETHRESHHD;
       }
    }

    if (save_flags) {
       snmp_log(LOG_ERR, "unhandled columns (0x%x) in commit\n", save_flags);
       return MFD_ERROR;
    }

    return rc;
} /* dot11WtpDeviceInfoTable_commit */

/**
 * undo commit new values.
 *
 * Should you need different behavior depending on which columns were
 * set, rowreq_ctx->column_set_flags will indicate which writeable columns were
 * set. The definitions for the FLAG_* bits can be found in
 * dot11WtpDeviceInfoTable_oids.h.
 * A new row will have the MFD_ROW_CREATED bit set in rowreq_flags.
 *
 * @param dot11WtpDeviceInfoTable_rowreq_ctx
 *        Pointer to the users context.
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error
 */
int
dot11WtpDeviceInfoTable_undo_commit( dot11WtpDeviceInfoTable_rowreq_ctx *rowreq_ctx)
{
    int rc = MFD_SUCCESS;

    DEBUGMSGTL(("verbose:dot11WtpDeviceInfoTable:dot11WtpDeviceInfoTable_undo_commit","called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert( NULL != rowreq_ctx );

    /*
     * TODO:485:M: |-> Undo dot11WtpDeviceInfoTable commit.
     * check the column's flag in rowreq_ctx->column_set_flags to see
     * if it was set during commit, then undo it.
     *
     * eg: if (rowreq_ctx->column_set_flags & FLAG_) {}
     */

    return rc;
} /* dot11WtpDeviceInfoTable_undo_commit */

/*
 * TODO:420:r: Implement dot11WtpDeviceInfoTable index validation.
 */
/*---------------------------------------------------------------------
 * DOT11-WTP-MIB::dot11WtpInfoEntry.wtpMacAddr
 * wtpMacAddr is subid 1 of dot11WtpInfoEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.1.1.1.1.1
 * Description:
AP mac.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is Dot11BaseWtpIdTC (based on perltype OCTETSTR)
 * The net-snmp type is ASN_OCTET_STR. The C type decl is char (char)
 * This data type requires a length.  (Max )
 */
/*
 * TODO:440:M: Implement dot11WtpDeviceInfoTable node value checks.
 * TODO:450:M: Implement dot11WtpDeviceInfoTable undo functions.
 * TODO:460:M: Implement dot11WtpDeviceInfoTable set functions.
 * TODO:480:M: Implement dot11WtpDeviceInfoTable commit functions.
 */
/*---------------------------------------------------------------------
 * DOT11-WTP-MIB::dot11WtpDeviceInfoEntry.wtpCPUusageThreshhd
 * wtpCPUusageThreshhd is subid 6 of dot11WtpDeviceInfoEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.31656.6.1.1.1.2.1.6
 * Description:
If CPU use rate too high,send trap.
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
 * @param wtpCPUusageThreshhd_val
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
 * dot11WtpDeviceInfoTable_check_dependencies() function.
 *
 * The following checks have already been done for you:
 *    The syntax is ASN_INTEGER
 *
 * If there a no other checks you need to do, simply return MFD_SUCCESS.
 *
 */
int
wtpCPUusageThreshhd_check_value( dot11WtpDeviceInfoTable_rowreq_ctx *rowreq_ctx, long wtpCPUusageThreshhd_val)
{
    DEBUGMSGTL(("verbose:dot11WtpDeviceInfoTable:wtpCPUusageThreshhd_check_value","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:441:o: |-> Check for valid wtpCPUusageThreshhd value.
     */

    return MFD_SUCCESS; /* wtpCPUusageThreshhd value not illegal */
} /* wtpCPUusageThreshhd_check_value */

/**
 * Save old value information
 *
 * @param rowreq_ctx
 *        Pointer to the table context (dot11WtpDeviceInfoTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error. set will fail.
 *
 * This function will be called after the table level undo setup function
 * dot11WtpDeviceInfoTable_undo_setup has been called.
 *
 *@note
 * this function will only be called if a new value is set for this column.
 *
 * If there is any setup specific to a particular column (e.g. allocating
 * memory for a string), you should do that setup in this function, so it
 * won't be done unless it is necessary.
 */
int
wtpCPUusageThreshhd_undo_setup( dot11WtpDeviceInfoTable_rowreq_ctx *rowreq_ctx)
{
    DEBUGMSGTL(("verbose:dot11WtpDeviceInfoTable:wtpCPUusageThreshhd_undo_setup","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:455:o: |-> Setup wtpCPUusageThreshhd undo.
     */
    /*
     * copy wtpCPUusageThreshhd data
     * set rowreq_ctx->undo->wtpCPUusageThreshhd from rowreq_ctx->data.wtpCPUusageThreshhd
     */
    rowreq_ctx->undo->wtpCPUusageThreshhd = rowreq_ctx->data.wtpCPUusageThreshhd;


    return MFD_SUCCESS;
} /* wtpCPUusageThreshhd_undo_setup */

/**
 * Set the new value.
 *
 * @param rowreq_ctx
 *        Pointer to the users context. You should know how to
 *        manipulate the value from this object.
 * @param wtpCPUusageThreshhd_val
 *        A long containing the new value.
 */
int
wtpCPUusageThreshhd_set( dot11WtpDeviceInfoTable_rowreq_ctx *rowreq_ctx, long wtpCPUusageThreshhd_val )
{

    DEBUGMSGTL(("verbose:dot11WtpDeviceInfoTable:wtpCPUusageThreshhd_set","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:245:o: |-> Implement wtpCPUusageThreshhd reverse mapping.
 * If the values for your data type don't exactly match the
 * possible values defined by the mib, you should map them here.
 */
    /*
     * TODO:461:M: |-> Set wtpCPUusageThreshhd value.
     * set wtpCPUusageThreshhd value in rowreq_ctx->data
     */    
    int rc = MFD_ERROR;
	int ret = 0;
    void *connection = NULL;
    if(SNMPD_DBUS_ERROR == get_instance_dbus_connection(rowreq_ctx->data.parameter, &connection, SNMPD_INSTANCE_MASTER_V3)) {
        return MFD_ERROR;
    }    
	char value[10] = { 0 };
	memset(value, 0, 10);
	snprintf(value,sizeof(value)-1,"%d",wtpCPUusageThreshhd_val);

	ret = set_wtp_trap_threshold_cmd(rowreq_ctx->data.parameter, connection, rowreq_ctx->data.wtpCurrID, "cpu", value);
	if(ret == 1)
	{
		rowreq_ctx->data.wtpCPUusageThreshhd = wtpCPUusageThreshhd_val;
		rc = MFD_SUCCESS;
	}
	else
	{
	    if(SNMPD_CONNECTION_ERROR == ret) {
            close_slot_dbus_connection(rowreq_ctx->data.parameter.slot_id);
	    }
		rc = MFD_ERROR;
	}

    return rc;
} /* wtpCPUusageThreshhd_set */

/**
 * undo the previous set.
 *
 * @param rowreq_ctx
 *        Pointer to the users context.
 */
int
wtpCPUusageThreshhd_undo( dot11WtpDeviceInfoTable_rowreq_ctx *rowreq_ctx)
{

    DEBUGMSGTL(("verbose:dot11WtpDeviceInfoTable:wtpCPUusageThreshhd_undo","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:456:o: |-> Clean up wtpCPUusageThreshhd undo.
     */
    /*
     * copy wtpCPUusageThreshhd data
     * set rowreq_ctx->data.wtpCPUusageThreshhd from rowreq_ctx->undo->wtpCPUusageThreshhd
     */
    rowreq_ctx->data.wtpCPUusageThreshhd = rowreq_ctx->undo->wtpCPUusageThreshhd;

    
    return MFD_SUCCESS;
} /* wtpCPUusageThreshhd_undo */

/*---------------------------------------------------------------------
 * DOT11-WTP-MIB::dot11WtpDeviceInfoEntry.wtpMemUsageThreshhd
 * wtpMemUsageThreshhd is subid 12 of dot11WtpDeviceInfoEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.31656.6.1.1.1.2.1.12
 * Description:
If memory use rate too high ,send trap.
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
 * @param wtpMemUsageThreshhd_val
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
 * dot11WtpDeviceInfoTable_check_dependencies() function.
 *
 * The following checks have already been done for you:
 *    The syntax is ASN_INTEGER
 *
 * If there a no other checks you need to do, simply return MFD_SUCCESS.
 *
 */
int
wtpMemUsageThreshhd_check_value( dot11WtpDeviceInfoTable_rowreq_ctx *rowreq_ctx, long wtpMemUsageThreshhd_val)
{
    DEBUGMSGTL(("verbose:dot11WtpDeviceInfoTable:wtpMemUsageThreshhd_check_value","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:441:o: |-> Check for valid wtpMemUsageThreshhd value.
     */

    return MFD_SUCCESS; /* wtpMemUsageThreshhd value not illegal */
} /* wtpMemUsageThreshhd_check_value */

/**
 * Save old value information
 *
 * @param rowreq_ctx
 *        Pointer to the table context (dot11WtpDeviceInfoTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error. set will fail.
 *
 * This function will be called after the table level undo setup function
 * dot11WtpDeviceInfoTable_undo_setup has been called.
 *
 *@note
 * this function will only be called if a new value is set for this column.
 *
 * If there is any setup specific to a particular column (e.g. allocating
 * memory for a string), you should do that setup in this function, so it
 * won't be done unless it is necessary.
 */
int
wtpMemUsageThreshhd_undo_setup( dot11WtpDeviceInfoTable_rowreq_ctx *rowreq_ctx)
{
    DEBUGMSGTL(("verbose:dot11WtpDeviceInfoTable:wtpMemUsageThreshhd_undo_setup","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:455:o: |-> Setup wtpMemUsageThreshhd undo.
     */
    /*
     * copy wtpMemUsageThreshhd data
     * set rowreq_ctx->undo->wtpMemUsageThreshhd from rowreq_ctx->data.wtpMemUsageThreshhd
     */
    rowreq_ctx->undo->wtpMemUsageThreshhd = rowreq_ctx->data.wtpMemUsageThreshhd;


    return MFD_SUCCESS;
} /* wtpMemUsageThreshhd_undo_setup */

/**
 * Set the new value.
 *
 * @param rowreq_ctx
 *        Pointer to the users context. You should know how to
 *        manipulate the value from this object.
 * @param wtpMemUsageThreshhd_val
 *        A long containing the new value.
 */
int
wtpMemUsageThreshhd_set( dot11WtpDeviceInfoTable_rowreq_ctx *rowreq_ctx, long wtpMemUsageThreshhd_val )
{

    DEBUGMSGTL(("verbose:dot11WtpDeviceInfoTable:wtpMemUsageThreshhd_set","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:245:o: |-> Implement wtpMemUsageThreshhd reverse mapping.
 * If the values for your data type don't exactly match the
 * possible values defined by the mib, you should map them here.
 */
    /*
     * TODO:461:M: |-> Set wtpMemUsageThreshhd value.
     * set wtpMemUsageThreshhd value in rowreq_ctx->data
     */    
	int rc = MFD_ERROR;
	int ret = 0;
    void *connection = NULL;
    if(SNMPD_DBUS_ERROR == get_instance_dbus_connection(rowreq_ctx->data.parameter, &connection, SNMPD_INSTANCE_MASTER_V3))
        return MFD_ERROR;
        
	char value[10] = { 0 };
	memset(value, 0, 10);
	snprintf(value,sizeof(value)-1,"%d",wtpMemUsageThreshhd_val);

	ret = set_wtp_trap_threshold_cmd(rowreq_ctx->data.parameter, connection, rowreq_ctx->data.wtpCurrID, "memory", value);
	if(ret == 1)
	{
		rowreq_ctx->data.wtpMemUsageThreshhd = wtpMemUsageThreshhd_val;
		rc = MFD_SUCCESS;
	}
	else
	{
	    if(SNMPD_CONNECTION_ERROR == ret) {
            close_slot_dbus_connection(rowreq_ctx->data.parameter.slot_id);
	    }					
		rc = MFD_ERROR;
	}

    return rc;
} /* wtpMemUsageThreshhd_set */

/**
 * undo the previous set.
 *
 * @param rowreq_ctx
 *        Pointer to the users context.
 */
int
wtpMemUsageThreshhd_undo( dot11WtpDeviceInfoTable_rowreq_ctx *rowreq_ctx)
{

    DEBUGMSGTL(("verbose:dot11WtpDeviceInfoTable:wtpMemUsageThreshhd_undo","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:456:o: |-> Clean up wtpMemUsageThreshhd undo.
     */
    /*
     * copy wtpMemUsageThreshhd data
     * set rowreq_ctx->data.wtpMemUsageThreshhd from rowreq_ctx->undo->wtpMemUsageThreshhd
     */
    rowreq_ctx->data.wtpMemUsageThreshhd = rowreq_ctx->undo->wtpMemUsageThreshhd;

    
    return MFD_SUCCESS;
} /* wtpMemUsageThreshhd_undo */

/**
 * check dependencies
 *
 * This is useful for for tables which have dependencies between columns
 * (or rows, or tables). For example, two columns allocating a percentage
 * of something add up 100%.
 *
 * Should you need different behavior depending on which columns were
 * set, rowreq_ctx->column_set_flags will indicate which writeable columns were
 * set. The definitions for the FLAG_* bits can be found in
 * dot11WtpDeviceInfoTable_oids.h.
 * A new row will have the MFD_ROW_CREATED bit set in rowreq_flags.
 *
 * @retval MFD_SUCCESS all the changes to the row are legal
 * @retval MFD_ERROR   one or more changes are not legal
 *
 * (see README-table-dot11WtpDeviceInfoTable if you don't have dependencies)
 */
int
dot11WtpDeviceInfoTable_check_dependencies(dot11WtpDeviceInfoTable_rowreq_ctx *rowreq_ctx)
{
    int rc = MFD_SUCCESS;
    
    DEBUGMSGTL(("internal:dot11WtpDeviceInfoTable:dot11WtpDeviceInfoTable_check_dependencies","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:470:o: Check dot11WtpDeviceInfoTable row dependencies.
     * check that all new value are legal and consistent with each other
     */
    return rc;
} /* dot11WtpDeviceInfoTable_check_dependencies */

/** @} */