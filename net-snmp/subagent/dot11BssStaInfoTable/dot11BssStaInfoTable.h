/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 14170 $ of $
 *
 * $Id:$
 */
#ifndef DOT11BSSSTAINFOTABLE_H
#define DOT11BSSSTAINFOTABLE_H

#ifdef __cplusplus
extern "C" {
#endif


/** @addtogroup misc misc: Miscellaneous routines
 *
 * @{
 */
#include <net-snmp/library/asn1.h>

/* other required module components */
    /* *INDENT-OFF*  */
config_add_mib(DOT11-WTP-MIB)
config_require(DOT11-WTP-MIB/dot11BssStaInfoTable/dot11BssStaInfoTable_interface)
config_require(DOT11-WTP-MIB/dot11BssStaInfoTable/dot11BssStaInfoTable_data_access)
config_require(DOT11-WTP-MIB/dot11BssStaInfoTable/dot11BssStaInfoTable_data_get)
config_require(DOT11-WTP-MIB/dot11BssStaInfoTable/dot11BssStaInfoTable_data_set)
    /* *INDENT-ON*  */

/* OID and column number definitions for dot11BssStaInfoTable */
#include "dot11BssStaInfoTable_oids.h"

/* enum definions */
#include "dot11BssStaInfoTable_enums.h"

/* *********************************************************************
 * function declarations
 */
void init_dot11BssStaInfoTable(void);
void shutdown_dot11BssStaInfoTable(void);

/* *********************************************************************
 * Table declarations
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table dot11BssStaInfoTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * DOT11-WTP-MIB::dot11BssStaInfoTable is subid 3 of wtpStation.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.1.8.3, length: 12
*/
/* *********************************************************************
 * When you register your mib, you get to provide a generic
 * pointer that will be passed back to you for most of the
 * functions calls.
 *
 * TODO:100:r: Review all context structures
 */
    /*
     * TODO:101:o: |-> Review dot11BssStaInfoTable registration context.
     */
typedef netsnmp_data_list dot11BssStaInfoTable_registration;

/**********************************************************************/
/*
 * TODO:110:r: |-> Review dot11BssStaInfoTable data context structure.
 * This structure is used to represent the data for dot11BssStaInfoTable.
 */
/*
 * This structure contains storage for all the columns defined in the
 * dot11BssStaInfoTable.
 */
typedef struct dot11BssStaInfoTable_data_s {
    
        /*
         * StaESSID(2)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
   char   StaESSID[255];
size_t      StaESSID_len; /* # of char elements, not bytes */
    
        /*
         * StaIPAddress(3)/IPADDR/ASN_IPADDRESS/u_long(u_long)//l/A/w/e/r/d/h
         */
   u_long   StaIPAddress;
    
} dot11BssStaInfoTable_data;


/*
 * TODO:120:r: |-> Review dot11BssStaInfoTable mib index.
 * This structure is used to represent the index for dot11BssStaInfoTable.
 */
typedef struct dot11BssStaInfoTable_mib_index_s {

        /*
         * wtpMacAddr(1)/Dot11BaseWtpIdTC/ASN_OCTET_STR/char(char)//L/A/w/e/r/d/h
         */
        /** 128 - 3(other indexes) - oid length(14) = 110 */
   char   wtpMacAddr[110];
   size_t      wtpMacAddr_len;

        /*
         * wtpWirelessIfIndex(1)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
         */
   long   wtpWirelessIfIndex;

        /*
         * NewWirelessWlanID(1)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
         */
   long   NewWirelessWlanID;

        /*
         * StaMAC(1)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
        /** 128 - 3(other indexes) - oid length(14) = 110 */
   char   StaMAC[110];
   size_t      StaMAC_len;


} dot11BssStaInfoTable_mib_index;

    /*
     * TODO:121:r: |   |-> Review dot11BssStaInfoTable max index length.
     * If you KNOW that your indexes will never exceed a certain
     * length, update this macro to that length.
     *
     * BE VERY CAREFUL TO TAKE INTO ACCOUNT THE MAXIMUM
     * POSSIBLE LENGHT FOR EVERY VARIABLE LENGTH INDEX!
     * Guessing 128 - col/entry(2)  - oid len(12)
*/
#define MAX_dot11BssStaInfoTable_IDX_LEN     114


/* *********************************************************************
 * TODO:130:o: |-> Review dot11BssStaInfoTable Row request (rowreq) context.
 * When your functions are called, you will be passed a
 * dot11BssStaInfoTable_rowreq_ctx pointer.
 */
typedef struct dot11BssStaInfoTable_rowreq_ctx_s {

    /** this must be first for container compare to work */
    netsnmp_index        oid_idx;
    oid                  oid_tmp[MAX_dot11BssStaInfoTable_IDX_LEN];
    
    dot11BssStaInfoTable_mib_index        tbl_idx;
    
    dot11BssStaInfoTable_data              data;

    /*
     * flags per row. Currently, the first (lower) 8 bits are reserved
     * for the user. See mfd.h for other flags.
     */
    u_int                       rowreq_flags;

    /*
     * TODO:131:o: |   |-> Add useful data to dot11BssStaInfoTable rowreq context.
     */
    
    /*
     * storage for future expansion
     */
    netsnmp_data_list             *dot11BssStaInfoTable_data_list;

} dot11BssStaInfoTable_rowreq_ctx;

typedef struct dot11BssStaInfoTable_ref_rowreq_ctx_s {
    dot11BssStaInfoTable_rowreq_ctx *rowreq_ctx;
} dot11BssStaInfoTable_ref_rowreq_ctx;

/* *********************************************************************
 * function prototypes
 */
    int dot11BssStaInfoTable_pre_request(dot11BssStaInfoTable_registration * user_context);
    int dot11BssStaInfoTable_post_request(dot11BssStaInfoTable_registration * user_context,
        int rc);

    int dot11BssStaInfoTable_rowreq_ctx_init(dot11BssStaInfoTable_rowreq_ctx *rowreq_ctx,
                                   void *user_init_ctx);
    void dot11BssStaInfoTable_rowreq_ctx_cleanup(dot11BssStaInfoTable_rowreq_ctx *rowreq_ctx);


    dot11BssStaInfoTable_rowreq_ctx *
                  dot11BssStaInfoTable_row_find_by_mib_index(dot11BssStaInfoTable_mib_index *mib_idx);

extern oid dot11BssStaInfoTable_oid[];
extern int dot11BssStaInfoTable_oid_size;


#include "dot11BssStaInfoTable_interface.h"
#include "dot11BssStaInfoTable_data_access.h"
#include "dot11BssStaInfoTable_data_get.h"
#include "dot11BssStaInfoTable_data_set.h"

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

#endif /* DOT11BSSSTAINFOTABLE_H */
/** @} */