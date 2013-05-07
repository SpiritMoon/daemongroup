/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "RANAP-IEs.asn"
 */

#ifndef	_Event_H_
#define	_Event_H_


#include <asn_application.h>

/* Including external dependencies */
#include <ENUMERATED.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Event {
	Event_stop_change_of_service_area	= 0,
	Event_direct	= 1,
	Event_change_of_servicearea	= 2,
	/*
	 * Enumeration is extensible
	 */
	Event_stop_direct	= 3,
	Event_periodic	= 4,
	Event_stop_periodic	= 5
} e_Event;

/* Event */
typedef ENUMERATED_t	 Event_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Event;
asn_struct_free_f Event_free;
asn_struct_print_f Event_print;
asn_constr_check_f Event_constraint;
ber_type_decoder_f Event_decode_ber;
der_type_encoder_f Event_encode_der;
xer_type_decoder_f Event_decode_xer;
xer_type_encoder_f Event_encode_xer;
per_type_decoder_f Event_decode_uper;
per_type_encoder_f Event_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _Event_H_ */
#include <asn_internal.h>