/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.32.2.3 $ of : mfd-top.m2c,v $
 *
 * $Id:$
 */
#ifndef DOT11SECURITYMECHTABLE_H
#define DOT11SECURITYMECHTABLE_H

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
config_require(DOT11-WTP-MIB/dot11SecurityMechTable/dot11SecurityMechTable_interface);
config_require(DOT11-WTP-MIB/dot11SecurityMechTable/dot11SecurityMechTable_data_access);
config_require(DOT11-WTP-MIB/dot11SecurityMechTable/dot11SecurityMechTable_data_get);
config_require(DOT11-WTP-MIB/dot11SecurityMechTable/dot11SecurityMechTable_data_set);
    /* *INDENT-ON*  */

/* OID and column number definitions for  */
#include "dot11SecurityMechTable_oids.h"

/* enum definions */
#include "dot11SecurityMechTable_enums.h"
#include "ws_dbus_list_interface.h"

/* *********************************************************************
 * function declarations
 */
void init_dot11SecurityMechTable(void);

/* *********************************************************************
 * Table declarations
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table dot11SecurityMechTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11SecurityMechTable is subid 1 of wtpSecurity.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.1.9.1, length: 12
*/
/* *********************************************************************
 * When you register your mib, you get to provide a generic
 * pointer that will be passed back to you for most of the
 * functions calls.
 *
 * TODO:100:r: Review all context structures
 */
    /*
     * TODO:101:o: |-> Review dot11SecurityMechTable registration context.
     */
typedef netsnmp_data_list * dot11SecurityMechTable_registration_ptr;

/**********************************************************************/
/*
 * TODO:110:r: |-> Review dot11SecurityMechTable data context structure.
 * This structure is used to represent the data for dot11SecurityMechTable.
 */
/*
 * This structure contains storage for all the columns defined in the
 * dot11SecurityMechTable.
 */
typedef struct dot11SecurityMechTable_data_s {
	unsigned int localwlanCurrID;
	
    dbus_parameter parameter;

    
        /*
         * wtpWirelessSecurMechName(1)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
   char   wtpWirelessSecurMechName[255];
size_t      wtpWirelessSecurMechName_len; /* # of char elements, not bytes */
    
        /*
         * wtpWirelessSecurMechID(2)/INTEGER/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   wtpWirelessSecurMechID;
    
        /*
         * wtpWirelessSecurMechType(3)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
   char   wtpWirelessSecurMechType[255];
size_t      wtpWirelessSecurMechType_len; /* # of char elements, not bytes */
    
        /*
         * wtpWirelessSecurMechEncryType(4)/INTEGER/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
         */
   u_long   wtpWirelessSecurMechEncryType;
    
        /*
         * wtpWirelessSecurMechSecurPolicyKey(5)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
   char   wtpWirelessSecurMechSecurPolicyKey[255];
size_t      wtpWirelessSecurMechSecurPolicyKey_len; /* # of char elements, not bytes */
    
        /*
         * wtpWirelessSecurMechKeyInputType(6)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
   char   wtpWirelessSecurMechKeyInputType[255];
size_t      wtpWirelessSecurMechKeyInputType_len; /* # of char elements, not bytes */
    
} dot11SecurityMechTable_data;


/* *********************************************************************
 * TODO:115:o: |-> Review dot11SecurityMechTable undo context.
 * We're just going to use the same data structure for our
 * undo_context. If you want to do something more efficent,
 * define your typedef here.
 */
typedef dot11SecurityMechTable_data dot11SecurityMechTable_undo_data;

/*
 * TODO:120:r: |-> Review dot11SecurityMechTable mib index.
 * This structure is used to represent the index for dot11SecurityMechTable.
 */
typedef struct dot11SecurityMechTable_mib_index_s {

        /*
         * wtpMacAddr(1)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
        /** 128 - 1(other indexes) - oid length(14) = 112 */
   char   wtpMacAddr[112];
   size_t      wtpMacAddr_len;

        /*
         * wlanCurrID(1)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
         */
   long   wlanCurrID;


} dot11SecurityMechTable_mib_index;

    /*
     * TODO:121:r: |   |-> Review dot11SecurityMechTable max index length.
     * If you KNOW that your indexes will never exceed a certain
     * length, update this macro to that length.
     *
     * BE VERY CAREFUL TO TAKE INTO ACCOUNT THE MAXIMUM
     * POSSIBLE LENGHT FOR EVERY VARIABLE LENGTH INDEX!
     * Guessing 128 - col/entry(2)  - oid len(12)
*/
#define MAX_dot11SecurityMechTable_IDX_LEN     114


/* *********************************************************************
 * TODO:130:o: |-> Review dot11SecurityMechTable Row request (rowreq) context.
 * When your functions are called, you will be passed a
 * dot11SecurityMechTable_rowreq_ctx pointer.
 */
typedef struct dot11SecurityMechTable_rowreq_ctx_s {

    /** this must be first for container compare to work */
    netsnmp_index        oid_idx;
    oid                  oid_tmp[MAX_dot11SecurityMechTable_IDX_LEN];
    
    dot11SecurityMechTable_mib_index        tbl_idx;
    
    dot11SecurityMechTable_data              data;
    dot11SecurityMechTable_undo_data       * undo;
    unsigned int                column_set_flags; /* flags for set columns */


    /*
     * flags per row. Currently, the first (lower) 8 bits are reserved
     * for the user. See mfd.h for other flags.
     */
    u_int                       rowreq_flags;

    /*
     * implementor's context pointer (provided during registration)
     */
    dot11SecurityMechTable_registration_ptr dot11SecurityMechTable_reg;

    /*
     * TODO:131:o: |   |-> Add useful data to dot11SecurityMechTable rowreq context.
     */
    
    /*
     * storage for future expansion
     */
    netsnmp_data_list             *dot11SecurityMechTable_data_list;

} dot11SecurityMechTable_rowreq_ctx;

typedef struct dot11SecurityMechTable_ref_rowreq_ctx_s {
    dot11SecurityMechTable_rowreq_ctx *rowreq_ctx;
} dot11SecurityMechTable_ref_rowreq_ctx;

/* *********************************************************************
 * function prototypes
 */
    int dot11SecurityMechTable_pre_request(dot11SecurityMechTable_registration_ptr user_context);
    int dot11SecurityMechTable_post_request(dot11SecurityMechTable_registration_ptr user_context);

    int dot11SecurityMechTable_check_dependencies(dot11SecurityMechTable_rowreq_ctx * rowreq_ctx); 
    int dot11SecurityMechTable_commit(dot11SecurityMechTable_rowreq_ctx * rowreq_ctx);

extern oid dot11SecurityMechTable_oid[];
extern int dot11SecurityMechTable_oid_size;


#include "dot11SecurityMechTable_interface.h"
#include "dot11SecurityMechTable_data_access.h"
#include "dot11SecurityMechTable_data_get.h"
#include "dot11SecurityMechTable_data_set.h"

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

#endif /* DOT11SECURITYMECHTABLE_H */