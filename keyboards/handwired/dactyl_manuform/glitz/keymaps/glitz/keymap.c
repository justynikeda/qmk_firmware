#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

// Layers
#define _DEFAULT 0
#define _COLEMAK 1
#define _UTILITY 2
#define _NUMPAD 3

// Fillers to make layering more clear
#define ____ KC_TRNS

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_DEFAULT] = LAYOUT_GLITZ(
     KC_ESC , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  ,  KC_0   , KC_BSPC ,
     KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  ,  KC_P   , KC_MINS ,
     KC_LSFT, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  , KC_SCLN , KC_QUOT ,
     KC_LCTL, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT , KC_SLSH , KC_BSLASH ,
                      KC_LBRC,KC_LPRN,                                                       KC_RPRN, KC_RBRC,
                                    KC_BSPC, KC_TAB,                              KC_SPC, KC_ENTER,
                                      KC_LALT,                                KC_END,  KC_DEL,
                                      MO(_UTILITY), KC_LGUI,                  KC_LGUI, KC_LALT,
       KC_UP, KC_LEFT, KC_DOWN, KC_RIGHT
  ),
  [_COLEMAK] = LAYOUT_GLITZ(
     ____, ____, ____, ____, ____, ____,                                     ____ ,   ____ ,   ____ ,   ____ ,   ____ , ____ ,
     ____, KC_Q  , KC_W  , KC_F  , KC_P  , KC_G  ,                           KC_J ,   KC_L ,   KC_U ,   KC_Y , KC_SCLN, ____ ,
     ____, KC_A  , KC_R  , KC_S  , KC_T  , KC_D  ,                           KC_H ,   KC_N ,   KC_E ,   KC_I ,   KC_O , ____ ,
     ____, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                           KC_K ,   KC_M ,   ____ ,   ____ ,   ____ , ____ ,
                           ____  , ____  ,                                                     ____ ,   ____ ,
                                      ____, ____,                               ____ ,   ____ ,
                                      ____,                                  ____ ,  ____ ,
                                      ____, ____,                            ____ , ____ ,
       ____, ____, ____, ____
  ),
  [_UTILITY] = LAYOUT_GLITZ(
        QK_BOOT  , ____, ____, ____, ____, ____,                        ____, ____, ____, ____, ____,____,
          ____   , ____, ____, ____, ____, ____,                        ____, ____, ____, ____, ____,____,
          ____   , ____, ____, ____, ____, ____,                        ____, ____, ____, ____,____,____,
     TG(_COLEMAK), ____, ____, ____, ____, ____,                        ____, ____, ____, ____,____,____,
                         ____, ____,                                                ____, ____,
                                 ____, ____,                               ____, ____,
                                     ____,                              ____,  ____,
                                     ____, TG(_NUMPAD),                 ____, ____,
       ____, ____, ____, ____
  ),
  [_NUMPAD] = LAYOUT_GLITZ(
     ____, ____, ____, ____, ____, ____,                                ____, ____, ____, ____, ____,____,
     ____, ____, ____, ____, ____, ____,                                ____, KC_7   , KC_8   , KC_9   , ____,____,
     ____, ____, ____, ____, ____, ____,                                ____, KC_4   , KC_5   , KC_6   ,____,____,
     ____, ____, ____, ____, ____, ____,                                ____, KC_1   , KC_2   , KC_3   ,____,____,
                 ____, ____,                                                           KC_COMM, KC_KP_DOT,
                          ____, ____,                                        KC_ENTER, KC_0,
                              ____,                                     ____,  ____,
                              ____, ____,                               ____, ____,
       ____, ____, ____, ____
  ),
};
