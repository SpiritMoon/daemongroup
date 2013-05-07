/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.18.2.1 $ of : mfd-data-get.m2c,v $
 *
 * $Id:$
 *
 * @file dot11WtpBssidTeminalTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef DOT11WTPBSSIDTEMINALTABLE_DATA_GET_H
#define DOT11WTPBSSIDTEMINALTABLE_DATA_GET_H

#ifdef __cplusplus
extern "C" {
#endif

/* *********************************************************************
 * GET function declarations
 */

/* *********************************************************************
 * GET Table declarations
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table dot11WtpBssidTeminalTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11WtpBssidTeminalTable is subid 3 of wlanPortal.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.1.17.3, length: 12
*/
    /*
     * indexes
     */
    int wtpMacAddr_map_wtpbssid(char **mib_wtpMacAddr_val_ptr_ptr, size_t *mib_wtpMacAddr_val_ptr_len_ptr, char *raw_wtpMacAddr_val_ptr, size_t raw_wtpMacAddr_val_ptr_len, int allow_realloc);
    int wtpWirelessIfIndex_dot11WtpBssidTeminalTable_map(long *mib_wtpWirelessIfIndex_val_ptr, long raw_wtpWirelessIfIndex_val);
    int wlanCurrID_map_wtpbssid(long *mib_wlanCurrID_val_ptr, long raw_wlanCurrID_val);

    int pBssidCurusernum_map(u_long *mib_pBssidCurusernum_val_ptr, u_long raw_pBssidCurusernum_val);
    int pBssidCurusernum_get( dot11WtpBssidTeminalTable_rowreq_ctx *rowreq_ctx, u_long * pBssidCurusernum_val_ptr );
    int pBssidLogoffnum_map(u_long *mib_pBssidLogoffnum_val_ptr, u_long raw_pBssidLogoffnum_val);
    int pBssidLogoffnum_get( dot11WtpBssidTeminalTable_rowreq_ctx *rowreq_ctx, u_long * pBssidLogoffnum_val_ptr );
    int pBssidReqnum_map(u_long *mib_pBssidReqnum_val_ptr, u_long raw_pBssidReqnum_val);
    int pBssidReqnum_get( dot11WtpBssidTeminalTable_rowreq_ctx *rowreq_ctx, u_long * pBssidReqnum_val_ptr );
    int pBssidReqsuccnum_map(u_long *mib_pBssidReqsuccnum_val_ptr, u_long raw_pBssidReqsuccnum_val);
    int pBssidReqsuccnum_get( dot11WtpBssidTeminalTable_rowreq_ctx *rowreq_ctx, u_long * pBssidReqsuccnum_val_ptr );
    int pBssidReqfailnum_map(u_long *mib_pBssidReqfailnum_val_ptr, u_long raw_pBssidReqfailnum_val);
    int pBssidReqfailnum_get( dot11WtpBssidTeminalTable_rowreq_ctx *rowreq_ctx, u_long * pBssidReqfailnum_val_ptr );
    int pBssidReqSuccRate_get( dot11WtpBssidTeminalTable_rowreq_ctx *rowreq_ctx, long * pBssidReqSuccRate_val_ptr );
    int pBssidUserRedirReqNum_get( dot11WtpBssidTeminalTable_rowreq_ctx *rowreq_ctx, u_long * pBssidUserRedirReqNum_val_ptr );
    int pBssidUserRedirReqSuccNum_get( dot11WtpBssidTeminalTable_rowreq_ctx *rowreq_ctx, u_long * pBssidUserRedirReqSuccNum_val_ptr );
    int pBssidUserRedirReqSuccRate_get( dot11WtpBssidTeminalTable_rowreq_ctx *rowreq_ctx, long * pBssidUserRedirReqSuccRate_val_ptr );
    int pBssidRadiusAuthReqNum_get( dot11WtpBssidTeminalTable_rowreq_ctx *rowreq_ctx, u_long * pBssidRadiusAuthReqNum_val_ptr );
    int pBssidRadiusAuthReqSuccNum_get( dot11WtpBssidTeminalTable_rowreq_ctx *rowreq_ctx, u_long * pBssidRadiusAuthReqSuccNum_val_ptr );
    int pBssidRadiusAuthReqSuccRate_get( dot11WtpBssidTeminalTable_rowreq_ctx *rowreq_ctx, long * pBssidRadiusAuthReqSuccRate_val_ptr );
    int pBssidChallengeReqNum_get( dot11WtpBssidTeminalTable_rowreq_ctx *rowreq_ctx, u_long * pBssidChallengeReqNum_val_ptr );
    int pBssidChallengeReqSuccNum_get( dot11WtpBssidTeminalTable_rowreq_ctx *rowreq_ctx, u_long * pBssidChallengeReqSuccNum_val_ptr );
    int pBssidChallengeReqSuccRate_get( dot11WtpBssidTeminalTable_rowreq_ctx *rowreq_ctx, long * pBssidChallengeReqSuccRate_val_ptr );


int dot11WtpBssidTeminalTable_indexes_set_tbl_idx(dot11WtpBssidTeminalTable_mib_index *tbl_idx, char *wtpMacAddr_val_ptr,  size_t wtpMacAddr_val_ptr_len, long wtpWirelessIfIndex_val, long wlanCurrID_val);
int dot11WtpBssidTeminalTable_indexes_set(dot11WtpBssidTeminalTable_rowreq_ctx *rowreq_ctx, char *wtpMacAddr_val_ptr,  size_t wtpMacAddr_val_ptr_len, long wtpWirelessIfIndex_val, long wlanCurrID_val);




#ifdef __cplusplus
}
#endif

#endif /* DOT11WTPBSSIDTEMINALTABLE_DATA_GET_H */
/** @} */