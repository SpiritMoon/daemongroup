/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 14170 $ of $
 *
 * $Id:$
 */
#ifndef DOT11NEWCONFIGVLANGROUPTABLE_DATA_ACCESS_H
#define DOT11NEWCONFIGVLANGROUPTABLE_DATA_ACCESS_H

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
 *** Table dot11NewConfigVlanGroupTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * DOT11-AC-MIB::dot11NewConfigVlanGroupTable is subid 2 of dot11ConfigVlanGroup.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.2.22.2, length: 12
*/


    int dot11NewConfigVlanGroupTable_init_data(dot11NewConfigVlanGroupTable_registration * dot11NewConfigVlanGroupTable_reg);


    /*
     * TODO:180:o: Review dot11NewConfigVlanGroupTable cache timeout.
     * The number of seconds before the cache times out
     */
#define DOT11NEWCONFIGVLANGROUPTABLE_CACHE_TIMEOUT   DOT1DTPFDBTABLE_CACHE_TIMEOUT

void dot11NewConfigVlanGroupTable_container_init(netsnmp_container **container_ptr_ptr,
                             netsnmp_cache *cache);
void dot11NewConfigVlanGroupTable_container_shutdown(netsnmp_container *container_ptr);

int dot11NewConfigVlanGroupTable_container_load(netsnmp_container *container);
void dot11NewConfigVlanGroupTable_container_free(netsnmp_container *container);

int dot11NewConfigVlanGroupTable_cache_load(netsnmp_container *container);
void dot11NewConfigVlanGroupTable_cache_free(netsnmp_container *container);

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
    int dot11NewConfigVlanGroupTable_row_prep( dot11NewConfigVlanGroupTable_rowreq_ctx *rowreq_ctx);

int dot11NewConfigVlanGroupTable_validate_index( dot11NewConfigVlanGroupTable_registration * dot11NewConfigVlanGroupTable_reg,
                               dot11NewConfigVlanGroupTable_rowreq_ctx *rowreq_ctx);
int NewVlanID_check_index( dot11NewConfigVlanGroupTable_rowreq_ctx *rowreq_ctx ); /* internal */


#ifdef __cplusplus
}
#endif

#endif /* DOT11NEWCONFIGVLANGROUPTABLE_DATA_ACCESS_H */