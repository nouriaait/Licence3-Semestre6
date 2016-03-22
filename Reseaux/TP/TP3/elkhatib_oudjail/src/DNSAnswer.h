#ifndef __DNS_ANSWER_H__
#define __DNS_ANSWER_H__


typedef uint16_t type_t;
typedef uint16_t class_t;
typedef uint32_t ttl_t;
typedef uint16_t rdlength_t;

typedef struct {
  ArrayList *name;
  type_t type;
  class_t class;
  ttl_t ttl;
  rdlength_t rdlength;
  ArrayList *rdata;
} answer_t;


// Constructeur cascade ....

extern answer_t *DNSA_construct();
extern answer_t *DNSA_construct_with_bytes(const byte_t *bytes);
extern byte_t *DNSA_toconstruct_bytes(const answer_t *answer);

extern void DNSA_set_type(answer_t *answer, type_t type);
extern void DNSA_set_class(answer_t *answer, class_t class);
extern void DNSA_set_ttl(answer_t *answer, ttl_t ttl);
extern void DNSA_set_rdlength(answer_t *answer, rdlength_t rdlength);

extern type_t DNSA_get_type(const answer_t *answer);
extern class_t DNSA_get_class(const answer_t *answer);
extern ttl_t DNSA_get_ttl(const class_t *class);
extern rdlength_t DNSA_get_rdlength(const rdlength_t rdlength);




extern void DNSA_destruct(answer_t *answer);

#endif