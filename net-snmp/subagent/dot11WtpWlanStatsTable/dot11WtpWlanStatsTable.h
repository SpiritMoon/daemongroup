/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.32.2.3 $ of : mfd-top.m2c,v $
 *
 * $Id:$
 */
#ifndef DOT11WTPWLANSTATSTABLE_H
#define DOT11WTPWLANSTATSTABLE_H

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
config_require(DOT11-WTP-MIB/dot11WtpWlanStatsTable/dot11WtpWlanStatsTable_interface);
config_require(DOT11-WTP-MIB/dot11WtpWlanStatsTable/dot11WtpWlanStatsTable_data_access);
config_require(DOT11-WTP-MIB/dot11WtpWlanStatsTable/dot11WtpWlanStatsTable_data_get);
config_require(DOT11-WTP-MIB/dot11WtpWlanStatsTable/dot11WtpWlanStatsTable_data_set);
    /* *INDENT-ON*  */

/* OID and column number definitions for  */
#include "dot11WtpWlanStatsTable_oids.h"

/* enum definions */
#include "dot11WtpWlanStatsTable_enums.h"
#include "ws_dbus_list_interface.h"

/* *********************************************************************
 * function declarations
 */
void init_dot11WtpWlanStatsTable(void);

/* *********************************************************************
 * Table declarations
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table dot11WtpWlanStatsTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11WtpWlanStatsTable is subid 3 of wtpWlan.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.33050.6.1.1.5.3, length: 12
*/
/* *********************************************************************
 * When you register your mib, you get to provide a generic
 * pointer that will be passed back to you for most of the
 * functions calls.
 *
 * TODO:100:r: Review all context structures
 */
    /*
     * TODO:101:o: |-> Review dot11WtpWlanStatsTable registration context.
     */
typedef netsnmp_data_list * dot11WtpWlanStatsTable_registration_ptr;

/**********************************************************************/
/*
 * TODO:110:r: |-> Review dot11WtpWlanStatsTable data context structure.
 * This structure is used to represent the data for dot11WtpWlanStatsTable.
 */
/*
 * This structure contains storage for all the columns defined in the
 * dot11WtpWlanStatsTable.
 */
typedef struct dot11WtpWlanStatsTable_data_s {

   unsigned int localwlanCurrID;

   dbus_parameter parameter;

   long wtpCurrID;

   long SecurityID;
    
        /*
         * wtpEAPAuthenSupport(2)/INTEGER/ASN_INTEGER/long(u_long)//l/A/w/E/r/d/h
         */
   u_long   wtpEAPAuthenSupport;
    
        /*
         * wtpLoadBalance(3)/TruthValue/ASN_INTEGER/long(u_long)//l/A/w/E/r/d/h
         */
   u_long   wtpLoadBalance;
    
        /*
         * wirelessSSID(4)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
   char   wirelessSSID[255];
size_t      wirelessSSID_len; /* # of char elements, not bytes */
    
        /*
         * wtpSsidBroadcast(5)/TruthValue/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
         */
   u_long   wtpSsidBroadcast;
    
        /*
         * wtpConfSecurMech(6)/INTEGER/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
         */
   u_long   wtpConfSecurMech;
    
        /*
         * wtpSsidCurrOnlineUsrNum(7)/INTEGER32/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
         */
   long   wtpSsidCurrOnlineUsrNum;
    
        /*
         * wtpAcAppointDistOnlineUsrNum(8)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
         */
   long   wtpAcAppointDistOnlineUsrNum;
    
        /*
         * wtpConRadiusServerIP(9)/IPADDR/ASN_IPADDRESS/u_long(u_long)//l/A/w/e/r/d/h
         */
   u_long   wtpConRadiusServerIP;
    
        /*
         * wtpConRadiusServerPort(10)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
         */
   long   wtpConRadiusServerPort;
    
        /*
         * wtpSSIDPriority(11)/INTEGER/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   wtpSSIDPriority;
    
        /*
         * wtpAttachedFlowThreshold(12)/INTEGER/ASN_INTEGER/long(long)//l/A/W/e/R/d/h
         */
   long   wtpAttachedFlowThreshold;
    
        /*
         * wtpUsrNumAppendThreshold(13)/INTEGER/ASN_INTEGER/long(long)//l/A/W/e/R/d/h
         */
   long   wtpUsrNumAppendThreshold;
    
        /*
         * wtpL2Insulate(14)/INTEGER/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
         */
   u_long   wtpL2Insulate;
    
} dot11WtpWlanStatsTable_data;


/* *********************************************************************
 * TODO:115:o: |-> Review dot11WtpWlanStatsTable undo context.
 * We're just going to use the same data structure for our
 * undo_context. If you want to do something more efficent,
 * define your typedef here.
 */
typedef dot11WtpWlanStatsTable_data dot11WtpWlanStatsTable_undo_data;

/*
 * TODO:120:r: |-> Review dot11WtpWlanStatsTable mib index.
 * This structure is used to represent the index for dot11WtpWlanStatsTable.
 */
typedef struct dot11WtpWlanStatsTable_mib_index_s {

        /*
         * wtpMacAddr(1)/Dot11BaseWtpIdTC/ASN_OCTET_STR/char(char)//L/A/w/e/r/d/h
         */
        /** 128 - 1(other indexes) - oid length(14) = 112 */
   char   wtpMacAddr[112];
   size_t      wtpMacAddr_len;

        /*
         * wlanCurrID(1)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
         */
   long   wlanCurrID;


} dot11WtpWlanStatsTable_mib_index;

    /*
     * TODO:121:r: |   |-> Review dot11WtpWlanStatsTable max index length.
     * If you KNOW that your indexes will never exceed a certain
     * length, update this macro to that length.
     *
     * BE VERY CAREFUL TO TAKE INTO ACCOUNT THE MAXIMUM
     * POSSIBLE LENGHT FOR EVERY VARIABLE LENGTH INDEX!
     * Guessing 128 - col/entry(2)  - oid len(12)
*/
#define MAX_dot11WtpWlanStatsTable_IDX_LEN     114


/* *********************************************************************
 * TODO:130:o: |-> Review dot11WtpWlanStatsTable Row request (rowreq) context.
 * When your functions are called, you will be passed a
 * dot11WtpWlanStatsTable_rowreq_ctx pointer.
 */
typedef struct dot11WtpWlanStatsTable_rowreq_ctx_s {

    /** this must be first for container compare to work */
    netsnmp_index        oid_idx;
    oid                  oid_tmp[MAX_dot11WtpWlanStatsTable_IDX_LEN];
    
    dot11WtpWlanStatsTable_mib_index        tbl_idx;
    
    dot11WtpWlanStatsTable_data              data;
    dot11WtpWlanStatsTable_undo_data       * undo;
    unsigned int                column_set_flags; /* flags for set columns */


    /*
     * flags per row. Currently, the first (lower) 8 bits are reserved
     * for the user. See mfd.h for other flags.
     */
    u_int                       rowreq_flags;

    /*
     * implementor's context pointer (provided during registration)
     */
    dot11WtpWlanStatsTable_registration_ptr dot11WtpWlanStatsTable_reg;

    /*
     * TODO:131:o: |   |-> Add useful data to dot11WtpWlanStatsTable rowreq context.
     */
    
    /*
     * storage for future expansion
     */
    netsnmp_data_list             *dot11WtpWlanStatsTable_data_list;

} dot11WtpWlanStatsTable_rowreq_ctx;

typedef struct dot11WtpWlanStatsTable_ref_rowreq_ctx_s {
    dot11WtpWlanStatsTable_rowreq_ctx *rowreq_ctx;
} dot11WtpWlanStatsTable_ref_rowreq_ctx;

/* *********************************************************************
 * function prototypes
 */
    int dot11WtpWlanStatsTable_pre_request(dot11WtpWlanStatsTable_registration_ptr user_context);
    int dot11WtpWlanStatsTable_post_request(dot11WtpWlanStatsTable_registration_ptr user_context);

    int dot11WtpWlanStatsTable_check_dependencies(dot11WtpWlanStatsTable_rowreq_ctx * rowreq_ctx); 
    int dot11WtpWlanStatsTable_commit(dot11WtpWlanStatsTable_rowreq_ctx * rowreq_ctx);

extern oid dot11WtpWlanStatsTable_oid[];
extern int dot11WtpWlanStatsTable_oid_size;


#include "dot11WtpWlanStatsTable_interface.h"
#include "dot11WtpWlanStatsTable_data_access.h"
#include "dot11WtpWlanStatsTable_data_get.h"
#include "dot11WtpWlanStatsTable_data_set.h"

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

#endif /* DOT11WTPWLANSTATSTABLE_H */
