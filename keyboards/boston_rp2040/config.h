/* Copyright 2020 Pylon
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID 0xAC12
#define PRODUCT_ID 0x4176
#define DEVICE_VER 0x0001
#define MANUFACTURER Pylon
#define PRODUCT Boston
/* key matrix size */
#define MATRIX_ROWS 7
#define MATRIX_COLS 19

#define MATRIX_ROW_PINS \
    { 18, 17, 14, 13, 12, 11, 10 }
#define MATRIX_COL_PINS \
    { 19, 22, 23, 24, 25, 26, 27, 28, 29,  0,  1,  2,  3, 4,  5,  6,  7,  8,  9 }
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Define RGBLED */
#define RGB_DI_PIN 10
#define RGBLED_NUM 18

#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_RGB_TEST
#define RGBLIGHT_EFFECT_ALTERNATING

#define RGBLIGHT_LAYERS
#define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF

//The 3D-printed version of Boston uses APA106 LEDs, which are reversed
#define WS2812_BYTE_ORDER WS2812_BYTE_ORDER_RGB

/* Define encoder */
#define ENCODERS_PAD_A \
    { 20 }
#define ENCODERS_PAD_B \
    { 21 }
#define ENCODER_RESOLUTION 2
#define TAP_CODE_DELAY 15

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION
