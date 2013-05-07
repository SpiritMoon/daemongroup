/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.32.2.3 $ of : mfd-top.m2c,v $
 *
 * $Id:$
 */
#ifndef DOT11WLANSTATIONTABLE_H
#define DOT11WLANSTATIONTABLE_H

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
config_require(DOT11-AC-MIB/dot11WlanStationTable/dot11WlanStationTable_interface);
config_require(DOT11-AC-MIB/dot11WlanStationTable/dot11WlanStationTable_data_access);
config_require(DOT11-AC-MIB/dot11WlanStationTable/dot11WlanStationTable_data_get);
config_require(DOT11-AC-MIB/dot11WlanStationTable/dot11WlanStationTable_data_set);
    /* *INDENT-ON*  */

/* OID and column number definitions for  */
#include "dot11WlanStationTable_oids.h"

/* enum definions */
#include "dot11WlanStationTable_enums.h"
#include "ws_dbus_list_interface.h"

/* *********************************************************************
 * function declarations
 */
void init_dot11WlanStationTable(void);

/* *********************************************************************
 * Table declarations
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table dot11WlanStationTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11WlanStationTable is subid 3 of dot11wlanConfig.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.2.13.3, length: 12
*/
/* *********************************************************************
 * When you register your mib, you get to provide a generic
 * pointer that will be passed back to you for most of the
 * functions calls.
 *
 * TODO:100:r: Review all context structures
 */
    /*
     * TODO:101:o: |-> Review dot11WlanStationTable registration context.
     */
typedef netsnmp_data_list * dot11WlanStationTable_registration_ptr;

/**********************************************************************/
/*
 * TODO:110:r: |-> Review dot11WlanStationTable data context structure.
 * This structure is used to represent the data for dot11WlanStationTable.
 */
/*
 * This structure contains storage for all the columns defined in the
 * dot11WlanStationTable.
 */
typedef struct dot11WlanStationTable_data_s {
    
        /*
         * StaOnlineTime(2)/TICKS/ASN_TIMETICKS/u_long(u_long)//l/A/w/e/r/d/h
         */

   dbus_parameter parameter;

   u_long localWlanID;
    	
   u_long   StaOnlineTime;
    
        /*
         * StaAccessTime(3)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
   char   StaAccessTime[255];
size_t      StaAccessTime_len; /* # of char elements, not bytes */
    
        /*
         * StaUplinkTrafficLimitThreshold(4)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   StaUplinkTrafficLimitThreshold;
    
        /*
         * StaDownlinkTrafficLimitThreshold(5)/INTEGER32/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   StaDownlinkTrafficLimitThreshold;
    
        /*
         * StaUplinkBitRate(6)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
   unsigned long long   StaUplinkBitRate;
    
        /*
         * StaDownlinkBitRate(7)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
   unsigned long long   StaDownlinkBitRate;


	
} dot11WlanStationTable_data;


/* *********************************************************************
 * TODO:115:o: |-> Review dot11WlanStationTable undo context.
 * We're just going to use the same data structure for our
 * undo_context. If you want to do something more efficent,
 * define your typedef here.
 */
typedef dot11WlanStationTable_data dot11WlanStationTable_undo_data;

/*
 * TODO:120:r: |-> Review dot11WlanStationTable mib index.
 * This structure is used to represent the index for dot11WlanStationTable.
 */
typedef struct dot11WlanStationTable_mib_index_s {

        /*
         * wlanID(1)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
         */
   long   wlanID;

        /*
         * StaMacAddr(1)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
        /** 128 - 1(other indexes) - oid length(14) = 112 */
   char   StaMacAddr[112];
   size_t      StaMacAddr_len;


} dot11WlanStationTable_mib_index;

    /*
     * TODO:121:r: |   |-> Review dot11WlanStationTable max index length.
     * If you KNOW that your indexes will never exceed a certain
     * length, update this macro to that length.
     *
     * BE VERY CAREFUL TO TAKE INTO ACCOUNT THE MAXIMUM
     * POSSIBLE LENGHT FOR EVERY VARIABLE LENGTH INDEX!
     * Guessing 128 - col/entry(2)  - oid len(12)
*/
#define MAX_dot11WlanStationTable_IDX_LEN     114


/* *********************************************************************
 * TODO:130:o: |-> Review dot11WlanStationTable Row request (rowreq) context.
 * When your functions are called, you will be passed a
 * dot11WlanStationTable_rowreq_ctx pointer.
 */
typedef struct dot11WlanStationTable_rowreq_ctx_s {

    /** this must be first for container compare to work */
    netsnmp_index        oid_idx;
    oid                  oid_tmp[MAX_dot11WlanStationTable_IDX_LEN];
    
    dot11WlanStationTable_mib_index        tbl_idx;
    
    dot11WlanStationTable_data              data;
    dot11WlanStationTable_undo_data       * undo;
    unsigned int                column_set_flags; /* flags for set columns */


    /*
     * flags per row. Currently, the first (lower) 8 bits are reserved
     * for the user. See mfd.h for other flags.
     */
    u_int                       rowreq_flags;

    /*
     * implementor's context pointer (provided during registration)
     */
    dot11WlanStationTable_registration_ptr dot11WlanStationTable_reg;

    /*
     * TODO:131:o: |   |-> Add useful data to dot11WlanStationTable rowreq context.
     */
    
    /*
     * storage for future expansion
     */
    netsnmp_data_list             *dot11WlanStationTable_data_list;

} dot11WlanStationTable_rowreq_ctx;

typedef struct dot11WlanStationTable_ref_rowreq_ctx_s {
    dot11WlanStationTable_rowreq_ctx *rowreq_ctx;
} dot11WlanStationTable_ref_rowreq_ctx;

/* *********************************************************************
 * function prototypes
 */
    int dot11WlanStationTable_pre_request(dot11WlanStationTable_registration_ptr user_context);
    int dot11WlanStationTable_post_request(dot11WlanStationTable_registration_ptr user_context);

    int dot11WlanStationTable_check_dependencies(dot11WlanStationTable_rowreq_ctx * rowreq_ctx); 
    int dot11WlanStationTable_commit(dot11WlanStationTable_rowreq_ctx * rowreq_ctx);

extern oid dot11WlanStationTable_oid[];
extern int dot11WlanStationTable_oid_size;


#include "dot11WlanStationTable_interface.h"
#include "dot11WlanStationTable_data_access.h"
#include "dot11WlanStationTable_data_get.h"
#include "dot11WlanStationTable_data_set.h"

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

#endif /* DOT11WLANSTATIONTABLE_H */