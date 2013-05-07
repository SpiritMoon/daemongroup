/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 14170 $ of $
 *
 * $Id: dot3StatsTable_data_access.h,v 1.1 2010/04/14 08:44:56 tangsiqi Exp $
 */
#ifndef DOT3STATSTABLE_DATA_ACCESS_H
#define DOT3STATSTABLE_DATA_ACCESS_H

#ifdef __cplusplus
extern          "C" {
#endif


    /*
     *********************************************************************
     * function declarations
     */

    /*
     *********************************************************************
     * Table declarations
     */
/**********************************************************************
 **********************************************************************
 ***
 *** Table dot3StatsTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * EtherLike-MIB::dot3StatsTable is subid 2 of dot3.
     * Its status is Current.
     * OID: .1.3.6.1.2.1.10.7.2, length: 9
     */


    int             dot3StatsTable_init_data(dot3StatsTable_registration *
                                             dot3StatsTable_reg);


    /*
     * TODO:180:o: Review dot3StatsTable cache timeout.
     * The number of seconds before the cache times out
     */
#define DOT3STATSTABLE_CACHE_TIMEOUT   60

    void            dot3StatsTable_container_init(netsnmp_container **
                                                  container_ptr_ptr,
                                                  netsnmp_cache * cache);
    void            dot3StatsTable_container_shutdown(netsnmp_container *
                                                      container_ptr);

    int             dot3StatsTable_container_load(netsnmp_container *
                                                  container);
    void            dot3StatsTable_container_free(netsnmp_container *
                                                  container);

    int             dot3StatsTable_cache_load(netsnmp_container *
                                              container);
    void            dot3StatsTable_cache_free(netsnmp_container *
                                              container);

#define MAX_LINE_SIZE 256

    int             dot3StatsTable_row_prep(dot3StatsTable_rowreq_ctx *
                                            rowreq_ctx);



#ifdef __cplusplus
}
#endif
#endif                          /* DOT3STATSTABLE_DATA_ACCESS_H */