#pragma once

#include "quantum.h"

#ifdef KEYBOARD_key_toys_95_rev1
    #include "rev1.h"
#endif


// Used to create a keymap using only KC_ prefixed keys
#define LAYOUT_kc_ortho_5x19( \
    L00, L01, L02, L03, L04, L05, L06, L07, L08, L09,   R00, R01, R02, R03, R04, R05, R06, R07, R08, \
	L10, L11, L12, L13, L14, L15, L16, L17, L18, L19,   R10, R11, R12, R13, R14, R15, R16, R17, R18, \
	L20, L21, L22, L23, L24, L25, L26, L27, L28, L29,   R20, R21, R22, R23, R24, R25, R26, R27, R28, \
    L30, L31, L32, L33, L34, L35, L36, L37, L38, L39,   R30, R31, R32, R33, R34, R35, R36, R37, R38, \
    L40, L41, L42, L43, L44, L45, L46, L47, L48, L49,   R40, R41, R42, R43, R44, R45, R46, R47, R48 \
    ) \
    LAYOUT( \
        KC_##L00, KC_##L01, KC_##L02, KC_##L03, KC_##L04, KC_##L05, KC_##L06, KC_##L07, KC_##L08, KC_##L09, KC_##R00, KC_##R01, KC_##R02, KC_##R03, KC_##R04, KC_##R05, KC_##R06, KC_##R07, KC_##R08, \
        KC_##L10, KC_##L11, KC_##L12, KC_##L13, KC_##L14, KC_##L15, KC_##L16, KC_##L17, KC_##L18, KC_##L19, KC_##R10, KC_##R11, KC_##R12, KC_##R13, KC_##R14, KC_##R15, KC_##R16, KC_##R17, KC_##R18, \
        KC_##L20, KC_##L21, KC_##L22, KC_##L23, KC_##L24, KC_##L25, KC_##L26, KC_##L27, KC_##L28, KC_##L29, KC_##R20, KC_##R21, KC_##R22, KC_##R23, KC_##R24, KC_##R25, KC_##R26, KC_##R27, KC_##R28, \
        KC_##L30, KC_##L31, KC_##L32, KC_##L33, KC_##L34, KC_##L35, KC_##L36, KC_##L37, KC_##L38, KC_##L39, KC_##R30, KC_##R31, KC_##R32, KC_##R33, KC_##R34, KC_##R35, KC_##R36, KC_##R37, KC_##R38, \
        KC_##L40, KC_##L41, KC_##L42, KC_##L43, KC_##L44, KC_##L45, KC_##L46, KC_##L47, KC_##L48, KC_##L49, KC_##R40, KC_##R41, KC_##R42, KC_##R43, KC_##R44, KC_##R45, KC_##R46, KC_##R47, KC_##R48 \
    )

#define LAYOUT_kc LAYOUT_kc_ortho_5x19
