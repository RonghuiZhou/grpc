/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     udpa/core/v1/authority.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef UDPA_CORE_V1_AUTHORITY_PROTO_UPB_H_
#define UDPA_CORE_V1_AUTHORITY_PROTO_UPB_H_

#include "upb/msg.h"
#include "upb/decode.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct udpa_core_v1_Authority;
typedef struct udpa_core_v1_Authority udpa_core_v1_Authority;
extern const upb_msglayout udpa_core_v1_Authority_msginit;


/* udpa.core.v1.Authority */

UPB_INLINE udpa_core_v1_Authority *udpa_core_v1_Authority_new(upb_arena *arena) {
  return (udpa_core_v1_Authority *)_upb_msg_new(&udpa_core_v1_Authority_msginit, arena);
}
UPB_INLINE udpa_core_v1_Authority *udpa_core_v1_Authority_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  udpa_core_v1_Authority *ret = udpa_core_v1_Authority_new(arena);
  return (ret && upb_decode(buf, size, ret, &udpa_core_v1_Authority_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *udpa_core_v1_Authority_serialize(const udpa_core_v1_Authority *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &udpa_core_v1_Authority_msginit, arena, len);
}

UPB_INLINE upb_strview udpa_core_v1_Authority_name(const udpa_core_v1_Authority *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview); }

UPB_INLINE void udpa_core_v1_Authority_set_name(udpa_core_v1_Authority *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview) = value;
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* UDPA_CORE_V1_AUTHORITY_PROTO_UPB_H_ */
