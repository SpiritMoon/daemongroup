/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "RANAP-IEs.asn"
 */

#ifndef	_TemporaryUE_ID_H_
#define	_TemporaryUE_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TMSI.h"
#include "P-TMSI.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TemporaryUE_ID_PR {
	TemporaryUE_ID_PR_NOTHING,	/* No components present */
	TemporaryUE_ID_PR_tMSI,
	TemporaryUE_ID_PR_p_TMSI,
	/* Extensions may appear below */
	
} TemporaryUE_ID_PR;

/* TemporaryUE-ID */
typedef struct TemporaryUE_ID {
	TemporaryUE_ID_PR present;
	union TemporaryUE_ID_u {
		TMSI_t	 tMSI;
		P_TMSI_t	 p_TMSI;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TemporaryUE_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TemporaryUE_ID;

#ifdef __cplusplus
}
#endif

#endif	/* _TemporaryUE_ID_H_ */
#include <asn_internal.h>