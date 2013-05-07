/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.18.2.1 $ of : mfd-data-get.m2c,v $
 *
 * $Id:$
 *
 * @file dot11WtpWAPIConfigTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef DOT11WTPWAPICONFIGTABLE_DATA_GET_H
#define DOT11WTPWAPICONFIGTABLE_DATA_GET_H

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
 *** Table dot11WtpWAPIConfigTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11WtpWAPIConfigTable is subid 10 of wtpWAPI.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.1.10.10, length: 12
*/
    /*
     * indexes
     */
    int WapiWlanID_map_wwconfig(long *mib_WapiWlanID_val_ptr, long raw_WapiWlanID_val);

    int wtpWapiConfigVersion_map(long *mib_wtpWapiConfigVersion_val_ptr, long raw_wtpWapiConfigVersion_val);
    int wtpWapiConfigVersion_get( dot11WtpWAPIConfigTable_rowreq_ctx *rowreq_ctx, long * wtpWapiConfigVersion_val_ptr );
    int wtpWapiControlledAuthenControlenabled_map(u_long *mib_wtpWapiControlledAuthenControlenabled_val_ptr, u_long raw_wtpWapiControlledAuthenControlenabled_val);
    int wtpWapiControlledAuthenControlenabled_get( dot11WtpWAPIConfigTable_rowreq_ctx *rowreq_ctx, u_long * wtpWapiControlledAuthenControlenabled_val_ptr );
    int wtpWapiControlledPortControl_map(char **mib_wtpWapiControlledPortControl_val_ptr_ptr, size_t *mib_wtpWapiControlledPortControl_val_ptr_len_ptr, char *raw_wtpWapiControlledPortControl_val_ptr, size_t raw_wtpWapiControlledPortControl_val_ptr_len, int allow_realloc);
    int wtpWapiControlledPortControl_get( dot11WtpWAPIConfigTable_rowreq_ctx *rowreq_ctx, char **wtpWapiControlledPortControl_val_ptr_ptr, size_t *wtpWapiControlledPortControl_val_ptr_len_ptr );
    int wtpWapiWPIOptionImplement_map(u_long *mib_wtpWapiWPIOptionImplement_val_ptr, u_long raw_wtpWapiWPIOptionImplement_val);
    int wtpWapiWPIOptionImplement_get( dot11WtpWAPIConfigTable_rowreq_ctx *rowreq_ctx, u_long * wtpWapiWPIOptionImplement_val_ptr );
    int wtpWapiWPIPreauthImplemented_map(u_long *mib_wtpWapiWPIPreauthImplemented_val_ptr, u_long raw_wtpWapiWPIPreauthImplemented_val);
    int wtpWapiWPIPreauthImplemented_get( dot11WtpWAPIConfigTable_rowreq_ctx *rowreq_ctx, u_long * wtpWapiWPIPreauthImplemented_val_ptr );
    int wtpWapiEnabled_map(u_long *mib_wtpWapiEnabled_val_ptr, u_long raw_wtpWapiEnabled_val);
    int wtpWapiEnabled_get( dot11WtpWAPIConfigTable_rowreq_ctx *rowreq_ctx, u_long * wtpWapiEnabled_val_ptr );
    int wtpWapiPreauthEnabled_map(u_long *mib_wtpWapiPreauthEnabled_val_ptr, u_long raw_wtpWapiPreauthEnabled_val);
    int wtpWapiPreauthEnabled_get( dot11WtpWAPIConfigTable_rowreq_ctx *rowreq_ctx, u_long * wtpWapiPreauthEnabled_val_ptr );
    int wtpWapiUnicastKeysSupported_map(u_long *mib_wtpWapiUnicastKeysSupported_val_ptr, u_long raw_wtpWapiUnicastKeysSupported_val);
    int wtpWapiUnicastKeysSupported_get( dot11WtpWAPIConfigTable_rowreq_ctx *rowreq_ctx, u_long * wtpWapiUnicastKeysSupported_val_ptr );
    int wtpWapiUnicastRekeyMethod_map(u_long *mib_wtpWapiUnicastRekeyMethod_val_ptr, u_long raw_wtpWapiUnicastRekeyMethod_val);
    int wtpWapiUnicastRekeyMethod_get( dot11WtpWAPIConfigTable_rowreq_ctx *rowreq_ctx, u_long * wtpWapiUnicastRekeyMethod_val_ptr );
    int wtpWapiUnicastRekeyTime_map(u_long *mib_wtpWapiUnicastRekeyTime_val_ptr, u_long raw_wtpWapiUnicastRekeyTime_val);
    int wtpWapiUnicastRekeyTime_get( dot11WtpWAPIConfigTable_rowreq_ctx *rowreq_ctx, u_long * wtpWapiUnicastRekeyTime_val_ptr );
    int wtpWapiUnicastRekeyPackets_map(u_long *mib_wtpWapiUnicastRekeyPackets_val_ptr, u_long raw_wtpWapiUnicastRekeyPackets_val);
    int wtpWapiUnicastRekeyPackets_get( dot11WtpWAPIConfigTable_rowreq_ctx *rowreq_ctx, u_long * wtpWapiUnicastRekeyPackets_val_ptr );
    int wtpWapiMulticastCipher_map(char **mib_wtpWapiMulticastCipher_val_ptr_ptr, size_t *mib_wtpWapiMulticastCipher_val_ptr_len_ptr, char *raw_wtpWapiMulticastCipher_val_ptr, size_t raw_wtpWapiMulticastCipher_val_ptr_len, int allow_realloc);
    int wtpWapiMulticastCipher_get( dot11WtpWAPIConfigTable_rowreq_ctx *rowreq_ctx, char **wtpWapiMulticastCipher_val_ptr_ptr, size_t *wtpWapiMulticastCipher_val_ptr_len_ptr );
    int wtpWapiMulticastRekeyMethod_map(long *mib_wtpWapiMulticastRekeyMethod_val_ptr, long raw_wtpWapiMulticastRekeyMethod_val);
    int wtpWapiMulticastRekeyMethod_get( dot11WtpWAPIConfigTable_rowreq_ctx *rowreq_ctx, long * wtpWapiMulticastRekeyMethod_val_ptr );
    int wtpWapiMulticastRekeyTime_map(u_long *mib_wtpWapiMulticastRekeyTime_val_ptr, u_long raw_wtpWapiMulticastRekeyTime_val);
    int wtpWapiMulticastRekeyTime_get( dot11WtpWAPIConfigTable_rowreq_ctx *rowreq_ctx, u_long * wtpWapiMulticastRekeyTime_val_ptr );
    int wtpWapiMulticastRekeyPackets_map(u_long *mib_wtpWapiMulticastRekeyPackets_val_ptr, u_long raw_wtpWapiMulticastRekeyPackets_val);
    int wtpWapiMulticastRekeyPackets_get( dot11WtpWAPIConfigTable_rowreq_ctx *rowreq_ctx, u_long * wtpWapiMulticastRekeyPackets_val_ptr );
    int wtpWapiMulticastRekeyStrict_map(u_long *mib_wtpWapiMulticastRekeyStrict_val_ptr, u_long raw_wtpWapiMulticastRekeyStrict_val);
    int wtpWapiMulticastRekeyStrict_get( dot11WtpWAPIConfigTable_rowreq_ctx *rowreq_ctx, u_long * wtpWapiMulticastRekeyStrict_val_ptr );
    int wtpWapiPSKValue_map(char **mib_wtpWapiPSKValue_val_ptr_ptr, size_t *mib_wtpWapiPSKValue_val_ptr_len_ptr, char *raw_wtpWapiPSKValue_val_ptr, size_t raw_wtpWapiPSKValue_val_ptr_len, int allow_realloc);
    int wtpWapiPSKValue_get( dot11WtpWAPIConfigTable_rowreq_ctx *rowreq_ctx, char **wtpWapiPSKValue_val_ptr_ptr, size_t *wtpWapiPSKValue_val_ptr_len_ptr );
    int wtpWapiPSKPassPhrase_map(char **mib_wtpWapiPSKPassPhrase_val_ptr_ptr, size_t *mib_wtpWapiPSKPassPhrase_val_ptr_len_ptr, char *raw_wtpWapiPSKPassPhrase_val_ptr, size_t raw_wtpWapiPSKPassPhrase_val_ptr_len, int allow_realloc);
    int wtpWapiPSKPassPhrase_get( dot11WtpWAPIConfigTable_rowreq_ctx *rowreq_ctx, char **wtpWapiPSKPassPhrase_val_ptr_ptr, size_t *wtpWapiPSKPassPhrase_val_ptr_len_ptr );
    int wtpWapiCertificateUpdateCount_map(u_long *mib_wtpWapiCertificateUpdateCount_val_ptr, u_long raw_wtpWapiCertificateUpdateCount_val);
    int wtpWapiCertificateUpdateCount_get( dot11WtpWAPIConfigTable_rowreq_ctx *rowreq_ctx, u_long * wtpWapiCertificateUpdateCount_val_ptr );
    int wtpWapiMulticastUpdateCount_map(u_long *mib_wtpWapiMulticastUpdateCount_val_ptr, u_long raw_wtpWapiMulticastUpdateCount_val);
    int wtpWapiMulticastUpdateCount_get( dot11WtpWAPIConfigTable_rowreq_ctx *rowreq_ctx, u_long * wtpWapiMulticastUpdateCount_val_ptr );
    int wtpWapiUnicastUpdateCount_map(u_long *mib_wtpWapiUnicastUpdateCount_val_ptr, u_long raw_wtpWapiUnicastUpdateCount_val);
    int wtpWapiUnicastUpdateCount_get( dot11WtpWAPIConfigTable_rowreq_ctx *rowreq_ctx, u_long * wtpWapiUnicastUpdateCount_val_ptr );
    int wtpWapiMulticastCipherSize_map(u_long *mib_wtpWapiMulticastCipherSize_val_ptr, u_long raw_wtpWapiMulticastCipherSize_val);
    int wtpWapiMulticastCipherSize_get( dot11WtpWAPIConfigTable_rowreq_ctx *rowreq_ctx, u_long * wtpWapiMulticastCipherSize_val_ptr );
    int wtpWapiBKLifetime_map(u_long *mib_wtpWapiBKLifetime_val_ptr, u_long raw_wtpWapiBKLifetime_val);
    int wtpWapiBKLifetime_get( dot11WtpWAPIConfigTable_rowreq_ctx *rowreq_ctx, u_long * wtpWapiBKLifetime_val_ptr );
    int wtpWapiBKReauthThreshold_map(u_long *mib_wtpWapiBKReauthThreshold_val_ptr, u_long raw_wtpWapiBKReauthThreshold_val);
    int wtpWapiBKReauthThreshold_get( dot11WtpWAPIConfigTable_rowreq_ctx *rowreq_ctx, u_long * wtpWapiBKReauthThreshold_val_ptr );
    int wtpWapiSATimeout_map(u_long *mib_wtpWapiSATimeout_val_ptr, u_long raw_wtpWapiSATimeout_val);
    int wtpWapiSATimeout_get( dot11WtpWAPIConfigTable_rowreq_ctx *rowreq_ctx, u_long * wtpWapiSATimeout_val_ptr );
    int wtpWapiAuthSuiteSelected_map(char **mib_wtpWapiAuthSuiteSelected_val_ptr_ptr, size_t *mib_wtpWapiAuthSuiteSelected_val_ptr_len_ptr, char *raw_wtpWapiAuthSuiteSelected_val_ptr, size_t raw_wtpWapiAuthSuiteSelected_val_ptr_len, int allow_realloc);
    int wtpWapiAuthSuiteSelected_get( dot11WtpWAPIConfigTable_rowreq_ctx *rowreq_ctx, char **wtpWapiAuthSuiteSelected_val_ptr_ptr, size_t *wtpWapiAuthSuiteSelected_val_ptr_len_ptr );
    int wtpWapiUnicastCipherSelected_map(char **mib_wtpWapiUnicastCipherSelected_val_ptr_ptr, size_t *mib_wtpWapiUnicastCipherSelected_val_ptr_len_ptr, char *raw_wtpWapiUnicastCipherSelected_val_ptr, size_t raw_wtpWapiUnicastCipherSelected_val_ptr_len, int allow_realloc);
    int wtpWapiUnicastCipherSelected_get( dot11WtpWAPIConfigTable_rowreq_ctx *rowreq_ctx, char **wtpWapiUnicastCipherSelected_val_ptr_ptr, size_t *wtpWapiUnicastCipherSelected_val_ptr_len_ptr );
    int wtpWapiMulticastCipherSelected_map(char **mib_wtpWapiMulticastCipherSelected_val_ptr_ptr, size_t *mib_wtpWapiMulticastCipherSelected_val_ptr_len_ptr, char *raw_wtpWapiMulticastCipherSelected_val_ptr, size_t raw_wtpWapiMulticastCipherSelected_val_ptr_len, int allow_realloc);
    int wtpWapiMulticastCipherSelected_get( dot11WtpWAPIConfigTable_rowreq_ctx *rowreq_ctx, char **wtpWapiMulticastCipherSelected_val_ptr_ptr, size_t *wtpWapiMulticastCipherSelected_val_ptr_len_ptr );
    int wtpWapiBKIDUsed_map(char **mib_wtpWapiBKIDUsed_val_ptr_ptr, size_t *mib_wtpWapiBKIDUsed_val_ptr_len_ptr, char *raw_wtpWapiBKIDUsed_val_ptr, size_t raw_wtpWapiBKIDUsed_val_ptr_len, int allow_realloc);
    int wtpWapiBKIDUsed_get( dot11WtpWAPIConfigTable_rowreq_ctx *rowreq_ctx, char **wtpWapiBKIDUsed_val_ptr_ptr, size_t *wtpWapiBKIDUsed_val_ptr_len_ptr );
    int wtpWapiAuthSuiteRequested_map(char **mib_wtpWapiAuthSuiteRequested_val_ptr_ptr, size_t *mib_wtpWapiAuthSuiteRequested_val_ptr_len_ptr, char *raw_wtpWapiAuthSuiteRequested_val_ptr, size_t raw_wtpWapiAuthSuiteRequested_val_ptr_len, int allow_realloc);
    int wtpWapiAuthSuiteRequested_get( dot11WtpWAPIConfigTable_rowreq_ctx *rowreq_ctx, char **wtpWapiAuthSuiteRequested_val_ptr_ptr, size_t *wtpWapiAuthSuiteRequested_val_ptr_len_ptr );
    int wtpWapiUnicastCipherRequested_map(char **mib_wtpWapiUnicastCipherRequested_val_ptr_ptr, size_t *mib_wtpWapiUnicastCipherRequested_val_ptr_len_ptr, char *raw_wtpWapiUnicastCipherRequested_val_ptr, size_t raw_wtpWapiUnicastCipherRequested_val_ptr_len, int allow_realloc);
    int wtpWapiUnicastCipherRequested_get( dot11WtpWAPIConfigTable_rowreq_ctx *rowreq_ctx, char **wtpWapiUnicastCipherRequested_val_ptr_ptr, size_t *wtpWapiUnicastCipherRequested_val_ptr_len_ptr );
    int wtpWapiMulticastCipherRequested_map(char **mib_wtpWapiMulticastCipherRequested_val_ptr_ptr, size_t *mib_wtpWapiMulticastCipherRequested_val_ptr_len_ptr, char *raw_wtpWapiMulticastCipherRequested_val_ptr, size_t raw_wtpWapiMulticastCipherRequested_val_ptr_len, int allow_realloc);
    int wtpWapiMulticastCipherRequested_get( dot11WtpWAPIConfigTable_rowreq_ctx *rowreq_ctx, char **wtpWapiMulticastCipherRequested_val_ptr_ptr, size_t *wtpWapiMulticastCipherRequested_val_ptr_len_ptr );


int dot11WtpWAPIConfigTable_indexes_set_tbl_idx(dot11WtpWAPIConfigTable_mib_index *tbl_idx, long WapiWlanID_val);
int dot11WtpWAPIConfigTable_indexes_set(dot11WtpWAPIConfigTable_rowreq_ctx *rowreq_ctx, long WapiWlanID_val);




#ifdef __cplusplus
}
#endif

#endif /* DOT11WTPWAPICONFIGTABLE_DATA_GET_H */
/** @} */