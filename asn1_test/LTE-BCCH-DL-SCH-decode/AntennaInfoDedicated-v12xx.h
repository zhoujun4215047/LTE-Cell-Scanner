/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-c10.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_AntennaInfoDedicated_v12xx_H_
#define	_AntennaInfoDedicated_v12xx_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AntennaInfoDedicated_v12xx__alternativeCodebookEnabledFor4TX_r12 {
	AntennaInfoDedicated_v12xx__alternativeCodebookEnabledFor4TX_r12_true	= 0
} e_AntennaInfoDedicated_v12xx__alternativeCodebookEnabledFor4TX_r12;

/* AntennaInfoDedicated-v12xx */
typedef struct AntennaInfoDedicated_v12xx {
	long	*alternativeCodebookEnabledFor4TX_r12	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AntennaInfoDedicated_v12xx_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_alternativeCodebookEnabledFor4TX_r12_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_AntennaInfoDedicated_v12xx;

#ifdef __cplusplus
}
#endif

#endif	/* _AntennaInfoDedicated_v12xx_H_ */
#include <asn_internal.h>
