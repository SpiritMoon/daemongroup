/*
 * Note: this file originally auto-generated by mib2c using
 *  : generic-table-oids.m2c 12855 2005-09-27 15:56:08Z rstory $
 *
 * $Id:$
 */
#ifndef DOT11ILLEGALDEVICETABLE_OIDS_H
#define DOT11ILLEGALDEVICETABLE_OIDS_H

#ifdef __cplusplus
extern "C" {
#endif


/* column number definitions for table dot11IllegalDeviceTable */
//#define DOT11ILLEGALDEVICETABLE_OID              1,3,6,1,4,1,31656,6,1,2,8,2

#define COLUMN_BLACKLISTDEVICEMACID         1
    
#define COLUMN_BLACKLISTDEVICEMAC         2
#define COLUMN_BLACKLISTDEVICEMAC_FLAG    (0x1 << 1)
    
#define COLUMN_BLACKLISTADDREASON         3
    
#define COLUMN_BLACKLISTDURATION         4
    
#define COLUMN_BLACKLISTADDTYPE         5
    
#define COLUMN_ILLEGALROWSTATUS         6
#define COLUMN_ILLEGALROWSTATUS_FLAG    (0x1 << 5)
    

#define DOT11ILLEGALDEVICETABLE_MIN_COL   COLUMN_BLACKLISTDEVICEMACID
#define DOT11ILLEGALDEVICETABLE_MAX_COL   COLUMN_ILLEGALROWSTATUS
    

    /*
     * TODO:405:r: Review DOT11ILLEGALDEVICETABLE_SETTABLE_COLS macro.
     * OR together all the writable cols.
     */
#define DOT11ILLEGALDEVICETABLE_SETTABLE_COLS (COLUMN_BLACKLISTDEVICEMAC_FLAG | COLUMN_ILLEGALROWSTATUS_FLAG)
    /*
     * TODO:405:r: Review DOT11ILLEGALDEVICETABLE_REQUIRED_COLS macro.
     * OR together all the required rows for row creation.
     * default is writable cols w/out defaults.
     */
#define DOT11ILLEGALDEVICETABLE_REQUIRED_COLS (COLUMN_BLACKLISTDEVICEMAC_FLAG | COLUMN_ILLEGALROWSTATUS_FLAG)
    

#ifdef __cplusplus
}
#endif

#endif /* DOT11ILLEGALDEVICETABLE_OIDS_H */