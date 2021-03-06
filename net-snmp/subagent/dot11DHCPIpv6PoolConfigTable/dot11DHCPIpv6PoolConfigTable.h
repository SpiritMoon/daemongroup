/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 14170 $ of $
 *
 * $Id:$
 */
#ifndef DOT11DHCPIPV6POOLCONFIGTABLE_H
#define DOT11DHCPIPV6POOLCONFIGTABLE_H

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
config_add_mib(DOT11-AC-MIB)
config_require(DOT11-AC-MIB/dot11DHCPIpv6PoolConfigTable/dot11DHCPIpv6PoolConfigTable_interface)
config_require(DOT11-AC-MIB/dot11DHCPIpv6PoolConfigTable/dot11DHCPIpv6PoolConfigTable_data_access)
config_require(DOT11-AC-MIB/dot11DHCPIpv6PoolConfigTable/dot11DHCPIpv6PoolConfigTable_data_get)
config_require(DOT11-AC-MIB/dot11DHCPIpv6PoolConfigTable/dot11DHCPIpv6PoolConfigTable_data_set)
    /* *INDENT-ON*  */

/* OID and column number definitions for dot11DHCPIpv6PoolConfigTable */
#include "dot11DHCPIpv6PoolConfigTable_oids.h"

/* enum definions */
#include "dot11DHCPIpv6PoolConfigTable_enums.h"

/* *********************************************************************
 * function declarations
 */
void init_dot11DHCPIpv6PoolConfigTable(void);
void shutdown_dot11DHCPIpv6PoolConfigTable(void);

/* *********************************************************************
 * Table declarations
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table dot11DHCPIpv6PoolConfigTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * DOT11-AC-MIB::dot11DHCPIpv6PoolConfigTable is subid 7 of dot11Service.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.2.6.7, length: 12
*/
/* *********************************************************************
 * When you register your mib, you get to provide a generic
 * pointer that will be passed back to you for most of the
 * functions calls.
 *
 * TODO:100:r: Review all context structures
 */
    /*
     * TODO:101:o: |-> Review dot11DHCPIpv6PoolConfigTable registration context.
     */
typedef netsnmp_data_list dot11DHCPIpv6PoolConfigTable_registration;

/**********************************************************************/
/*
 * TODO:110:r: |-> Review dot11DHCPIpv6PoolConfigTable data context structure.
 * This structure is used to represent the data for dot11DHCPIpv6PoolConfigTable.
 */
/*
 * This structure contains storage for all the columns defined in the
 * dot11DHCPIpv6PoolConfigTable.
 */
typedef struct dot11DHCPIpv6PoolConfigTable_data_s {
	u_long	 slot_id;
    
        /*
         * Ipv6DHCPPoolName(2)/DisplayString/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
         */
   char   Ipv6DHCPPoolName[128];
size_t      Ipv6DHCPPoolName_len; /* # of char elements, not bytes */
    
        /*
         * IPv6PoolStartAddr(3)/InetAddressIPv6/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
         */
   char   IPv6PoolStartAddr[128];
size_t      IPv6PoolStartAddr_len; /* # of char elements, not bytes */
    
        /*
         * IPv6PoolStopAddr(4)/InetAddressIPv6/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
         */
   char   IPv6PoolStopAddr[128];
size_t      IPv6PoolStopAddr_len; /* # of char elements, not bytes */
    
        /*
         * IPv6NetPrefixLen(5)/INTEGER/ASN_INTEGER/long(long)//l/A/W/e/R/d/h
         */
   long   IPv6NetPrefixLen;
    
        /*
         * FirDNSServerIPv6Address(6)/InetAddressIPv6/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
         */
   char   FirDNSServerIPv6Address[128];
size_t      FirDNSServerIPv6Address_len; /* # of char elements, not bytes */
    
        /*
         * SeconDNSServerIPv6Address(7)/InetAddressIPv6/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
         */
   char   SeconDNSServerIPv6Address[128];
size_t      SeconDNSServerIPv6Address_len; /* # of char elements, not bytes */
    
        /*
         * Ipv6LeasePeriod(8)/TICKS/ASN_TIMETICKS/u_long(u_long)//l/A/W/e/r/d/h
         */
   u_long   Ipv6LeasePeriod;
    
        /*
         * Ipv6DHCPRowStatus(9)/RowStatus/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
         */
   u_long   Ipv6DHCPRowStatus;
    
        /*
         * SysIPv6GWAddr(10)/InetAddressIPv6/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
   char   SysIPv6GWAddr[50];
size_t      SysIPv6GWAddr_len; /* # of char elements, not bytes */
    
} dot11DHCPIpv6PoolConfigTable_data;


/* *********************************************************************
 * TODO:115:o: |-> Review dot11DHCPIpv6PoolConfigTable undo context.
 * We're just going to use the same data structure for our
 * undo_context. If you want to do something more efficent,
 * define your typedef here.
 */
typedef dot11DHCPIpv6PoolConfigTable_data dot11DHCPIpv6PoolConfigTable_undo_data;

/*
 * TODO:120:r: |-> Review dot11DHCPIpv6PoolConfigTable mib index.
 * This structure is used to represent the index for dot11DHCPIpv6PoolConfigTable.
 */
typedef struct dot11DHCPIpv6PoolConfigTable_mib_index_s {

        /*
         * Ipv6DHCPID(1)/INTEGER/ASN_INTEGER/long(long)//l/A/W/e/r/d/h
         */
   long   Ipv6DHCPID;


} dot11DHCPIpv6PoolConfigTable_mib_index;

    /*
     * TODO:121:r: |   |-> Review dot11DHCPIpv6PoolConfigTable max index length.
     * If you KNOW that your indexes will never exceed a certain
     * length, update this macro to that length.
*/
#define MAX_dot11DHCPIpv6PoolConfigTable_IDX_LEN     1


/* *********************************************************************
 * TODO:130:o: |-> Review dot11DHCPIpv6PoolConfigTable Row request (rowreq) context.
 * When your functions are called, you will be passed a
 * dot11DHCPIpv6PoolConfigTable_rowreq_ctx pointer.
 */
typedef struct dot11DHCPIpv6PoolConfigTable_rowreq_ctx_s {

    /** this must be first for container compare to work */
    netsnmp_index        oid_idx;
    oid                  oid_tmp[MAX_dot11DHCPIpv6PoolConfigTable_IDX_LEN];
    
    dot11DHCPIpv6PoolConfigTable_mib_index        tbl_idx;
    
    dot11DHCPIpv6PoolConfigTable_data              data;
    dot11DHCPIpv6PoolConfigTable_undo_data       * undo;
    unsigned int                column_set_flags; /* flags for set columns */


    /*
     * flags per row. Currently, the first (lower) 8 bits are reserved
     * for the user. See mfd.h for other flags.
     */
    u_int                       rowreq_flags;

    /*
     * TODO:131:o: |   |-> Add useful data to dot11DHCPIpv6PoolConfigTable rowreq context.
     */
    
    /*
     * storage for future expansion
     */
    netsnmp_data_list             *dot11DHCPIpv6PoolConfigTable_data_list;

} dot11DHCPIpv6PoolConfigTable_rowreq_ctx;

typedef struct dot11DHCPIpv6PoolConfigTable_ref_rowreq_ctx_s {
    dot11DHCPIpv6PoolConfigTable_rowreq_ctx *rowreq_ctx;
} dot11DHCPIpv6PoolConfigTable_ref_rowreq_ctx;

/* *********************************************************************
 * function prototypes
 */
    int dot11DHCPIpv6PoolConfigTable_pre_request(dot11DHCPIpv6PoolConfigTable_registration * user_context);
    int dot11DHCPIpv6PoolConfigTable_post_request(dot11DHCPIpv6PoolConfigTable_registration * user_context,
        int rc);

    int dot11DHCPIpv6PoolConfigTable_rowreq_ctx_init(dot11DHCPIpv6PoolConfigTable_rowreq_ctx *rowreq_ctx,
                                   void *user_init_ctx);
    void dot11DHCPIpv6PoolConfigTable_rowreq_ctx_cleanup(dot11DHCPIpv6PoolConfigTable_rowreq_ctx *rowreq_ctx);

    int dot11DHCPIpv6PoolConfigTable_check_dependencies(dot11DHCPIpv6PoolConfigTable_rowreq_ctx * rowreq_ctx); 
    int dot11DHCPIpv6PoolConfigTable_commit(dot11DHCPIpv6PoolConfigTable_rowreq_ctx * rowreq_ctx);

    dot11DHCPIpv6PoolConfigTable_rowreq_ctx *
                  dot11DHCPIpv6PoolConfigTable_row_find_by_mib_index(dot11DHCPIpv6PoolConfigTable_mib_index *mib_idx);

extern oid dot11DHCPIpv6PoolConfigTable_oid[];
extern int dot11DHCPIpv6PoolConfigTable_oid_size;


#include "dot11DHCPIpv6PoolConfigTable_interface.h"
#include "dot11DHCPIpv6PoolConfigTable_data_access.h"
#include "dot11DHCPIpv6PoolConfigTable_data_get.h"
#include "dot11DHCPIpv6PoolConfigTable_data_set.h"

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

#endif /* DOT11DHCPIPV6POOLCONFIGTABLE_H */
/** @} */
