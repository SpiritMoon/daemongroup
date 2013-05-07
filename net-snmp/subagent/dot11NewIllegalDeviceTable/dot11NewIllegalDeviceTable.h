/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.32.2.3 $ of : mfd-top.m2c,v $
 *
 * $Id:$
 */
#ifndef DOT11NEWILLEGALDEVICETABLE_H
#define DOT11NEWILLEGALDEVICETABLE_H

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
config_require(DOT11-AC-MIB/dot11NewIllegalDeviceTable/dot11NewIllegalDeviceTable_interface);
config_require(DOT11-AC-MIB/dot11NewIllegalDeviceTable/dot11NewIllegalDeviceTable_data_access);
config_require(DOT11-AC-MIB/dot11NewIllegalDeviceTable/dot11NewIllegalDeviceTable_data_get);
config_require(DOT11-AC-MIB/dot11NewIllegalDeviceTable/dot11NewIllegalDeviceTable_data_set);
    /* *INDENT-ON*  */

/* OID and column number definitions for  */
#include "dot11NewIllegalDeviceTable_oids.h"

/* enum definions */
#include "dot11NewIllegalDeviceTable_enums.h"
#include "ws_dbus_list_interface.h"

/* *********************************************************************
 * function declarations
 */
void init_dot11NewIllegalDeviceTable(void);

/* *********************************************************************
 * Table declarations
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table dot11NewIllegalDeviceTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11NewIllegalDeviceTable is subid 3 of dot11WhiteBlackList.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.2.8.3, length: 12
*/
/* *********************************************************************
 * When you register your mib, you get to provide a generic
 * pointer that will be passed back to you for most of the
 * functions calls.
 *
 * TODO:100:r: Review all context structures
 */
    /*
     * TODO:101:o: |-> Review dot11NewIllegalDeviceTable registration context.
     */
typedef netsnmp_data_list * dot11NewIllegalDeviceTable_registration_ptr;

/**********************************************************************/
/*
 * TODO:110:r: |-> Review dot11NewIllegalDeviceTable data context structure.
 * This structure is used to represent the data for dot11NewIllegalDeviceTable.
 */
/*
 * This structure contains storage for all the columns defined in the
 * dot11NewIllegalDeviceTable.
 */
typedef struct dot11NewIllegalDeviceTable_data_s {
    
        /*
         * NewblackListDeviceMAC(2)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
   char   NewblackListDeviceMAC[255];
size_t      NewblackListDeviceMAC_len; /* # of char elements, not bytes */
    
        /*
         * NewblackListAddReason(3)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
   char   NewblackListAddReason[255];
size_t      NewblackListAddReason_len; /* # of char elements, not bytes */
    
        /*
         * NewblackListDuration(4)/UNSIGNED32/ASN_UNSIGNED/u_long(u_long)//l/A/w/e/r/d/h
         */
   u_long   NewblackListDuration;
    
        /*
         * NewblackListAddType(5)/INTEGER/ASN_INTEGER/long(u_long)//l/A/w/E/r/d/h
         */
   u_long   NewblackListAddType;
    
} dot11NewIllegalDeviceTable_data;


/*
 * TODO:120:r: |-> Review dot11NewIllegalDeviceTable mib index.
 * This structure is used to represent the index for dot11NewIllegalDeviceTable.
 */
typedef struct dot11NewIllegalDeviceTable_mib_index_s {

        /*
         * NewblackListDeviceMacID(1)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
         */
   long   NewblackListDeviceMacID;


} dot11NewIllegalDeviceTable_mib_index;

    /*
     * TODO:121:r: |   |-> Review dot11NewIllegalDeviceTable max index length.
     * If you KNOW that your indexes will never exceed a certain
     * length, update this macro to that length.
*/
#define MAX_dot11NewIllegalDeviceTable_IDX_LEN     1


/* *********************************************************************
 * TODO:130:o: |-> Review dot11NewIllegalDeviceTable Row request (rowreq) context.
 * When your functions are called, you will be passed a
 * dot11NewIllegalDeviceTable_rowreq_ctx pointer.
 */
typedef struct dot11NewIllegalDeviceTable_rowreq_ctx_s {

    /** this must be first for container compare to work */
    netsnmp_index        oid_idx;
    oid                  oid_tmp[MAX_dot11NewIllegalDeviceTable_IDX_LEN];
    
    dot11NewIllegalDeviceTable_mib_index        tbl_idx;
    
    dot11NewIllegalDeviceTable_data              data;

    /*
     * flags per row. Currently, the first (lower) 8 bits are reserved
     * for the user. See mfd.h for other flags.
     */
    u_int                       rowreq_flags;

    /*
     * implementor's context pointer (provided during registration)
     */
    dot11NewIllegalDeviceTable_registration_ptr dot11NewIllegalDeviceTable_reg;

    /*
     * TODO:131:o: |   |-> Add useful data to dot11NewIllegalDeviceTable rowreq context.
     */
    
    /*
     * storage for future expansion
     */
    netsnmp_data_list             *dot11NewIllegalDeviceTable_data_list;

} dot11NewIllegalDeviceTable_rowreq_ctx;

typedef struct dot11NewIllegalDeviceTable_ref_rowreq_ctx_s {
    dot11NewIllegalDeviceTable_rowreq_ctx *rowreq_ctx;
} dot11NewIllegalDeviceTable_ref_rowreq_ctx;

/* *********************************************************************
 * function prototypes
 */
    int dot11NewIllegalDeviceTable_pre_request(dot11NewIllegalDeviceTable_registration_ptr user_context);
    int dot11NewIllegalDeviceTable_post_request(dot11NewIllegalDeviceTable_registration_ptr user_context);


extern oid dot11NewIllegalDeviceTable_oid[];
extern int dot11NewIllegalDeviceTable_oid_size;


#include "dot11NewIllegalDeviceTable_interface.h"
#include "dot11NewIllegalDeviceTable_data_access.h"
#include "dot11NewIllegalDeviceTable_data_get.h"
#include "dot11NewIllegalDeviceTable_data_set.h"

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

#endif /* DOT11NEWILLEGALDEVICETABLE_H */