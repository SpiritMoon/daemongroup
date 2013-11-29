/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 14170 $ of $
 *
 * $Id:$
 */
#ifndef DOT11DHCPIPV6POOLCONFIGTABLE_DATA_ACCESS_H
#define DOT11DHCPIPV6POOLCONFIGTABLE_DATA_ACCESS_H

#ifdef __cplusplus
extern "C" {
#endif

#include "autelanWtpGroup.h"

/* *********************************************************************
 * function declarations
 */

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


    int dot11DHCPIpv6PoolConfigTable_init_data(dot11DHCPIpv6PoolConfigTable_registration * dot11DHCPIpv6PoolConfigTable_reg);


    /*
     * TODO:180:o: Review dot11DHCPIpv6PoolConfigTable cache timeout.
     * The number of seconds before the cache times out
     */
#define DOT11DHCPIPV6POOLCONFIGTABLE_CACHE_TIMEOUT   DOT1DTPFDBTABLE_CACHE_TIMEOUT

void dot11DHCPIpv6PoolConfigTable_container_init(netsnmp_container **container_ptr_ptr,
                             netsnmp_cache *cache);
void dot11DHCPIpv6PoolConfigTable_container_shutdown(netsnmp_container *container_ptr);

int dot11DHCPIpv6PoolConfigTable_container_load(netsnmp_container *container);
void dot11DHCPIpv6PoolConfigTable_container_free(netsnmp_container *container);

int dot11DHCPIpv6PoolConfigTable_cache_load(netsnmp_container *container);
void dot11DHCPIpv6PoolConfigTable_cache_free(netsnmp_container *container);

    /*
    ***************************************************
    ***             START EXAMPLE CODE              ***
    ***---------------------------------------------***/
/* *********************************************************************
 * Since we have no idea how you really access your data, we'll go with
 * a worst case example: a flat text file.
 */
#define MAX_LINE_SIZE 256
    /*
    ***---------------------------------------------***
    ***              END  EXAMPLE CODE              ***
    ***************************************************/
    int dot11DHCPIpv6PoolConfigTable_row_prep( dot11DHCPIpv6PoolConfigTable_rowreq_ctx *rowreq_ctx);

int dot11DHCPIpv6PoolConfigTable_validate_index( dot11DHCPIpv6PoolConfigTable_registration * dot11DHCPIpv6PoolConfigTable_reg,
                               dot11DHCPIpv6PoolConfigTable_rowreq_ctx *rowreq_ctx);
int Ipv6DHCPID_check_index( dot11DHCPIpv6PoolConfigTable_rowreq_ctx *rowreq_ctx ); /* internal */


#ifdef __cplusplus
}
#endif

#endif /* DOT11DHCPIPV6POOLCONFIGTABLE_DATA_ACCESS_H */