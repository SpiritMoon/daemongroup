/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.32.2.3 $ of : mfd-top.m2c,v $
 *
 * $Id:$
 */
#ifndef DOT11WTPPARATABLE_H
#define DOT11WTPPARATABLE_H

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
config_require(DOT11-WTP-MIB/dot11WtpParaTable/dot11WtpParaTable_interface);
config_require(DOT11-WTP-MIB/dot11WtpParaTable/dot11WtpParaTable_data_access);
config_require(DOT11-WTP-MIB/dot11WtpParaTable/dot11WtpParaTable_data_get);
config_require(DOT11-WTP-MIB/dot11WtpParaTable/dot11WtpParaTable_data_set);
    /* *INDENT-ON*  */

/* OID and column number definitions for  */
#include "dot11WtpParaTable_oids.h"

/* enum definions */
#include "dot11WtpParaTable_enums.h"
#include "ws_dbus_list_interface.h"
/* *********************************************************************
 * function declarations
 */
void init_dot11WtpParaTable(void);

/* *********************************************************************
 * Table declarations
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table dot11WtpParaTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11WtpParaTable is subid 5 of wtpStats.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.1.2.5, length: 12
*/
/* *********************************************************************
 * When you register your mib, you get to provide a generic
 * pointer that will be passed back to you for most of the
 * functions calls.
 *
 * TODO:100:r: Review all context structures
 */
    /*
     * TODO:101:o: |-> Review dot11WtpParaTable registration context.
     */
typedef netsnmp_data_list * dot11WtpParaTable_registration_ptr;

/**********************************************************************/
/*
 * TODO:110:r: |-> Review dot11WtpParaTable data context structure.
 * This structure is used to represent the data for dot11WtpParaTable.
 */
/*
 * This structure contains storage for all the columns defined in the
 * dot11WtpParaTable.
 */
typedef struct dot11WtpParaTable_data_s {

   dbus_parameter parameter;

   long wtpCurrID;
        /*
         * wtpCurBssid(1)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
   char   wtpCurBssid[255];
size_t      wtpCurBssid_len; /* # of char elements, not bytes */
    
        /*
         * wtpGateAddr(2)/IPADDR/ASN_IPADDRESS/u_long(u_long)//l/A/w/e/r/d/h
         */
   u_long   wtpGateAddr;
    
        /*
         * wtpNetElementCode(3)/DisplayString/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
         */
   char   wtpNetElementCode[32];
size_t      wtpNetElementCode_len; /* # of char elements, not bytes */
    
        /*
         * wtpAddrMask(4)/IPADDR/ASN_IPADDRESS/u_long(u_long)//l/A/w/e/r/d/h
         */
   u_long   wtpAddrMask;
    
        /*
         * wtpsupportIfType(5)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
   char   wtpsupportIfType[255];
size_t      wtpsupportIfType_len; /* # of char elements, not bytes */
    
        /*
         * wtpRemoteRestartFun(6)/INTEGER/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
         */
   u_long   wtpRemoteRestartFun;
    
        /*
         * wtpWorkMode(7)/INTEGER/ASN_INTEGER/long(u_long)//l/A/w/E/r/d/h
         */
   u_long   wtpWorkMode;
    
        /*
         * wtpReceiverSignalPWL(8)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
   char   wtpReceiverSignalPWL[255];
size_t      wtpReceiverSignalPWL_len; /* # of char elements, not bytes */
    
        /*
         * wtpMacConApAc(9)/PhysAddress/ASN_OCTET_STR/char(char)//L/A/w/e/r/d/h
         */
   char   wtpMacConApAc[255];
size_t      wtpMacConApAc_len; /* # of char elements, not bytes */
    
        /*
         * wtpState(10)/INTEGER/ASN_INTEGER/long(u_long)//l/A/w/E/r/d/h
         */
   u_long   wtpState;
    
        /*
         * wtpDefenceDOSAttack(11)/INTEGER/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
         */
   u_long   wtpDefenceDOSAttack;
    
        /*
         * wtpIGMPSwitch(12)/INTEGER/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
         */
   u_long   wtpIGMPSwitch;
    
        /*
         * wtpBridgingWorkMode(13)/INTEGER/ASN_INTEGER/long(u_long)//l/A/w/E/r/d/h
         */
   u_long   wtpBridgingWorkMode;
    
        /*
         * wtpCurrAPMode(14)/INTEGER/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
         */
   u_long   wtpCurrAPMode;
    
        /*
         * wtpSupport11B(15)/INTEGER/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
         */
   u_long   wtpSupport11B;
    
        /*
         * wtpSupport11G(16)/INTEGER/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
         */
   u_long   wtpSupport11G;

		/*
         * wtpAccessTime(17)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
   char   wtpAccessTime[255];
size_t      wtpAccessTime_len; /* # of char elements, not bytes */

		/*
         * wtpStartTime(18)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
   char   wtpStartTime[255];
size_t      wtpStartTime_len; /* # of char elements, not bytes */

		/*
         * wtpImagadataTime(19)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
   char   wtpImagadataTime[255];
size_t      wtpImagadataTime_len; /* # of char elements, not bytes */

		/*
         * wtpConfigUpdateTime(20)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
   char   wtpConfigUpdateTime[255];
size_t      wtpConfigUpdateTime_len; /* # of char elements, not bytes */
    
} dot11WtpParaTable_data;


/* *********************************************************************
 * TODO:115:o: |-> Review dot11WtpParaTable undo context.
 * We're just going to use the same data structure for our
 * undo_context. If you want to do something more efficent,
 * define your typedef here.
 */
typedef dot11WtpParaTable_data dot11WtpParaTable_undo_data;

/*
 * TODO:120:r: |-> Review dot11WtpParaTable mib index.
 * This structure is used to represent the index for dot11WtpParaTable.
 */
typedef struct dot11WtpParaTable_mib_index_s {

        /*
         * wtpMacAddr(1)/Dot11BaseWtpIdTC/ASN_OCTET_STR/char(char)//L/A/w/e/r/d/h
         */
        /** 128 - 0(other indexes) - oid length(14) = 113 */
   char   wtpMacAddr[113];
   size_t      wtpMacAddr_len;


} dot11WtpParaTable_mib_index;

    /*
     * TODO:121:r: |   |-> Review dot11WtpParaTable max index length.
     * If you KNOW that your indexes will never exceed a certain
     * length, update this macro to that length.
     *
     * BE VERY CAREFUL TO TAKE INTO ACCOUNT THE MAXIMUM
     * POSSIBLE LENGHT FOR EVERY VARIABLE LENGTH INDEX!
     * Guessing 128 - col/entry(2)  - oid len(12)
*/
#define MAX_dot11WtpParaTable_IDX_LEN     114


/* *********************************************************************
 * TODO:130:o: |-> Review dot11WtpParaTable Row request (rowreq) context.
 * When your functions are called, you will be passed a
 * dot11WtpParaTable_rowreq_ctx pointer.
 */
typedef struct dot11WtpParaTable_rowreq_ctx_s {

    /** this must be first for container compare to work */
    netsnmp_index        oid_idx;
    oid                  oid_tmp[MAX_dot11WtpParaTable_IDX_LEN];
    
    dot11WtpParaTable_mib_index        tbl_idx;
    
    dot11WtpParaTable_data              data;
    dot11WtpParaTable_undo_data       * undo;
    unsigned int                column_set_flags; /* flags for set columns */


    /*
     * flags per row. Currently, the first (lower) 8 bits are reserved
     * for the user. See mfd.h for other flags.
     */
    u_int                       rowreq_flags;

    /*
     * implementor's context pointer (provided during registration)
     */
    dot11WtpParaTable_registration_ptr dot11WtpParaTable_reg;

    /*
     * TODO:131:o: |   |-> Add useful data to dot11WtpParaTable rowreq context.
     */
    
    /*
     * storage for future expansion
     */
    netsnmp_data_list             *dot11WtpParaTable_data_list;

} dot11WtpParaTable_rowreq_ctx;

typedef struct dot11WtpParaTable_ref_rowreq_ctx_s {
    dot11WtpParaTable_rowreq_ctx *rowreq_ctx;
} dot11WtpParaTable_ref_rowreq_ctx;

/* *********************************************************************
 * function prototypes
 */
    int dot11WtpParaTable_pre_request(dot11WtpParaTable_registration_ptr user_context);
    int dot11WtpParaTable_post_request(dot11WtpParaTable_registration_ptr user_context);

    int dot11WtpParaTable_check_dependencies(dot11WtpParaTable_rowreq_ctx * rowreq_ctx); 
    int dot11WtpParaTable_commit(dot11WtpParaTable_rowreq_ctx * rowreq_ctx);

extern oid dot11WtpParaTable_oid[];
extern int dot11WtpParaTable_oid_size;


#include "dot11WtpParaTable_interface.h"
#include "dot11WtpParaTable_data_access.h"
#include "dot11WtpParaTable_data_get.h"
#include "dot11WtpParaTable_data_set.h"

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

#endif /* DOT11WTPPARATABLE_H */