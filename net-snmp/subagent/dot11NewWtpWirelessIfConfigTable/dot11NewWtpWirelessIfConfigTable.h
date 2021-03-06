/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.32.2.3 $ of : mfd-top.m2c,v $
 *
 * $Id:$
 */
#ifndef DOT11NEWWTPWIRELESSIFCONFIGTABLE_H
#define DOT11NEWWTPWIRELESSIFCONFIGTABLE_H

#ifdef __cplusplus
extern "C" {
#endif


/** @defgroup misc misc: Miscelaneous routines
 *
 * @{
 */
#include <net-snmp/library/asn1.h>

/* other required module components */
    /* *INDENT-OFF*  */
config_require(DOT11-WTP-MIB/dot11NewWtpWirelessIfConfigTable/dot11NewWtpWirelessIfConfigTable_interface);
config_require(DOT11-WTP-MIB/dot11NewWtpWirelessIfConfigTable/dot11NewWtpWirelessIfConfigTable_data_access);
config_require(DOT11-WTP-MIB/dot11NewWtpWirelessIfConfigTable/dot11NewWtpWirelessIfConfigTable_data_get);
config_require(DOT11-WTP-MIB/dot11NewWtpWirelessIfConfigTable/dot11NewWtpWirelessIfConfigTable_data_set);
    /* *INDENT-ON*  */

/* OID and column number definitions for  */
#include "dot11NewWtpWirelessIfConfigTable_oids.h"

/* enum definions */
#include "dot11NewWtpWirelessIfConfigTable_enums.h"
#include "ws_dbus_list_interface.h"

/* *********************************************************************
 * function declarations
 */
void init_dot11NewWtpWirelessIfConfigTable(void);

/* *********************************************************************
 * Table declarations
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table dot11NewWtpWirelessIfConfigTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11NewWtpWirelessIfConfigTable is subid 9 of wtpInterface.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.1.3.9, length: 12
*/
/* *********************************************************************
 * When you register your mib, you get to provide a generic
 * pointer that will be passed back to you for most of the
 * functions calls.
 *
 * TODO:100:r: Review all context structures
 */
    /*
     * TODO:101:o: |-> Review dot11NewWtpWirelessIfConfigTable registration context.
     */
typedef netsnmp_data_list * dot11NewWtpWirelessIfConfigTable_registration_ptr;

/**********************************************************************/
/*
 * TODO:110:r: |-> Review dot11NewWtpWirelessIfConfigTable data context structure.
 * This structure is used to represent the data for dot11NewWtpWirelessIfConfigTable.
 */
/*
 * This structure contains storage for all the columns defined in the
 * dot11NewWtpWirelessIfConfigTable.
 */
typedef struct dot11NewWtpWirelessIfConfigTable_data_s {
    dbus_parameter parameter;
	long wtpRadCurrID;
        /*
         * NewwtpWirelessIfBeaconIntvl(3)/INTEGER/ASN_INTEGER/long(long)//l/A/W/e/R/d/h
         */
   long   NewwtpWirelessIfBeaconIntvl;
    
        /*
         * NewwtpWirelessIfDtimIntvl(4)/INTEGER/ASN_INTEGER/long(long)//l/A/W/e/R/d/h
         */
   long   NewwtpWirelessIfDtimIntvl;
    
        /*
         * NewwtpWirelessIfShtRetryThld(5)/INTEGER/ASN_INTEGER/long(long)//l/A/W/e/R/d/h
         */
   long   NewwtpWirelessIfShtRetryThld;
    
        /*
         * NewwtpWirelessIfLongRetryThld(6)/INTEGER/ASN_INTEGER/long(long)//l/A/W/e/R/d/h
         */
   long   NewwtpWirelessIfLongRetryThld;
    
        /*
         * NewwtpWirelessIfMaxRxLifetime(7)/UNSIGNED32/ASN_UNSIGNED/u_long(u_long)//l/A/W/e/r/d/h
         */
   u_long   NewwtpWirelessIfMaxRxLifetime;
    
        /*
         * NewWtpPreambleLen(8)/INTEGER/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
         */
   u_long   NewWtpPreambleLen;
    
        /*
         * NewRtsThreshold(9)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   NewRtsThreshold;
    
        /*
         * NewFragThreshlod(10)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   NewFragThreshlod;
    
} dot11NewWtpWirelessIfConfigTable_data;


/* *********************************************************************
 * TODO:115:o: |-> Review dot11NewWtpWirelessIfConfigTable undo context.
 * We're just going to use the same data structure for our
 * undo_context. If you want to do something more efficent,
 * define your typedef here.
 */
typedef dot11NewWtpWirelessIfConfigTable_data dot11NewWtpWirelessIfConfigTable_undo_data;

/*
 * TODO:120:r: |-> Review dot11NewWtpWirelessIfConfigTable mib index.
 * This structure is used to represent the index for dot11NewWtpWirelessIfConfigTable.
 */
typedef struct dot11NewWtpWirelessIfConfigTable_mib_index_s {

        /*
         * NewwtpID(1)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
         */
   long   NewwtpID;

        /*
         * NewapWirelessIfIndex(2)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
         */
   long   NewapWirelessIfIndex;


} dot11NewWtpWirelessIfConfigTable_mib_index;

    /*
     * TODO:121:r: |   |-> Review dot11NewWtpWirelessIfConfigTable max index length.
     * If you KNOW that your indexes will never exceed a certain
     * length, update this macro to that length.
*/
#define MAX_dot11NewWtpWirelessIfConfigTable_IDX_LEN     2


/* *********************************************************************
 * TODO:130:o: |-> Review dot11NewWtpWirelessIfConfigTable Row request (rowreq) context.
 * When your functions are called, you will be passed a
 * dot11NewWtpWirelessIfConfigTable_rowreq_ctx pointer.
 */
typedef struct dot11NewWtpWirelessIfConfigTable_rowreq_ctx_s {

    /** this must be first for container compare to work */
    netsnmp_index        oid_idx;
    oid                  oid_tmp[MAX_dot11NewWtpWirelessIfConfigTable_IDX_LEN];
    
    dot11NewWtpWirelessIfConfigTable_mib_index        tbl_idx;
    
    dot11NewWtpWirelessIfConfigTable_data              data;
    dot11NewWtpWirelessIfConfigTable_undo_data       * undo;
    unsigned int                column_set_flags; /* flags for set columns */


    /*
     * flags per row. Currently, the first (lower) 8 bits are reserved
     * for the user. See mfd.h for other flags.
     */
    u_int                       rowreq_flags;

    /*
     * implementor's context pointer (provided during registration)
     */
    dot11NewWtpWirelessIfConfigTable_registration_ptr dot11NewWtpWirelessIfConfigTable_reg;

    /*
     * TODO:131:o: |   |-> Add useful data to dot11NewWtpWirelessIfConfigTable rowreq context.
     */
    
    /*
     * storage for future expansion
     */
    netsnmp_data_list             *dot11NewWtpWirelessIfConfigTable_data_list;

} dot11NewWtpWirelessIfConfigTable_rowreq_ctx;

typedef struct dot11NewWtpWirelessIfConfigTable_ref_rowreq_ctx_s {
    dot11NewWtpWirelessIfConfigTable_rowreq_ctx *rowreq_ctx;
} dot11NewWtpWirelessIfConfigTable_ref_rowreq_ctx;

/* *********************************************************************
 * function prototypes
 */
    int dot11NewWtpWirelessIfConfigTable_pre_request(dot11NewWtpWirelessIfConfigTable_registration_ptr user_context);
    int dot11NewWtpWirelessIfConfigTable_post_request(dot11NewWtpWirelessIfConfigTable_registration_ptr user_context);

    int dot11NewWtpWirelessIfConfigTable_check_dependencies(dot11NewWtpWirelessIfConfigTable_rowreq_ctx * rowreq_ctx); 
    int dot11NewWtpWirelessIfConfigTable_commit(dot11NewWtpWirelessIfConfigTable_rowreq_ctx * rowreq_ctx);

extern oid dot11NewWtpWirelessIfConfigTable_oid[];
extern int dot11NewWtpWirelessIfConfigTable_oid_size;


#include "dot11NewWtpWirelessIfConfigTable_interface.h"
#include "dot11NewWtpWirelessIfConfigTable_data_access.h"
#include "dot11NewWtpWirelessIfConfigTable_data_get.h"
#include "dot11NewWtpWirelessIfConfigTable_data_set.h"

/*
 * DUMMY markers, ignore
 *
 * TODO:099:x: *************************************************************
 * TODO:199:x: *************************************************************
 * TODO:299:x: *************************************************************
 * TODO:399:x: *************************************************************
 * TODO:499:x: *************************************************************
 */

#ifdef __cplusplus
}
#endif

#endif /* DOT11NEWWTPWIRELESSIFCONFIGTABLE_H */
