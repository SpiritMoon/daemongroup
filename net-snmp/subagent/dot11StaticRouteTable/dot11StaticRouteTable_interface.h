/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 15899 $ of $
 *
 * $Id:$
 */
/** @ingroup interface: Routines to interface to Net-SNMP
 *
 * \warning This code should not be modified, called directly,
 *          or used to interpret functionality. It is subject to
 *          change at any time.
 * 
 * @{
 */
/*
 * *********************************************************************
 * *********************************************************************
 * *********************************************************************
 * ***                                                               ***
 * ***  NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE  ***
 * ***                                                               ***
 * ***                                                               ***
 * ***       THIS FILE DOES NOT CONTAIN ANY USER EDITABLE CODE.      ***
 * ***                                                               ***
 * ***                                                               ***
 * ***       THE GENERATED CODE IS INTERNAL IMPLEMENTATION, AND      ***
 * ***                                                               ***
 * ***                                                               ***
 * ***    IS SUBJECT TO CHANGE WITHOUT WARNING IN FUTURE RELEASES.   ***
 * ***                                                               ***
 * ***                                                               ***
 * *********************************************************************
 * *********************************************************************
 * *********************************************************************
 */
#ifndef DOT11STATICROUTETABLE_INTERFACE_H
#define DOT11STATICROUTETABLE_INTERFACE_H

#ifdef __cplusplus
extern "C" {
#endif


#include "dot11StaticRouteTable.h"


/* ********************************************************************
 * Table declarations
 */

/* PUBLIC interface initialization routine */
void _dot11StaticRouteTable_initialize_interface(dot11StaticRouteTable_registration * user_ctx,
                                    u_long flags);
void _dot11StaticRouteTable_shutdown_interface(dot11StaticRouteTable_registration * user_ctx);

dot11StaticRouteTable_registration *
dot11StaticRouteTable_registration_get( void );

dot11StaticRouteTable_registration *
dot11StaticRouteTable_registration_set( dot11StaticRouteTable_registration * newreg );

netsnmp_container *dot11StaticRouteTable_container_get( void );
int dot11StaticRouteTable_container_size( void );

u_int dot11StaticRouteTable_dirty_get( void );
void dot11StaticRouteTable_dirty_set( u_int status );

    dot11StaticRouteTable_rowreq_ctx * dot11StaticRouteTable_allocate_rowreq_ctx(void *);
void dot11StaticRouteTable_release_rowreq_ctx(dot11StaticRouteTable_rowreq_ctx *rowreq_ctx);

int dot11StaticRouteTable_index_to_oid(netsnmp_index *oid_idx,
                            dot11StaticRouteTable_mib_index *mib_idx);
int dot11StaticRouteTable_index_from_oid(netsnmp_index *oid_idx,
                              dot11StaticRouteTable_mib_index *mib_idx);

/* *********************************************************************
 * Persistent declarations
 */
/*
 * persistence
 */
#define LINE_TERM_CHAR '$'

void dot11StaticRouteTable_container_init_persistence( netsnmp_container * container );
int dot11StaticRouteTable_container_should_save(dot11StaticRouteTable_rowreq_ctx * rowreq_ctx);


/*
 * access to certain internals. use with caution!
 */
void dot11StaticRouteTable_valid_columns_set(netsnmp_column_info *vc);


#ifdef __cplusplus
}
#endif

#endif /* DOT11STATICROUTETABLE_INTERFACE_H */
/** @} */
