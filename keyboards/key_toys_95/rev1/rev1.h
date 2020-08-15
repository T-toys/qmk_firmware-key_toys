#pragma once

#include "key_toys_95.h"

//void promicro_bootloader_jmp(bool program);

#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
	#include <avr/io.h>
	#include <avr/interrupt.h>
#endif
#endif

//void promicro_bootloader_jmp(bool program);


// Keymap with right side flipped
// (TRRS jack on both halves are to the right)
#define LAYOUT_ortho_5x19( \
	L00, L01, L02, L03, L04, L05, L06, L07, L08, L09,   R00, R01, R02, R03, R04, R05, R06, R07, R08, \
	L10, L11, L12, L13, L14, L15, L16, L17, L18, L19,   R10, R11, R12, R13, R14, R15, R16, R17, R18, \
	L20, L21, L22, L23, L24, L25, L26, L27, L28, L29,   R20, R21, R22, R23, R24, R25, R26, R27, R28, \
    L30, L31, L32, L33, L34, L35, L36, L37, L38, L39,   R30, R31, R32, R33, R34, R35, R36, R37, R38, \
    L40, L41, L42, L43, L44, L45, L46, L47, L48, L49,   R40, R41, R42, R43, R44, R45, R46, R47, R48 \
	) \
	{ \
		{ L00, L01, L02, L03, L04, L05, L06, L07, L08, L09 }, \
		{ L10, L11, L12, L13, L14, L15, L16, L17, L18, L19 }, \
        { L20, L21, L22, L23, L24, L25, L26, L27, L28, L29 }, \
        { L30, L31, L32, L33, L34, L35, L36, L37, L38, L39 }, \
        { L40, L41, L42, L43, L44, L45, L46, L47, L48, L49 }, \
        { R00, R01, R02, R03, R04, R05, R06, R07, R08 }, \
        { R10, R11, R12, R13, R14, R15, R16, R17, R18 }, \
        { R20, R21, R22, R23, R24, R25, R26, R27, R28 }, \
        { R30, R31, R32, R33, R34, R35, R36, R37, R38 }, \
        { R40, R41, R42, R43, R44, R45, R46, R47, R48 } \
	}

#define LAYOUT LAYOUT_ortho_5x19

