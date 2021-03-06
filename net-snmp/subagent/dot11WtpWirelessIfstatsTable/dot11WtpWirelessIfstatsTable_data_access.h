/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.12 $ of : mfd-data-access.m2c,v $
 *
 * $Id:$
 */
#ifndef DOT11WTPWIRELESSIFSTATSTABLE_DATA_ACCESS_H
#define DOT11WTPWIRELESSIFSTATSTABLE_DATA_ACCESS_H

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
 *** Table dot11WtpWirelessIfstatsTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11WtpWirelessIfstatsTable is subid 5 of wtpInterface.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.33050.6.1.1.3.5, length: 12
*/


    int dot11WtpWirelessIfstatsTable_init_data(dot11WtpWirelessIfstatsTable_registration_ptr dot11WtpWirelessIfstatsTable_reg);


/*
 * TODO:180:o: Review dot11WtpWirelessIfstatsTable cache timeout.
 * The number of seconds before the cache times out
 */
#define DOT11WTPWIRELESSIFSTATSTABLE_CACHE_TIMEOUT   DOT1DTPFDBTABLE_CACHE_TIMEOUT

void dot11WtpWirelessIfstatsTable_container_init(netsnmp_container **container_ptr_ptr,
                             netsnmp_cache *cache);
int dot11WtpWirelessIfstatsTable_cache_load(netsnmp_container *container);
void dot11WtpWirelessIfstatsTable_cache_free(netsnmp_container *container);

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
    int dot11WtpWirelessIfstatsTable_row_prep( dot11WtpWirelessIfstatsTable_rowreq_ctx *rowreq_ctx);


#ifdef __cplusplus
}
#endif

#endif /* DOT11WTPWIRELESSIFSTATSTABLE_DATA_ACCESS_H */
