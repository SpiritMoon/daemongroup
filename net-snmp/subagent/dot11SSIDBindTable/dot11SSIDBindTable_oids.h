/*
 * Note: this file originally auto-generated by mib2c using
 *  : generic-table-oids.m2c,v 1.10 2004/10/08 23:39:17 rstory Exp $
 *
 * $Id:$
 */
#ifndef DOT11SSIDBINDTABLE_OIDS_H
#define DOT11SSIDBINDTABLE_OIDS_H

#ifdef __cplusplus
extern "C" {
#endif


/* column number definitions for table dot11SSIDBindTable */
//#define DOT11SSIDBINDTABLE_OID              1,3,6,1,4,1,31656,6,1,2,12,4
#define COLUMN_NEWWTPMAC		1
#define COLUMN_NEWINTERFACE		2
#define COLUMN_NEWWLANID		3
#define COLUMN_BSSIDMAC		4
#define COLUMN_BSSIDBINDROWSTATUS		5

#define DOT11SSIDBINDTABLE_MIN_COL		COLUMN_NEWWTPMAC
#define DOT11SSIDBINDTABLE_MAX_COL		COLUMN_BSSIDBINDROWSTATUS

    /*
     * change flags for writable columns
     */
#define FLAG_BSSIDBINDROWSTATUS       (0x1 << 0)

#define FLAG_MAX_DOT11SSIDBINDTABLE 1

    /*
     * TODO:405:r: Review DOT11SSIDBINDTABLE_REQUIRED_COLS macro.
     * OR together all the required rows for row creation.
     * default is writable cols w/out defaults.
     */
#define DOT11SSIDBINDTABLE_REQUIRED_COLS (FLAG_BSSIDBINDROWSTATUS)
    
    

#ifdef __cplusplus
}
#endif

#endif /* DOT11SSIDBINDTABLE_OIDS_H */