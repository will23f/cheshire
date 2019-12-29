#ifndef ILLUMINATROV2_H
#define ILLUMINATROV2_H

#include "quantum.h"

#define KEYMAP( \
      K00,  K01,  K02,  K03,  K04,  K05,  K06,  K07,  K08,  K09,  K0a,  K0b,  K0c,  K0d,  K0e,  \
      K10,  K11,  K12,  K13,  K14,  K15,  K16,  K17,  K18,  K19,  K1a,  K1b,  K1c,  K1d,  K1e,  \
      K20,  K21,  K22,  K23,  K24,  K25,  K26,  K27,  K28,  K29,  K2a,  K2b,  K2c,  K2d,        \
            K31,  K32,  K33,  K34,  K35,  K36,  K37,  K38,  K39,  K3a,  K3b,  K3c,  K3d,  K3e,  \
            K41,  K42,  K43,        K45,        K47,              K4a,                    K4e   \
) {   \
      { K00,    K01,    K02,    K03,    K04,    K05,    K06,    K07,    K08,    K09,    K0a,    K0b,    K0c,    K0d,    K0e   }, \
      { K10,    K11,    K12,    K13,    K14,    K15,    K16,    K17,    K18,    K19,    K1a,    K1b,    K1c,    K1d,    K1e   }, \
      { K20,    K21,    K22,    K23,    K24,    K25,    K26,    K27,    K28,    K29,    K2a,    K2b,    K2c,    K2d,    KC_NO }, \
      { KC_NO,  K31,    K32,    K33,    K34,    K35,    K36,    K37,    K38,    K39,    K3a,    K3b,    K3c,    K3d,    K3e   }, \
      { KC_NO,  K41,    K42,    K43,    KC_NO,  K45,    KC_NO,  K47,    KC_NO,  KC_NO,  K4a,    KC_NO,  KC_NO,  KC_NO,  K4e   }  \
}

#endif
