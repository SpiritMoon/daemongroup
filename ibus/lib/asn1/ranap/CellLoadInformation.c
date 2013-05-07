/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "RANAP-IEs.asn"
 */

#include "CellLoadInformation.h"

static asn_TYPE_member_t asn_MBR_CellLoadInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellLoadInformation, cell_Capacity_Class_Value),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Cell_Capacity_Class_Value,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cell-Capacity-Class-Value"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellLoadInformation, loadValue),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LoadValue,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"loadValue"
		},
	{ ATF_POINTER, 3, offsetof(struct CellLoadInformation, rTLoadValue),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RTLoadValue,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rTLoadValue"
		},
	{ ATF_POINTER, 2, offsetof(struct CellLoadInformation, nRTLoadInformationValue),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NRTLoadInformationValue,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nRTLoadInformationValue"
		},
	{ ATF_POINTER, 1, offsetof(struct CellLoadInformation, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_209P0,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"iE-Extensions"
		},
};
static int asn_MAP_CellLoadInformation_oms_1[] = { 2, 3, 4 };
static ber_tlv_tag_t asn_DEF_CellLoadInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CellLoadInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cell-Capacity-Class-Value at 474 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* loadValue at 475 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rTLoadValue at 476 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* nRTLoadInformationValue at 477 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extensions at 478 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CellLoadInformation_specs_1 = {
	sizeof(struct CellLoadInformation),
	offsetof(struct CellLoadInformation, _asn_ctx),
	asn_MAP_CellLoadInformation_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_CellLoadInformation_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	4,	/* Start extensions */
	6	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CellLoadInformation = {
	"CellLoadInformation",
	"CellLoadInformation",
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
	asn_DEF_CellLoadInformation_tags_1,
	sizeof(asn_DEF_CellLoadInformation_tags_1)
		/sizeof(asn_DEF_CellLoadInformation_tags_1[0]), /* 1 */
	asn_DEF_CellLoadInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_CellLoadInformation_tags_1)
		/sizeof(asn_DEF_CellLoadInformation_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CellLoadInformation_1,
	5,	/* Elements count */
	&asn_SPC_CellLoadInformation_specs_1	/* Additional specs */
};
