/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 14170 $ of $ 
 *
 * $Id:$
 */
/** \page MFD helper for dot11IllegalDeviceTable
 *
 * \section intro Introduction
 * Introductory text.
 *
 */
/* standard Net-SNMP includes */
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

/* include our parent header */
#include "dot11IllegalDeviceTable.h"

#include <net-snmp/agent/mib_modules.h>

#include "dot11IllegalDeviceTable_interface.h"
#include "autelanWtpGroup.h"
#define ILLEGALDEVICETABLE "2.8.2"

oid dot11IllegalDeviceTable_oid[128] = { 0 };
int dot11IllegalDeviceTable_oid_size = 0;

    dot11IllegalDeviceTable_registration  dot11IllegalDeviceTable_user_context;

void initialize_table_dot11IllegalDeviceTable(void);
void shutdown_table_dot11IllegalDeviceTable(void);


/**
 * Initializes the dot11IllegalDeviceTable module
 */
void
init_dot11IllegalDeviceTable(void)
{
    DEBUGMSGTL(("verbose:dot11IllegalDeviceTable:init_dot11IllegalDeviceTable","called\n"));

    /*
     * TODO:300:o: Perform dot11IllegalDeviceTable one-time module initialization.
     */
     
    /*
     * here we initialize all the tables we're planning on supporting
     */
    if (should_init("dot11IllegalDeviceTable"))
        initialize_table_dot11IllegalDeviceTable();

} /* init_dot11IllegalDeviceTable */

/**
 * Shut-down the dot11IllegalDeviceTable module (agent is exiting)
 */
void
shutdown_dot11IllegalDeviceTable(void)
{
    if (should_init("dot11IllegalDeviceTable"))
        shutdown_table_dot11IllegalDeviceTable();

}

/**
 * Initialize the table dot11IllegalDeviceTable 
 *    (Define its contents and how it's structured)
 */
void
initialize_table_dot11IllegalDeviceTable(void)
{
    dot11IllegalDeviceTable_registration * user_context;
    u_long flags;

    DEBUGMSGTL(("verbose:dot11IllegalDeviceTable:initialize_table_dot11IllegalDeviceTable","called\n"));

    /*
     * TODO:301:o: Perform dot11IllegalDeviceTable one-time table initialization.
     */

    /*
     * TODO:302:o: |->Initialize dot11IllegalDeviceTable user context
     * if you'd like to pass in a pointer to some data for this
     * table, allocate or set it up here.
     */
    /*
     * a netsnmp_data_list is a simple way to store void pointers. A simple
     * string token is used to add, find or remove pointers.
     */
    user_context = netsnmp_create_data_list("dot11IllegalDeviceTable", NULL, NULL);
    
    /*
     * No support for any flags yet, but in the future you would
     * set any flags here.
     */
    flags = 0;
    
    mad_dev_oid(dot11IllegalDeviceTable_oid, ILLEGALDEVICETABLE, &dot11IllegalDeviceTable_oid_size, enterprise_pvivate_oid);
    /*
     * call interface initialization code
     */
    _dot11IllegalDeviceTable_initialize_interface(user_context, flags);
} /* initialize_table_dot11IllegalDeviceTable */

/**
 * Shutdown the table dot11IllegalDeviceTable 
 */
void
shutdown_table_dot11IllegalDeviceTable(void)
{
    /*
     * call interface shutdown code
     */
    _dot11IllegalDeviceTable_shutdown_interface(&dot11IllegalDeviceTable_user_context);
}

/**
 * extra context initialization (eg default values)
 *
 * @param rowreq_ctx    : row request context
 * @param user_init_ctx : void pointer for user (parameter to rowreq_ctx_allocate)
 *
 * @retval MFD_SUCCESS  : no errors
 * @retval MFD_ERROR    : error (context allocate will fail)
 */
int
dot11IllegalDeviceTable_rowreq_ctx_init(dot11IllegalDeviceTable_rowreq_ctx *rowreq_ctx,
                           void *user_init_ctx)
{
    DEBUGMSGTL(("verbose:dot11IllegalDeviceTable:dot11IllegalDeviceTable_rowreq_ctx_init","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);
    
    /*
     * TODO:210:o: |-> Perform extra dot11IllegalDeviceTable rowreq initialization. (eg DEFVALS)
     */

    return MFD_SUCCESS;
} /* dot11IllegalDeviceTable_rowreq_ctx_init */

/**
 * extra context cleanup
 *
 */
void dot11IllegalDeviceTable_rowreq_ctx_cleanup(dot11IllegalDeviceTable_rowreq_ctx *rowreq_ctx)
{
    DEBUGMSGTL(("verbose:dot11IllegalDeviceTable:dot11IllegalDeviceTable_rowreq_ctx_cleanup","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);
    
    /*
     * TODO:211:o: |-> Perform extra dot11IllegalDeviceTable rowreq cleanup.
     */
} /* dot11IllegalDeviceTable_rowreq_ctx_cleanup */

/************************************************************
 * the *_should_save routine is called to determine if a row
 * should be stored persistently.
 *
 * Note that this is not a 'dirty' check (i.e. if a row has changed),
 * but a check for volatile rows that should not be saved between
 * restarts.
 *
 * return 1 if the row should be stored
 * return 0 if the row should not be stored
 */
int
dot11IllegalDeviceTable_container_should_save(dot11IllegalDeviceTable_rowreq_ctx * rowreq_ctx)
{
    
    return 1; /* save the row */
}

/**
 * pre-request callback
 *
 *
 * @retval MFD_SUCCESS              : success.
 * @retval MFD_ERROR                : other error
 */
int
dot11IllegalDeviceTable_pre_request(dot11IllegalDeviceTable_registration * user_context)
{
    DEBUGMSGTL(("verbose:dot11IllegalDeviceTable:dot11IllegalDeviceTable_pre_request","called\n"));

    /*
     * TODO:510:o: Perform dot11IllegalDeviceTable pre-request actions.
     */

    return MFD_SUCCESS;
} /* dot11IllegalDeviceTable_pre_request */

/**
 * post-request callback
 *
 * Note:
 *   New rows have been inserted into the container, and
 *   deleted rows have been removed from the container and
 *   released.
 *
 * @param user_context
 * @param rc : MFD_SUCCESS if all requests succeeded
 *
 * @retval MFD_SUCCESS : success.
 * @retval MFD_ERROR   : other error (ignored)
 */
int
dot11IllegalDeviceTable_post_request(dot11IllegalDeviceTable_registration * user_context, int rc)
{
    DEBUGMSGTL(("verbose:dot11IllegalDeviceTable:dot11IllegalDeviceTable_post_request","called\n"));

    /*
     * TODO:511:o: Perform dot11IllegalDeviceTable post-request actions.
     */

    /*
     * check to set if any rows were changed.
     */
    if (dot11IllegalDeviceTable_dirty_get()) {
        /*
         * check if request was successful. If so, this would be
         * a good place to save data to its persistent store.
         */
        if (MFD_SUCCESS == rc) {
            /*
             * save changed rows, if you haven't already
             */
            snmp_store(netsnmp_ds_get_string(NETSNMP_DS_LIBRARY_ID,
                                             NETSNMP_DS_LIB_APPTYPE));
        }
        
        dot11IllegalDeviceTable_dirty_set(0); /* clear table dirty flag */
    }

    return MFD_SUCCESS;
} /* dot11IllegalDeviceTable_post_request */


/** @{ */