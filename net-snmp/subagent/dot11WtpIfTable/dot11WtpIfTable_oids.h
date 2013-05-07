/*
 * Note: this file originally auto-generated by mib2c using
 *  : generic-table-oids.m2c,v 1.10 2004/10/08 23:39:17 rstory Exp $
 *
 * $Id:$
 */
#ifndef DOT11WTPIFTABLE_OIDS_H
#define DOT11WTPIFTABLE_OIDS_H

#ifdef __cplusplus
extern "C" {
#endif


/* column number definitions for table dot11WtpIfTable */
//#define DOT11WTPIFTABLE_OID              1,3,6,1,4,1,31656,6,1,1,3,1
#define COLUMN_WTPIFINDEX		1
#define COLUMN_WTPMTU		2
#define COLUMN_WTPIFSPEED		3
#define COLUMN_WTPIFPHYADDR		4
#define COLUMN_WTPIFINTRO		5
#define COLUMN_WTPIFNAME		6
#define COLUMN_WTPIFTYPE		7
#define COLUMN_WTPIFADMINSTATUS		8
#define COLUMN_WTPIFOPERSTATUS		9
#define COLUMN_WTPIFLASTCHANGE		10
#define COLUMN_WTPIFUPLINKREALTIMERATE		11
#define COLUMN_WTPIFDOWNLINKREALTIMERATE		12
#define COLUMN_WTPIFUPLINKREALTIMEKBTTERATE		13
#define COLUMN_WTPIFDOWNLINKREALTIMEKBYTERATE		14

#define DOT11WTPIFTABLE_MIN_COL		COLUMN_WTPIFINDEX
#define DOT11WTPIFTABLE_MAX_COL		COLUMN_WTPIFDOWNLINKREALTIMEKBYTERATE

    /*
     * change flags for writable columns
     */
#define FLAG_WTPIFSPEED       (0x1 << 0)
#define FLAG_WTPIFADMINSTATUS       (0x1 << 1)

#define FLAG_MAX_DOT11WTPIFTABLE 2

    

#ifdef __cplusplus
}
#endif

#endif /* DOT11WTPIFTABLE_OIDS_H */