/*
 * Note: this file originally auto-generated by mib2c using
 *  : generic-table-oids.m2c,v 1.10 2004/10/08 23:39:17 rstory Exp $
 *
 * $Id:$
 */
#ifndef DOT11BSSIDWAPIPROTOCOLCONFIGTABLE_OIDS_H
#define DOT11BSSIDWAPIPROTOCOLCONFIGTABLE_OIDS_H

#ifdef __cplusplus
extern "C" {
#endif


/* column number definitions for table dot11BSSIDWAPIProtocolConfigTable */
//#define DOT11BSSIDWAPIPROTOCOLCONFIGTABLE_OID              1,3,6,1,4,1,31656,6,1,1,10,2
#define COLUMN_WAPICONTROLLEDAUTHCONTROL		1
#define COLUMN_WAPICONTROLLEDPORTCONTROL		2
#define COLUMN_WAPIENABLED		3
#define COLUMN_WAPICERTIFICATEUPDATECOUNT		4
#define COLUMN_WAPIMULTICASTUPDATECOUNT		5
#define COLUMN_WAPIUNICASTUPDATECOUNT		6
#define COLUMN_WAPIAUTHSUITESELECTED		7
#define COLUMN_WAPIAUTHSUITEREQUESTED		8

#define DOT11BSSIDWAPIPROTOCOLCONFIGTABLE_MIN_COL		COLUMN_WAPICONTROLLEDAUTHCONTROL
#define DOT11BSSIDWAPIPROTOCOLCONFIGTABLE_MAX_COL		COLUMN_WAPIAUTHSUITEREQUESTED

    /*
     * change flags for writable columns
     */
#define FLAG_WAPIENABLED       (0x1 << 0)
#define FLAG_WAPICERTIFICATEUPDATECOUNT       (0x1 << 1)
#define FLAG_WAPIMULTICASTUPDATECOUNT       (0x1 << 2)
#define FLAG_WAPIUNICASTUPDATECOUNT       (0x1 << 3)

#define FLAG_MAX_DOT11BSSIDWAPIPROTOCOLCONFIGTABLE 4

    

#ifdef __cplusplus
}
#endif

#endif /* DOT11BSSIDWAPIPROTOCOLCONFIGTABLE_OIDS_H */