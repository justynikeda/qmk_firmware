#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

// Layers
#define _DEFAULT 0
#define _COLEMAKDH 1
#define _NUMPAD 2
#define _SIEGE 3
#define _UTILITY 15

// Fillers to make layering more clear
#define ____ KC_TRNS
#define XXXX KC_NO

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_DEFAULT] = LAYOUT(
     KC_ESC  , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                       KC_6  , KC_7  ,  KC_8  ,  KC_9  ,   KC_0  ,   KC_CAPS ,
     KC_LPRN , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                       KC_Y  , KC_U  ,  KC_I  ,  KC_O  ,   KC_P  ,   KC_RPRN ,
     KC_BSLASH , KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                     KC_H  , KC_J  ,  KC_K  ,  KC_L  , KC_SCLN ,   KC_QUOT ,
     LCTL_T(KC_LBRC) , KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,               KC_N  , KC_M  , KC_COMM, KC_DOT , KC_SLSH , LALT_T(KC_RBRC) ,
                      KC_PGUP,KC_PGDN,                                                         KC_HOME, KC_END,
                            KC_BSPC, KC_LSFT,                                     KC_SPC, KC_ENTER,
                                      KC_DEL,                                KC_MINS ,  KC_TAB ,
                                      MO(_UTILITY), KC_LGUI,                 KC_EQL , KC_GRV,
       KC_UP, KC_LEFT, KC_DOWN, KC_RIGHT
  ),
  [_COLEMAKDH] = LAYOUT(
     ____, ____, ____, ____, ____, ____,                                     ____ ,   ____ ,   ____ ,   ____ ,   ____ , ____ ,
     ____, KC_Q  , KC_W  , KC_F  , KC_P  , KC_B  ,                           KC_J ,   KC_L ,   KC_U ,   KC_Y , KC_SCLN, ____ ,
     ____, KC_A  , KC_R  , KC_S  , KC_T  , KC_G  ,                           KC_M ,   KC_N ,   KC_E ,   KC_I ,   KC_O , ____ ,
     ____, KC_Z  , KC_X  , KC_C  , KC_D  , KC_V  ,                           KC_K ,   KC_H ,   ____ ,   ____ ,   ____ , ____ ,
                           ____  , ____  ,                                                     ____ ,   ____ ,
                                      ____, ____,                               ____ ,   ____ ,
                                      ____,                                  ____ ,  ____ ,
                                      ____, ____,                            ____ , ____ ,
       ____, ____, ____, ____
  ),
  [_NUMPAD] = LAYOUT(
     ____, ____, KC_F1, KC_F2  , KC_F3 , KC_F4 ,                            ____,  ____ , KC_PSLS, KC_PAST, KC_PEQL , ____ ,
     ____, ____, KC_F5, KC_F6  , KC_F7 , KC_F8 ,                            ____,  KC_7 ,  KC_8  , KC_9   , KC_PMNS , ____ ,
     ____, ____, KC_F9, KC_F10 , KC_F11, KC_F12,                            ____,  KC_4 ,  KC_5  , KC_6   , KC_PPLS , ____ ,
     ____, ____, ____ , ____   ,  ____ , ____  ,                            ____,  KC_1 ,  KC_2  , KC_3   , KC_PENT , ____ ,
                  KC_PSCR, KC_PAUS,                                                          KC_COMM, KC_KP_DOT,
                               ____, ____,                                       KC_ENTER, KC_0,
                                     ____,                                  ____,  ____,
                                     ____, ____,                            ____, ____,
       ____, ____, ____, ____
  ),
  [_SIEGE] = LAYOUT(
               ____, KC_7   , KC_1, KC_2, KC_3, KC_4,                        ____, ____, ____, ____, ____,____,
               KC_T, KC_TAB , KC_Q, KC_W, KC_E, KC_R,                        ____, ____, ____, ____, ____,____,
               KC_G, KC_LSFT, KC_A, KC_S, KC_D, KC_F,                        ____, ____, ____, ____,____,____,
               KC_B, KC_LCTL, KC_Z, KC_X, KC_C, KC_V,                        ____, ____, ____, ____,____,____,
                              ____, ____,                                              ____, ____,
                                      KC_ENTER, KC_SPC,                              ____, ____,
                                          ____,                          ____,  ____,
                                          ____, XXXX,                    ____, ____,
            ____, ____, ____, ____
  ),
  [_UTILITY] = LAYOUT(
        QK_BOOT  , ____, ____, ____, ____, ____,                        ____, ____, ____, ____, ____,QK_BOOT,
          ____   , ____, ____, ____,TG(_SIEGE),____,                    ____, ____, ____, ____, ____,____,
          ____   , ____, ____, ____, ____, ____,                        ____, ____, ____, ____,____,____,
     TG(_COLEMAKDH), ____, ____, ____, ____, ____,                        ____, ____, ____, ____,____,____,
                         ____, ____,                                                ____, ____,
                                 ____, ____,                                 KC_INS,  ____,
                                     ____,                              KC_MRWD,  KC_MFFD, //Media Back/Forward
                                     ____, KC_MYCM,                     ____, TG(_NUMPAD),
       ____, ____, ____, ____
  ),
};
