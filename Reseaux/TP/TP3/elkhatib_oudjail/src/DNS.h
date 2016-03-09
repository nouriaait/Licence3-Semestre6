#ifndef __DNS_H__
#define __DNS_H__

#include "Core.h"

/* ----------- HEADER ------------------- */
#define HEADER_LENGHT 96

#define HEADER_LENGTH_ID 16
#define HEADER_LENGTH_QR 1
#define HEADER_LENGTH_Opcode 4
#define HEADER_LENGTH_AA 1
#define HEADER_LENGTH_TC 1
#define HEADER_LENGTH_RD 1
#define HEADER_LENGTH_RA 1
#define HEADER_LENGTH_QR 1


#define HEADER_LENGTH_Z 3
#define HEADER_LENGTH_RCODE 4
#define HEADER_LENGTH_QDCOUNT 16
#define HEADER_LENGTH_ANCOUNT 16
#define HEADER_LENGTH_NSCOUNT 16
#define HEADER_LENGTH_ARCOUNT 16


typedef enum {
  QUERY,
  IQUERY,
  STATUS
} OPCODE_RESPONSE;

typedef enum {
  NO_ERROR_CONDITION,
  FORMAT_ERROR,
  SERVER_FAILURE,
  NAME_ERROR,
  NOT_IMPLEMENTED,
  REFUSED
} RCODE_RESPONSE;


extern byte_t packet_header[HEADER_LENGHT];


/* ID of header DNS */
extern id_t id;

extern bool qr;

extern byte_t op_code;

extern bool aa;

extern bool rd;

extern bool ra;

/* QUESTION */
/* A construire */

/* DNS */

extern byte_t *packet_dns;


#endif
