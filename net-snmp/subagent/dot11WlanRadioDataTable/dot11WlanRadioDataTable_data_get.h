/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.18.2.1 $ of : mfd-data-get.m2c,v $
 *
 * $Id:$
 *
 * @file dot11WlanRadioDataTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef DOT11WLANRADIODATATABLE_DATA_GET_H
#define DOT11WLANRADIODATATABLE_DATA_GET_H

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
 *** Table dot11WlanRadioDataTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11WlanRadioDataTable is subid 2 of wlanData.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.1.16.2, length: 12
*/
    /*
     * indexes
     */
    int wlanCurrID_map(long *mib_wlanCurrID_val_ptr, long raw_wlanCurrID_val);

    int WlanradioRecvFlow_map(unsigned long long *mib_WlanradioRecvFlow_val_ptr, unsigned long long raw_WlanradioRecvFlow_val);
    int WlanradioRecvFlow_get( dot11WlanRadioDataTable_rowreq_ctx *rowreq_ctx, unsigned long long * WlanradioRecvFlow_val_ptr );
    int WlanradioSendFlow_map(unsigned long long *mib_WlanradioSendFlow_val_ptr, unsigned long long raw_WlanradioSendFlow_val);
    int WlanradioSendFlow_get( dot11WlanRadioDataTable_rowreq_ctx *rowreq_ctx, unsigned long long * WlanradioSendFlow_val_ptr );
    int WlanradioReSendFrames_map(unsigned long long *mib_WlanradioReSendFrames_val_ptr, unsigned long long raw_WlanradioReSendFrames_val);
    int WlanradioReSendFrames_get( dot11WlanRadioDataTable_rowreq_ctx *rowreq_ctx, unsigned long long * WlanradioReSendFrames_val_ptr );
    int WlanradioSendDiscardFrames_map(unsigned long long *mib_WlanradioSendDiscardFrames_val_ptr, unsigned long long raw_WlanradioSendDiscardFrames_val);
    int WlanradioSendDiscardFrames_get( dot11WlanRadioDataTable_rowreq_ctx *rowreq_ctx, unsigned long long * WlanradioSendDiscardFrames_val_ptr );
    int WlanradioSendErrFrames_map(unsigned long long *mib_WlanradioSendErrFrames_val_ptr, unsigned long long raw_WlanradioSendErrFrames_val);
    int WlanradioSendErrFrames_get( dot11WlanRadioDataTable_rowreq_ctx *rowreq_ctx, unsigned long long * WlanradioSendErrFrames_val_ptr );
    int WlanradioRecvDiscardFrames_map(unsigned long long *mib_WlanradioRecvDiscardFrames_val_ptr, unsigned long long raw_WlanradioRecvDiscardFrames_val);
    int WlanradioRecvDiscardFrames_get( dot11WlanRadioDataTable_rowreq_ctx *rowreq_ctx, unsigned long long * WlanradioRecvDiscardFrames_val_ptr );
    int WlanradioReRecvFrames_map(unsigned long long *mib_WlanradioReRecvFrames_val_ptr, unsigned long long raw_WlanradioReRecvFrames_val);
    int WlanradioReRecvFrames_get( dot11WlanRadioDataTable_rowreq_ctx *rowreq_ctx, unsigned long long * WlanradioReRecvFrames_val_ptr );
    int WlanradioRecvSpeed_map(long *mib_WlanradioRecvSpeed_val_ptr, long raw_WlanradioRecvSpeed_val);
    int WlanradioRecvSpeed_get( dot11WlanRadioDataTable_rowreq_ctx *rowreq_ctx, long * WlanradioRecvSpeed_val_ptr );
    int WlanradioSendSpeed_map(long *mib_WlanradioSendSpeed_val_ptr, long raw_WlanradioSendSpeed_val);
    int WlanradioSendSpeed_get( dot11WlanRadioDataTable_rowreq_ctx *rowreq_ctx, long * WlanradioSendSpeed_val_ptr );


int dot11WlanRadioDataTable_indexes_set_tbl_idx(dot11WlanRadioDataTable_mib_index *tbl_idx, long wlanCurrID_val);
int dot11WlanRadioDataTable_indexes_set(dot11WlanRadioDataTable_rowreq_ctx *rowreq_ctx, long wlanCurrID_val);




#ifdef __cplusplus
}
#endif

#endif /* DOT11WLANRADIODATATABLE_DATA_GET_H */
/** @} */