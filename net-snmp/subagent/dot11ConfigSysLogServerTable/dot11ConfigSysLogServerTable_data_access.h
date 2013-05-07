/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 14170 $ of $
 *
 * $Id:$
 */
#ifndef DOT11CONFIGSYSLOGSERVERTABLE_DATA_ACCESS_H
#define DOT11CONFIGSYSLOGSERVERTABLE_DATA_ACCESS_H

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
 *** Table dot11ConfigSysLogServerTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * DOT11-AC-MIB::dot11ConfigSysLogServerTable is subid 1 of dot11ConfigSysLogServerGroup.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.2.25.1, length: 12
*/


    int dot11ConfigSysLogServerTable_init_data(dot11ConfigSysLogServerTable_registration * dot11ConfigSysLogServerTable_reg);


    /*
     * TODO:180:o: Review dot11ConfigSysLogServerTable cache timeout.
     * The number of seconds before the cache times out
     */
#define DOT11CONFIGSYSLOGSERVERTABLE_CACHE_TIMEOUT   DOT1DTPFDBTABLE_CACHE_TIMEOUT

void dot11ConfigSysLogServerTable_container_init(netsnmp_container **container_ptr_ptr,
                             netsnmp_cache *cache);
void dot11ConfigSysLogServerTable_container_shutdown(netsnmp_container *container_ptr);

int dot11ConfigSysLogServerTable_container_load(netsnmp_container *container);
void dot11ConfigSysLogServerTable_container_free(netsnmp_container *container);

int dot11ConfigSysLogServerTable_cache_load(netsnmp_container *container);
void dot11ConfigSysLogServerTable_cache_free(netsnmp_container *container);

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
    int dot11ConfigSysLogServerTable_row_prep( dot11ConfigSysLogServerTable_rowreq_ctx *rowreq_ctx);

int dot11ConfigSysLogServerTable_validate_index( dot11ConfigSysLogServerTable_registration * dot11ConfigSysLogServerTable_reg,
                               dot11ConfigSysLogServerTable_rowreq_ctx *rowreq_ctx);
int SyslogIndex_check_index( dot11ConfigSysLogServerTable_rowreq_ctx *rowreq_ctx ); /* internal */


#ifdef __cplusplus
}
#endif

#endif /* DOT11CONFIGSYSLOGSERVERTABLE_DATA_ACCESS_H */