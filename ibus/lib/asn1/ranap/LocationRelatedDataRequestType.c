/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "RANAP-IEs.asn"
 */

#include "LocationRelatedDataRequestType.h"

static asn_TYPE_member_t asn_MBR_LocationRelatedDataRequestType_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LocationRelatedDataRequestType, requestedLocationRelatedDataType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RequestedLocationRelatedDataType,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"requestedLocationRelatedDataType"
		},
	{ ATF_POINTER, 1, offsetof(struct LocationRelatedDataRequestType, requestedGPSAssistanceData),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RequestedGPSAssistanceData,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"requestedGPSAssistanceData"
		},
};
static int asn_MAP_LocationRelatedDataRequestType_oms_1[] = { 1 };
static ber_tlv_tag_t asn_DEF_LocationRelatedDataRequestType_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_LocationRelatedDataRequestType_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* requestedLocationRelatedDataType at 1095 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* requestedGPSAssistanceData at 1096 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LocationRelatedDataRequestType_specs_1 = {
	sizeof(struct LocationRelatedDataRequestType),
	offsetof(struct LocationRelatedDataRequestType, _asn_ctx),
	asn_MAP_LocationRelatedDataRequestType_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_LocationRelatedDataRequestType_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	1,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_LocationRelatedDataRequestType = {
	"LocationRelatedDataRequestType",
	"LocationRelatedDataRequestType",
	SEQUENCE_free_for_RANAP,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper_for_RANAP,
	SEQUENCE_encode_uper_for_RANAP,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_LocationRelatedDataRequestType_tags_1,
	sizeof(asn_DEF_LocationRelatedDataRequestType_tags_1)
		/sizeof(asn_DEF_LocationRelatedDataRequestType_tags_1[0]), /* 1 */
	asn_DEF_LocationRelatedDataRequestType_tags_1,	/* Same as above */
	sizeof(asn_DEF_LocationRelatedDataRequestType_tags_1)
		/sizeof(asn_DEF_LocationRelatedDataRequestType_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_LocationRelatedDataRequestType_1,
	2,	/* Elements count */
	&asn_SPC_LocationRelatedDataRequestType_specs_1	/* Additional specs */
};
