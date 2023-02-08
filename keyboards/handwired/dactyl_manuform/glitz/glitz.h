#pragma once

#include "dactyl_manuform.h"

#define XXX KC_NO

#define LAYOUT( \
  L11, L12, L13, L14, L15, L16,                          R11, R12, R13, R14, R15, R16, \
  L21, L22, L23, L24, L25, L26,                          R21, R22, R23, R24, R25, R26, \
  L31, L32, L33, L34, L35, L36,                          R31, R32, R33, R34, R35, R36, \
  L41, L42, L43, L44, L45, L46,                          R41, R42, R43, R44, R45, R46, \
            L53, L54,                                              R53, R54,           \
                      L55, L56,                          R51, R52,                     \
                        L65,   				    	 R61, R62,                         \
                        L63, L64,    		   	     R63, R64,                         \
    L17, L27, L47, L57																   \
  ) \
  { \
    { L11, L12, L13, L14, L15, L16, L17 }, \
    { L21, L22, L23, L24, L25, L26, L27 }, \
    { L31, L32, L33, L34, L35, L36, XXX }, \
    { L41, L42, L43, L44, L45, L46, L47 }, \
    { XXX, XXX, L53, L54, L55, L56, L57 }, \
    { XXX, XXX, L63, L64, L65, XXX, XXX }, \
                                           \
    { R11, R12, R13, R14, R15, R16, XXX }, \
    { R21, R22, R23, R24, R25, R26, XXX }, \
    { R31, R32, R33, R34, R35, R36, XXX }, \
    { R41, R42, R43, R44, R45, R46, XXX }, \
    { R51, R52, R53, R54, XXX, XXX, XXX }, \
    { R61, R62, R63, R64, XXX, XXX, XXX }  \
  }
