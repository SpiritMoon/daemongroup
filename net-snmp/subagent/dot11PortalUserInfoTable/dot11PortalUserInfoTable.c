/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.32.2.3 $ of : mfd-top.m2c,v $ 
 *
 * $Id:$
 */
/** \mainpage MFD helper for dot11PortalUserInfoTable
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
#include "dot11PortalUserInfoTable.h"

#include <net-snmp/agent/mib_modules.h>

#include "dot11PortalUserInfoTable_interface.h"
#include "autelanWtpGroup.h"


#define PORTALUSERRINFOTABLE "1.17.2"

oid dot11PortalUserInfoTable_oid[128] = { 0 };
int dot11PortalUserInfoTable_oid_size = 0;

void initialize_table_dot11PortalUserInfoTable(void);


/**
 * Initializes the dot11PortalUserInfoTable module
 */
void
init_dot11PortalUserInfoTable(void)
{
    DEBUGMSGTL(("verbose:dot11PortalUserInfoTable:init_dot11PortalUserInfoTable","called\n"));

    /*
     * TODO:300:o: Perform dot11PortalUserInfoTable one-time module initialization.
     */
     
    /*
     * here we initialize all the tables we're planning on supporting
     */
    if (should_init("dot11PortalUserInfoTable"))
        initialize_table_dot11PortalUserInfoTable();

} /* init_dot11PortalUserInfoTable */

/**
 * Initialize the table dot11PortalUserInfoTable 
 *    (Define its contents and how it's structured)
 */
void
initialize_table_dot11PortalUserInfoTable(void)
{
    dot11PortalUserInfoTable_registration_ptr user_context;
    u_long flags;

    DEBUGMSGTL(("verbose:dot11PortalUserInfoTable:initialize_table_dot11PortalUserInfoTable","called\n"));

    /*
     * TODO:301:o: Perform dot11PortalUserInfoTable one-time table initialization.
     */

    /*
     * TODO:302:o: |->Initialize dot11PortalUserInfoTable user context
     * if you'd like to pass in a pointer to some data for this
     * table, allocate or set it up here.
     */
    /*
     * a netsnmp_data_list is a simple way to store void pointers. A simple
     * string token is used to add, find or remove pointers.
     */
    user_context = netsnmp_create_data_list("dot11PortalUserInfoTable", NULL, NULL);
    
    /*
     * No support for any flags yet, but in the future you would
     * set any flags here.
     */
    flags = 0;
    
    /*
     * call interface initialization code
     */

	
    mad_dev_oid(dot11PortalUserInfoTable_oid,PORTALUSERRINFOTABLE,&dot11PortalUserInfoTable_oid_size,enterprise_pvivate_oid);
    _dot11PortalUserInfoTable_initialize_interface(user_context, flags);
} /* initialize_table_dot11PortalUserInfoTable */

/**
 * pre-request callback
 *
 *
 * @retval MFD_SUCCESS              : success.
 * @retval MFD_ERROR                : other error
 */
int
dot11PortalUserInfoTable_pre_request(dot11PortalUserInfoTable_registration_ptr user_context)
{
    DEBUGMSGTL(("verbose:dot11PortalUserInfoTable:dot11PortalUserInfoTable_pre_request","called\n"));

    /*
     * TODO:510:o: Perform dot11PortalUserInfoTable pre-request actions.
     */

    return MFD_SUCCESS;
} /* dot11PortalUserInfoTable_pre_request */

/**
 * post-request callback
 *
 *
 * @retval MFD_SUCCESS : success.
 * @retval MFD_ERROR   : other error (ignored)
 */
int
dot11PortalUserInfoTable_post_request(dot11PortalUserInfoTable_registration_ptr user_context)
{
    DEBUGMSGTL(("verbose:dot11PortalUserInfoTable:dot11PortalUserInfoTable_post_request","called\n"));

    /*
     * TODO:511:o: Perform dot11PortalUserInfoTable pos-request actions.
     */

    return MFD_SUCCESS;
} /* dot11PortalUserInfoTable_post_request */


/** @{ */