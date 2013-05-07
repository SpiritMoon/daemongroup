/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 14170 $ of $
 *
 * $Id:$
 */
#ifndef DOT11CONFIGIPGROUPTABLE_DATA_ACCESS_H
#define DOT11CONFIGIPGROUPTABLE_DATA_ACCESS_H

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
 *** Table dot11ConfigIpGroupTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * DOT11-AC-MIB::dot11ConfigIpGroupTable is subid 1 of dot11ConfigIpGroup.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.2.26.1, length: 12
*/


    int dot11ConfigIpGroupTable_init_data(dot11ConfigIpGroupTable_registration * dot11ConfigIpGroupTable_reg);


    /*
     * TODO:180:o: Review dot11ConfigIpGroupTable cache timeout.
     * The number of seconds before the cache times out
     */
#define DOT11CONFIGIPGROUPTABLE_CACHE_TIMEOUT   DOT1DTPFDBTABLE_CACHE_TIMEOUT

void dot11ConfigIpGroupTable_container_init(netsnmp_container **container_ptr_ptr,
                             netsnmp_cache *cache);
void dot11ConfigIpGroupTable_container_shutdown(netsnmp_container *container_ptr);

int dot11ConfigIpGroupTable_container_load(netsnmp_container *container);
void dot11ConfigIpGroupTable_container_free(netsnmp_container *container);

int dot11ConfigIpGroupTable_cache_load(netsnmp_container *container);
void dot11ConfigIpGroupTable_cache_free(netsnmp_container *container);

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
    int dot11ConfigIpGroupTable_row_prep( dot11ConfigIpGroupTable_rowreq_ctx *rowreq_ctx);

int dot11ConfigIpGroupTable_validate_index( dot11ConfigIpGroupTable_registration * dot11ConfigIpGroupTable_reg,
                               dot11ConfigIpGroupTable_rowreq_ctx *rowreq_ctx);
int Ifconfigindex_check_index( dot11ConfigIpGroupTable_rowreq_ctx *rowreq_ctx ); /* internal */


#ifdef __cplusplus
}
#endif

#endif /* DOT11CONFIGIPGROUPTABLE_DATA_ACCESS_H */