/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.32.2.3 $ of : mfd-top.m2c,v $
 *
 * $Id:$
 */
#ifndef DOT11WTPCHANNELTABLE_H
#define DOT11WTPCHANNELTABLE_H

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
config_require(DOT11-WTP-MIB/dot11WtpChannelTable/dot11WtpChannelTable_interface);
config_require(DOT11-WTP-MIB/dot11WtpChannelTable/dot11WtpChannelTable_data_access);
config_require(DOT11-WTP-MIB/dot11WtpChannelTable/dot11WtpChannelTable_data_get);
config_require(DOT11-WTP-MIB/dot11WtpChannelTable/dot11WtpChannelTable_data_set);
    /* *INDENT-ON*  */

/* OID and column number definitions for  */
#include "dot11WtpChannelTable_oids.h"

/* enum definions */
#include "dot11WtpChannelTable_enums.h"
#include "ws_dbus_list_interface.h"

/* *********************************************************************
 * function declarations
 */
void init_dot11WtpChannelTable(void);

/* *********************************************************************
 * Table declarations
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table dot11WtpChannelTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11WtpChannelTable is subid 1 of wtpBaseWtps.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.1.7.1, length: 12
*/
/* *********************************************************************
 * When you register your mib, you get to provide a generic
 * pointer that will be passed back to you for most of the
 * functions calls.
 *
 * TODO:100:r: Review all context structures
 */
    /*
     * TODO:101:o: |-> Review dot11WtpChannelTable registration context.
     */
typedef netsnmp_data_list * dot11WtpChannelTable_registration_ptr;

/**********************************************************************/
/*
 * TODO:110:r: |-> Review dot11WtpChannelTable data context structure.
 * This structure is used to represent the data for dot11WtpChannelTable.
 */
/*
 * This structure contains storage for all the columns defined in the
 * dot11WtpChannelTable.
 */
typedef struct dot11WtpChannelTable_data_s {
    
        /*
         * wtpPathPhyErrPack(1)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
         */
   u_long   wtpPathPhyErrPack;
    
        /*
         * wtpPathMacErrPack(2)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
         */
   u_long   wtpPathMacErrPack;
    
        /*
         * wtpPathFrameResRate(3)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
         */
   u_long   wtpPathFrameResRate;
    
        /*
         * wtpPathErrFrameRate(4)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
         */
   u_long   wtpPathErrFrameRate;
    
        /*
         * wtpMonitorTime(5)/TICKS/ASN_TIMETICKS/u_long(u_long)//l/A/w/e/r/d/h
         */
   u_long   wtpMonitorTime;
    
        /*
         * wtpSignalPathOfTerm(6)/INTEGER32/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
         */
   long   wtpSignalPathOfTerm;
    
} dot11WtpChannelTable_data;


/*
 * TODO:120:r: |-> Review dot11WtpChannelTable mib index.
 * This structure is used to represent the index for dot11WtpChannelTable.
 */
typedef struct dot11WtpChannelTable_mib_index_s {

        /*
         * wtpMacAddr(1)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
        /** 128 - 0(other indexes) - oid length(14) = 113 */
   char   wtpMacAddr[113];
   size_t      wtpMacAddr_len;


} dot11WtpChannelTable_mib_index;

    /*
     * TODO:121:r: |   |-> Review dot11WtpChannelTable max index length.
     * If you KNOW that your indexes will never exceed a certain
     * length, update this macro to that length.
     *
     * BE VERY CAREFUL TO TAKE INTO ACCOUNT THE MAXIMUM
     * POSSIBLE LENGHT FOR EVERY VARIABLE LENGTH INDEX!
     * Guessing 128 - col/entry(2)  - oid len(12)
*/
#define MAX_dot11WtpChannelTable_IDX_LEN     114


/* *********************************************************************
 * TODO:130:o: |-> Review dot11WtpChannelTable Row request (rowreq) context.
 * When your functions are called, you will be passed a
 * dot11WtpChannelTable_rowreq_ctx pointer.
 */
typedef struct dot11WtpChannelTable_rowreq_ctx_s {

    /** this must be first for container compare to work */
    netsnmp_index        oid_idx;
    oid                  oid_tmp[MAX_dot11WtpChannelTable_IDX_LEN];
    
    dot11WtpChannelTable_mib_index        tbl_idx;
    
    dot11WtpChannelTable_data              data;

    /*
     * flags per row. Currently, the first (lower) 8 bits are reserved
     * for the user. See mfd.h for other flags.
     */
    u_int                       rowreq_flags;

    /*
     * implementor's context pointer (provided during registration)
     */
    dot11WtpChannelTable_registration_ptr dot11WtpChannelTable_reg;

    /*
     * TODO:131:o: |   |-> Add useful data to dot11WtpChannelTable rowreq context.
     */
    
    /*
     * storage for future expansion
     */
    netsnmp_data_list             *dot11WtpChannelTable_data_list;

} dot11WtpChannelTable_rowreq_ctx;

typedef struct dot11WtpChannelTable_ref_rowreq_ctx_s {
    dot11WtpChannelTable_rowreq_ctx *rowreq_ctx;
} dot11WtpChannelTable_ref_rowreq_ctx;

/* *********************************************************************
 * function prototypes
 */
    int dot11WtpChannelTable_pre_request(dot11WtpChannelTable_registration_ptr user_context);
    int dot11WtpChannelTable_post_request(dot11WtpChannelTable_registration_ptr user_context);


extern oid dot11WtpChannelTable_oid[];
extern int dot11WtpChannelTable_oid_size;


#include "dot11WtpChannelTable_interface.h"
#include "dot11WtpChannelTable_data_access.h"
#include "dot11WtpChannelTable_data_get.h"
#include "dot11WtpChannelTable_data_set.h"

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

#endif /* DOT11WTPCHANNELTABLE_H */