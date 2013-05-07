/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 14170 $ of $
 *
 * $Id:$
 */
#ifndef DOT11STATICROUTETABLE_DATA_ACCESS_H
#define DOT11STATICROUTETABLE_DATA_ACCESS_H

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
 *** Table dot11StaticRouteTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * DOT11-AC-MIB::dot11StaticRouteTable is subid 1 of dot11RouteGroup.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.2.32.1, length: 12
*/


    int dot11StaticRouteTable_init_data(dot11StaticRouteTable_registration * dot11StaticRouteTable_reg);


    /*
     * TODO:180:o: Review dot11StaticRouteTable cache timeout.
     * The number of seconds before the cache times out
     */
#define DOT11STATICROUTETABLE_CACHE_TIMEOUT   DOT1DTPFDBTABLE_CACHE_TIMEOUT

void dot11StaticRouteTable_container_init(netsnmp_container **container_ptr_ptr,
                             netsnmp_cache *cache);
void dot11StaticRouteTable_container_shutdown(netsnmp_container *container_ptr);

int dot11StaticRouteTable_container_load(netsnmp_container *container);
void dot11StaticRouteTable_container_free(netsnmp_container *container);

int dot11StaticRouteTable_cache_load(netsnmp_container *container);
void dot11StaticRouteTable_cache_free(netsnmp_container *container);

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
    int dot11StaticRouteTable_row_prep( dot11StaticRouteTable_rowreq_ctx *rowreq_ctx);

int dot11StaticRouteTable_validate_index( dot11StaticRouteTable_registration * dot11StaticRouteTable_reg,
                               dot11StaticRouteTable_rowreq_ctx *rowreq_ctx);
int staticRouteIndex_check_index( dot11StaticRouteTable_rowreq_ctx *rowreq_ctx ); /* internal */


#ifdef __cplusplus
}
#endif

#endif /* DOT11STATICROUTETABLE_DATA_ACCESS_H */