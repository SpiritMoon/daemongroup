/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.32.2.3 $ of : mfd-top.m2c,v $ 
 *
 * $Id:$
 */
/** \mainpage MFD helper for dot11ConfigWtpTable
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
#include "dot11ConfigWtpTable.h"

#include <net-snmp/agent/mib_modules.h>

#include "dot11ConfigWtpTable_interface.h"
#include "autelanWtpGroup.h"

#define CONFIGWTP	"2.12.2"

oid dot11ConfigWtpTable_oid[128] = { 0 };
int dot11ConfigWtpTable_oid_size = 0;

void initialize_table_dot11ConfigWtpTable(void);


/**
 * Initializes the dot11ConfigWtpTable module
 */
void
init_dot11ConfigWtpTable(void)
{
    DEBUGMSGTL(("verbose:dot11ConfigWtpTable:init_dot11ConfigWtpTable","called\n"));

    /*
     * TODO:300:o: Perform dot11ConfigWtpTable one-time module initialization.
     */
     
    /*
     * here we initialize all the tables we're planning on supporting
     */
    if (should_init("dot11ConfigWtpTable"))
        initialize_table_dot11ConfigWtpTable();

} /* init_dot11ConfigWtpTable */

/**
 * Initialize the table dot11ConfigWtpTable 
 *    (Define its contents and how it's structured)
 */
void
initialize_table_dot11ConfigWtpTable(void)
{
    dot11ConfigWtpTable_registration_ptr user_context;
    u_long flags;

    DEBUGMSGTL(("verbose:dot11ConfigWtpTable:initialize_table_dot11ConfigWtpTable","called\n"));

    /*
     * TODO:301:o: Perform dot11ConfigWtpTable one-time table initialization.
     */

    /*
     * TODO:302:o: |->Initialize dot11ConfigWtpTable user context
     * if you'd like to pass in a pointer to some data for this
     * table, allocate or set it up here.
     */
    /*
     * a netsnmp_data_list is a simple way to store void pointers. A simple
     * string token is used to add, find or remove pointers.
     */
    user_context = netsnmp_create_data_list("dot11ConfigWtpTable", NULL, NULL);
    
    /*
     * No support for any flags yet, but in the future you would
     * set any flags here.
     */
    flags = 0;
    
    /*
     * call interface initialization code
     */
    mad_dev_oid(dot11ConfigWtpTable_oid,CONFIGWTP,&dot11ConfigWtpTable_oid_size,enterprise_pvivate_oid);
    _dot11ConfigWtpTable_initialize_interface(user_context, flags);
} /* initialize_table_dot11ConfigWtpTable */

/**
 * pre-request callback
 *
 *
 * @retval MFD_SUCCESS              : success.
 * @retval MFD_ERROR                : other error
 */
int
dot11ConfigWtpTable_pre_request(dot11ConfigWtpTable_registration_ptr user_context)
{
    DEBUGMSGTL(("verbose:dot11ConfigWtpTable:dot11ConfigWtpTable_pre_request","called\n"));

    /*
     * TODO:510:o: Perform dot11ConfigWtpTable pre-request actions.
     */

    return MFD_SUCCESS;
} /* dot11ConfigWtpTable_pre_request */

/**
 * post-request callback
 *
 *
 * @retval MFD_SUCCESS : success.
 * @retval MFD_ERROR   : other error (ignored)
 */
int
dot11ConfigWtpTable_post_request(dot11ConfigWtpTable_registration_ptr user_context)
{
    DEBUGMSGTL(("verbose:dot11ConfigWtpTable:dot11ConfigWtpTable_post_request","called\n"));

    /*
     * TODO:511:o: Perform dot11ConfigWtpTable pos-request actions.
     */

    return MFD_SUCCESS;
} /* dot11ConfigWtpTable_post_request */


/** @{ */