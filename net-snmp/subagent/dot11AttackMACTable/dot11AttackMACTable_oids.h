/*
 * Note: this file originally auto-generated by mib2c using
 *  : generic-table-oids.m2c 12855 2005-09-27 15:56:08Z rstory $
 *
 * $Id:$
 */
#ifndef DOT11ATTACKMACTABLE_OIDS_H
#define DOT11ATTACKMACTABLE_OIDS_H

#ifdef __cplusplus
extern "C" {
#endif


/* column number definitions for table dot11AttackMACTable */
//#define DOT11ATTACKMACTABLE_OID              1,3,6,1,4,1,31656,6,1,2,11,1

#define COLUMN_ATTACKMACID         1
    
#define COLUMN_ATTACKMAC         2
#define COLUMN_ATTACKMAC_FLAG    (0x1 << 1)
    
#define COLUMN_ATTACKMACROWSTATUS         3
#define COLUMN_ATTACKMACROWSTATUS_FLAG    (0x1 << 2)
    

#define DOT11ATTACKMACTABLE_MIN_COL   COLUMN_ATTACKMACID
#define DOT11ATTACKMACTABLE_MAX_COL   COLUMN_ATTACKMACROWSTATUS
    

    /*
     * TODO:405:r: Review DOT11ATTACKMACTABLE_SETTABLE_COLS macro.
     * OR together all the writable cols.
     */
#define DOT11ATTACKMACTABLE_SETTABLE_COLS (COLUMN_ATTACKMAC_FLAG | COLUMN_ATTACKMACROWSTATUS_FLAG)
    /*
     * TODO:405:r: Review DOT11ATTACKMACTABLE_REQUIRED_COLS macro.
     * OR together all the required rows for row creation.
     * default is writable cols w/out defaults.
     */
#define DOT11ATTACKMACTABLE_REQUIRED_COLS (COLUMN_ATTACKMAC_FLAG | COLUMN_ATTACKMACROWSTATUS_FLAG)
    

#ifdef __cplusplus
}
#endif

#endif /* DOT11ATTACKMACTABLE_OIDS_H */
