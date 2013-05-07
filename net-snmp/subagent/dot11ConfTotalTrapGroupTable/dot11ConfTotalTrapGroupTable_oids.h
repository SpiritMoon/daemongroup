/*
 * Note: this file originally auto-generated by mib2c using
 *  : generic-table-oids.m2c,v 1.10 2004/10/08 23:39:17 rstory Exp $
 *
 * $Id:$
 */
#ifndef DOT11CONFTOTALTRAPGROUPTABLE_OIDS_H
#define DOT11CONFTOTALTRAPGROUPTABLE_OIDS_H

#ifdef __cplusplus
extern "C" {
#endif


/* column number definitions for table dot11ConfTotalTrapGroupTable */
//#define DOT11CONFTOTALTRAPGROUPTABLE_OID              1,3,6,1,4,1,31656,6,1,2,24,1
#define COLUMN_NEWTRAPINDEX		1
#define COLUMN_NEWTRAPNAME		2
#define COLUMN_NEWTRAPDESCR		3
#define COLUMN_NEWTRAPONOFF		4

#define DOT11CONFTOTALTRAPGROUPTABLE_MIN_COL		COLUMN_NEWTRAPINDEX
#define DOT11CONFTOTALTRAPGROUPTABLE_MAX_COL		COLUMN_NEWTRAPONOFF

    /*
     * change flags for writable columns
     */
#define FLAG_NEWTRAPDESCR       (0x1 << 0)
#define FLAG_NEWTRAPONOFF       (0x1 << 1)

#define FLAG_MAX_DOT11CONFTOTALTRAPGROUPTABLE 2

    

#ifdef __cplusplus
}
#endif

#endif /* DOT11CONFTOTALTRAPGROUPTABLE_OIDS_H */