/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-PDU-Contents"
 * 	found in "RANAP-PDU-Contents.asn"
 */

#include "RAB-ReleasedItem.h"

static asn_TYPE_member_t asn_MBR_RAB_ReleasedItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RAB_ReleasedItem, rAB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RAB_ID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rAB-ID"
		},
	{ ATF_POINTER, 4, offsetof(struct RAB_ReleasedItem, dl_dataVolumes),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DataVolumeList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-dataVolumes"
		},
	{ ATF_POINTER, 3, offsetof(struct RAB_ReleasedItem, dL_GTP_PDU_SequenceNumber),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_GTP_PDU_SequenceNumber,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dL-GTP-PDU-SequenceNumber"
		},
	{ ATF_POINTER, 2, offsetof(struct RAB_ReleasedItem, uL_GTP_PDU_SequenceNumber),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_GTP_PDU_SequenceNumber,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uL-GTP-PDU-SequenceNumber"
		},
	{ ATF_POINTER, 1, offsetof(struct RAB_ReleasedItem, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_209P0,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"iE-Extensions"
		},
};
static int asn_MAP_RAB_ReleasedItem_oms_1[] = { 1, 2, 3, 4 };
static ber_tlv_tag_t asn_DEF_RAB_ReleasedItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RAB_ReleasedItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rAB-ID at 2846 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dl-dataVolumes at 2847 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dL-GTP-PDU-SequenceNumber at 2848 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* uL-GTP-PDU-SequenceNumber at 2849 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extensions at 2850 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RAB_ReleasedItem_specs_1 = {
	sizeof(struct RAB_ReleasedItem),
	offsetof(struct RAB_ReleasedItem, _asn_ctx),
	asn_MAP_RAB_ReleasedItem_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_RAB_ReleasedItem_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	4,	/* Start extensions */
	6	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RAB_ReleasedItem = {
	"RAB-ReleasedItem",
	"RAB-ReleasedItem",
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
	asn_DEF_RAB_ReleasedItem_tags_1,
	sizeof(asn_DEF_RAB_ReleasedItem_tags_1)
		/sizeof(asn_DEF_RAB_ReleasedItem_tags_1[0]), /* 1 */
	asn_DEF_RAB_ReleasedItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_RAB_ReleasedItem_tags_1)
		/sizeof(asn_DEF_RAB_ReleasedItem_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RAB_ReleasedItem_1,
	5,	/* Elements count */
	&asn_SPC_RAB_ReleasedItem_specs_1	/* Additional specs */
};
