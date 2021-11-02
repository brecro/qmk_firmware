#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	     K01, K02, K03, K04,           \
	     K11, K12, K13, K14, K15,      \
	          K22, K23, K24, K25, K26, \
	K30, K31, K32, K33, K34, K35,      \
	     K41,           K44, K45, K46  \
) { \
	{ KC_NO, K01,   K02,   K03,   K04,   KC_NO, KC_NO }, \
	{ KC_NO, K11,   K12,   K13,   K14,   K15,   KC_NO }, \
	{ KC_NO, KC_NO, K22,   K23,   K24,   K25,   K26 }, \
	{ K30,   K31,   K32,   K33,   K34,   K35,   KC_NO }, \
	{ KC_NO, K41,   KC_NO, KC_NO, K44,   K45,   K46 }  \
}

#endif