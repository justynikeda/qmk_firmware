
#pragma once

#include "config_common.h"

#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x3060
#define DEVICE_VER      0x0001
#define MANUFACTURER    Glitzville
#define PRODUCT         Dactyl-Manuform keyboard
#define DESCRIPTION     An ergonomic split keyboard

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 7

// wiring of each half
#define MATRIX_COL_PINS { D4, C6, D7, E6, B4, B5, D1}
#define MATRIX_ROW_PINS { F6, F7, B1, B3, B2, B6}

#define DIODE_DIRECTION COL2ROW

// WS2812 RGB LED strip input and number of LEDs
#define RGB_DI_PIN D3
#define RGBLED_NUM 12

#define CATERINA_BOOTLOADER

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* number of backlight levels */
// #define BACKLIGHT_LEVELS 3
