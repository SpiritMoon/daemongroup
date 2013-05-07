/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.32.2.3 $ of : mfd-top.m2c,v $
 *
 * $Id:$
 */
#ifndef DOT11RADIOSTATSTABLE_H
#define DOT11RADIOSTATSTABLE_H

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
config_require(DOT11-WTP-MIB/dot11RadioStatsTable/dot11RadioStatsTable_interface);
config_require(DOT11-WTP-MIB/dot11RadioStatsTable/dot11RadioStatsTable_data_access);
config_require(DOT11-WTP-MIB/dot11RadioStatsTable/dot11RadioStatsTable_data_get);
config_require(DOT11-WTP-MIB/dot11RadioStatsTable/dot11RadioStatsTable_data_set);
    /* *INDENT-ON*  */

/* OID and column number definitions for  */
#include "dot11RadioStatsTable_oids.h"

/* enum definions */
#include "dot11RadioStatsTable_enums.h"
#include "ws_dbus_list_interface.h"

/* *********************************************************************
 * function declarations
 */
void init_dot11RadioStatsTable(void);

/* *********************************************************************
 * Table declarations
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table dot11RadioStatsTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11RadioStatsTable is subid 1 of wtpRadio.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.1.4.1, length: 12
*/
/* *********************************************************************
 * When you register your mib, you get to provide a generic
 * pointer that will be passed back to you for most of the
 * functions calls.
 *
 * TODO:100:r: Review all context structures
 */
    /*
     * TODO:101:o: |-> Review dot11RadioStatsTable registration context.
     */
typedef netsnmp_data_list * dot11RadioStatsTable_registration_ptr;

/**********************************************************************/
/*
 * TODO:110:r: |-> Review dot11RadioStatsTable data context structure.
 * This structure is used to represent the data for dot11RadioStatsTable.
 */
/*
 * This structure contains storage for all the columns defined in the
 * dot11RadioStatsTable.
 */
typedef struct dot11RadioStatsTable_data_s {

   dbus_parameter parameter;
   long wtpRadCurrID;
   long setwtpRadCurrID;
        /*
         * wtpCurTxPower(2)/INTEGER/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   wtpCurTxPower;
    
        /*
         * wtpPowerManage(3)/INTEGER/ASN_INTEGER/long(u_long)//l/A/w/E/r/d/h
         */
   u_long   wtpPowerManage;
    
        /*
         * wtpRxPower(4)/INTEGER/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   wtpRxPower;
    
        /*
         * wtpCurTakeFreqPoint(5)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
         */
   long   wtpCurTakeFreqPoint;
    
        /*
         * wtpCurConfChannel(6)/INTEGER/ASN_INTEGER/long(long)//l/A/W/e/R/d/h
         */
   long   wtpCurConfChannel;
    
        /*
         * wtpProtoMode(7)/INTEGER/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
         */
   u_long   wtpProtoMode;
    
        /*
         * wtpSampleTime(8)/TICKS/ASN_TIMETICKS/u_long(u_long)//l/A/w/e/r/d/h
         */
   u_long   wtpSampleTime;
    
        /*
         * wtpTerminalConRate(9)/INTEGER/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   wtpTerminalConRate;
    
        /*
         * wtpConfigAvailSpeed(10)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
   char   wtpConfigAvailSpeed[255];
size_t      wtpConfigAvailSpeed_len; /* # of char elements, not bytes */
    
        /*
         * wtpConfigForceSpeed(11)/OCTETSTR/ASN_OCTET_STR/char(char)//L/A/w/e/r/d/h
         */
   char   wtpConfigForceSpeed[255];
size_t      wtpConfigForceSpeed_len; /* # of char elements, not bytes */
    
        /*
         * wtpRTSCTSEnable(12)/INTEGER/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
         */
   u_long   wtpRTSCTSEnable;
    
        /*
         * wtpconfigBeaconFrameBlank(13)/INTEGER/ASN_INTEGER/long(long)//l/A/W/e/R/d/h
         */
   long   wtpconfigBeaconFrameBlank;
    
} dot11RadioStatsTable_data;


/* *********************************************************************
 * TODO:115:o: |-> Review dot11RadioStatsTable undo context.
 * We're just going to use the same data structure for our
 * undo_context. If you want to do something more efficent,
 * define your typedef here.
 */
typedef dot11RadioStatsTable_data dot11RadioStatsTable_undo_data;

/*
 * TODO:120:r: |-> Review dot11RadioStatsTable mib index.
 * This structure is used to represent the index for dot11RadioStatsTable.
 */
typedef struct dot11RadioStatsTable_mib_index_s {

        /*
         * wtpMacAddr(1)/Dot11BaseWtpIdTC/ASN_OCTET_STR/char(char)//L/A/w/e/r/d/h
         */
        /** 128 - 1(other indexes) - oid length(14) = 112 */
   char   wtpMacAddr[112];
   size_t      wtpMacAddr_len;

        /*
         * wtpRadCurrID(1)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
         */
   long   wtpRadCurrID;


} dot11RadioStatsTable_mib_index;

    /*
     * TODO:121:r: |   |-> Review dot11RadioStatsTable max index length.
     * If you KNOW that your indexes will never exceed a certain
     * length, update this macro to that length.
     *
     * BE VERY CAREFUL TO TAKE INTO ACCOUNT THE MAXIMUM
     * POSSIBLE LENGHT FOR EVERY VARIABLE LENGTH INDEX!
     * Guessing 128 - col/entry(2)  - oid len(12)
*/
#define MAX_dot11RadioStatsTable_IDX_LEN     114


/* *********************************************************************
 * TODO:130:o: |-> Review dot11RadioStatsTable Row request (rowreq) context.
 * When your functions are called, you will be passed a
 * dot11RadioStatsTable_rowreq_ctx pointer.
 */
typedef struct dot11RadioStatsTable_rowreq_ctx_s {

    /** this must be first for container compare to work */
    netsnmp_index        oid_idx;
    oid                  oid_tmp[MAX_dot11RadioStatsTable_IDX_LEN];
    
    dot11RadioStatsTable_mib_index        tbl_idx;
    
    dot11RadioStatsTable_data              data;
    dot11RadioStatsTable_undo_data       * undo;
    unsigned int                column_set_flags; /* flags for set columns */


    /*
     * flags per row. Currently, the first (lower) 8 bits are reserved
     * for the user. See mfd.h for other flags.
     */
    u_int                       rowreq_flags;

    /*
     * implementor's context pointer (provided during registration)
     */
    dot11RadioStatsTable_registration_ptr dot11RadioStatsTable_reg;

    /*
     * TODO:131:o: |   |-> Add useful data to dot11RadioStatsTable rowreq context.
     */
    
    /*
     * storage for future expansion
     */
    netsnmp_data_list             *dot11RadioStatsTable_data_list;

} dot11RadioStatsTable_rowreq_ctx;

typedef struct dot11RadioStatsTable_ref_rowreq_ctx_s {
    dot11RadioStatsTable_rowreq_ctx *rowreq_ctx;
} dot11RadioStatsTable_ref_rowreq_ctx;

/* *********************************************************************
 * function prototypes
 */
    int dot11RadioStatsTable_pre_request(dot11RadioStatsTable_registration_ptr user_context);
    int dot11RadioStatsTable_post_request(dot11RadioStatsTable_registration_ptr user_context);

    int dot11RadioStatsTable_check_dependencies(dot11RadioStatsTable_rowreq_ctx * rowreq_ctx); 
    int dot11RadioStatsTable_commit(dot11RadioStatsTable_rowreq_ctx * rowreq_ctx);

extern oid dot11RadioStatsTable_oid[];
extern int dot11RadioStatsTable_oid_size;


#include "dot11RadioStatsTable_interface.h"
#include "dot11RadioStatsTable_data_access.h"
#include "dot11RadioStatsTable_data_get.h"
#include "dot11RadioStatsTable_data_set.h"

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

#endif /* DOT11RADIOSTATSTABLE_H */