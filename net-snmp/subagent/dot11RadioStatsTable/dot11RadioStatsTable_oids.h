/*
 * Note: this file originally auto-generated by mib2c using
 *  : generic-table-oids.m2c,v 1.10 2004/10/08 23:39:17 rstory Exp $
 *
 * $Id:$
 */
#ifndef DOT11RADIOSTATSTABLE_OIDS_H
#define DOT11RADIOSTATSTABLE_OIDS_H

#ifdef __cplusplus
extern "C" {
#endif


/* column number definitions for table dot11RadioStatsTable */
//#define DOT11RADIOSTATSTABLE_OID              1,3,6,1,4,1,31656,6,1,1,4,1
#define COLUMN_WTPRADCURRID		1
#define COLUMN_WTPCURTXPOWER		2
#define COLUMN_WTPPOWERMANAGE		3
#define COLUMN_WTPRXPOWER		4
#define COLUMN_WTPCURTAKEFREQPOINT		5
#define COLUMN_WTPCURCONFCHANNEL		6
#define COLUMN_WTPPROTOMODE		7
#define COLUMN_WTPSAMPLETIME		8
#define COLUMN_WTPTERMINALCONRATE		9
#define COLUMN_WTPCONFIGAVAILSPEED		10
#define COLUMN_WTPCONFIGFORCESPEED		11
#define COLUMN_WTPRTSCTSENABLE		12
#define COLUMN_WTPCONFIGBEACONFRAMEBLANK		13

#define DOT11RADIOSTATSTABLE_MIN_COL		COLUMN_WTPRADCURRID
#define DOT11RADIOSTATSTABLE_MAX_COL		COLUMN_WTPCONFIGBEACONFRAMEBLANK

    /*
     * change flags for writable columns
     */
#define FLAG_WTPCURTXPOWER       (0x1 << 0)
#define FLAG_WTPRXPOWER       (0x1 << 1)
#define FLAG_WTPCURCONFCHANNEL       (0x1 << 2)
#define FLAG_WTPPROTOMODE       (0x1 << 3)
#define FLAG_WTPTERMINALCONRATE       (0x1 << 4)
#define FLAG_WTPRTSCTSENABLE       (0x1 << 5)
#define FLAG_WTPCONFIGBEACONFRAMEBLANK       (0x1 << 6)

#define FLAG_MAX_DOT11RADIOSTATSTABLE 7

    

#ifdef __cplusplus
}
#endif

#endif /* DOT11RADIOSTATSTABLE_OIDS_H */