/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.32.2.3 $ of : mfd-top.m2c,v $ 
 *
 * $Id:$
 */
/** \mainpage MFD helper for dot11ConfigWapiTable
 *
 * \section intro Introduction
 * Introductory text.
 *
 */
/* standard Net-SNMP includes */
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

#include "mibs_public.h"
/* include our parent header */
#include "dot11ConfigWapiTable.h"

#include <net-snmp/agent/mib_modules.h>

#include "dot11ConfigWapiTable_interface.h"

#define CONFIGWAPITALBE "2.14.5"

oid dot11ConfigWapiTable_oid[128] = { 0 };
int dot11ConfigWapiTable_oid_size = 0;

void initialize_table_dot11ConfigWapiTable(void);


/**
 * Initializes the dot11ConfigWapiTable module
 */
void
init_dot11ConfigWapiTable(void)
{
    DEBUGMSGTL(("verbose:dot11ConfigWapiTable:init_dot11ConfigWapiTable","called\n"));

    /*
     * TODO:300:o: Perform dot11ConfigWapiTable one-time module initialization.
     */
     
    /*
     * here we initialize all the tables we're planning on supporting
     */
    if (should_init("dot11ConfigWapiTable"))
        initialize_table_dot11ConfigWapiTable();

} /* init_dot11ConfigWapiTable */

/**
 * Initialize the table dot11ConfigWapiTable 
 *    (Define its contents and how it's structured)
 */
void
initialize_table_dot11ConfigWapiTable(void)
{
    dot11ConfigWapiTable_registration_ptr user_context;
    u_long flags;

    DEBUGMSGTL(("verbose:dot11ConfigWapiTable:initialize_table_dot11ConfigWapiTable","called\n"));

    /*
     * TODO:301:o: Perform dot11ConfigWapiTable one-time table initialization.
     */

    /*
     * TODO:302:o: |->Initialize dot11ConfigWapiTable user context
     * if you'd like to pass in a pointer to some data for this
     * table, allocate or set it up here.
     */
    /*
     * a netsnmp_data_list is a simple way to store void pointers. A simple
     * string token is used to add, find or remove pointers.
     */
    user_context = netsnmp_create_data_list("dot11ConfigWapiTable", NULL, NULL);
    
    /*
     * No support for any flags yet, but in the future you would
     * set any flags here.
     */
    flags = 0;
    mad_dev_oid(dot11ConfigWapiTable_oid,CONFIGWAPITALBE,&dot11ConfigWapiTable_oid_size,enterprise_pvivate_oid);
    /*
     * call interface initialization code
     */
    _dot11ConfigWapiTable_initialize_interface(user_context, flags);
} /* initialize_table_dot11ConfigWapiTable */

/**
 * pre-request callback
 *
 *
 * @retval MFD_SUCCESS              : success.
 * @retval MFD_ERROR                : other error
 */
int
dot11ConfigWapiTable_pre_request(dot11ConfigWapiTable_registration_ptr user_context)
{
    DEBUGMSGTL(("verbose:dot11ConfigWapiTable:dot11ConfigWapiTable_pre_request","called\n"));

    /*
     * TODO:510:o: Perform dot11ConfigWapiTable pre-request actions.
     */

    return MFD_SUCCESS;
} /* dot11ConfigWapiTable_pre_request */

/**
 * post-request callback
 *
 *
 * @retval MFD_SUCCESS : success.
 * @retval MFD_ERROR   : other error (ignored)
 */
int
dot11ConfigWapiTable_post_request(dot11ConfigWapiTable_registration_ptr user_context)
{
    DEBUGMSGTL(("verbose:dot11ConfigWapiTable:dot11ConfigWapiTable_post_request","called\n"));

    /*
     * TODO:511:o: Perform dot11ConfigWapiTable pos-request actions.
     */

    return MFD_SUCCESS;
} /* dot11ConfigWapiTable_post_request */


/** @{ */