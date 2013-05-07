/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-PDU-Contents"
 * 	found in "RANAP-PDU-Contents.asn"
 */

#ifndef	_RAB_ReleasedItem_H_
#define	_RAB_ReleasedItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RAB-ID.h"
#include "DL-GTP-PDU-SequenceNumber.h"
#include "UL-GTP-PDU-SequenceNumber.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DataVolumeList;
/* auto changed by perl script */
/*struct ;*/

/* RAB-ReleasedItem */
typedef struct RAB_ReleasedItem {
	RAB_ID_t	 rAB_ID;
/* auto changed by perl script */
	struct DataVolumeList	*dl_dataVolumes;	/* OPTIONAL */
/* auto changed by perl script */
	DL_GTP_PDU_SequenceNumber_t	*dL_GTP_PDU_SequenceNumber;	/* OPTIONAL */
/* auto changed by perl script */
	UL_GTP_PDU_SequenceNumber_t	*uL_GTP_PDU_SequenceNumber;	/* OPTIONAL */
/* auto changed by perl script */
	struct 	 ProtocolExtensionContainer_209P0 *iE_Extensions ;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RAB_ReleasedItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RAB_ReleasedItem;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DataVolumeList.h"
#include "ProtocolExtensionContainer.h"

#endif	/* _RAB_ReleasedItem_H_ */
#include <asn_internal.h>