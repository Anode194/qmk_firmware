#include QMK_KEYBOARD_H
#include "muse.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_preonic_grid(
            KC_ESC,          KC_1,       KC_2,          KC_3,           KC_4,       KC_5,       KC_6,       KC_7,       KC_8,               KC_9,           KC_0,       KC_GRV,        
            KC_TAB,          KC_Q,       KC_W,          KC_E,           KC_R,       KC_T,       KC_Y,       KC_U,       KC_I,               KC_O,           KC_P,       KC_BSPC,         
            CTL_T(KC_ESC),   KC_A,       KC_S,          KC_D,           KC_F,       KC_G,       KC_H,       KC_J,       KC_K,               KC_L,           KC_SCLN,    KC_QUOT,        
            KC_LSFT,         KC_Z,       KC_X,          KC_C,           KC_V,       KC_B,       KC_N,       KC_M,       KC_COMM,            KC_DOT,         KC_SLSH,    KC_RSFT,        
            KC_LCTL,         KC_LGUI,    KC_MS_WH_UP,   KC_LALT,        MO(3),      KC_SPC,     KC_ENT,     MO(4),      KC_LALT,            KC_MS_WH_DOWN,  KC_LGUI,    KC_LCTL),

	[1] = LAYOUT_preonic_grid(
            KC_ESC,          KC_1,       KC_2,          KC_3,           KC_4,       KC_5,       KC_6,       KC_7,       KC_8,               KC_9,           KC_0,       KC_SLSH,        
            KC_TAB,          KC_Q,       KC_W,          KC_E,           KC_R,       KC_T,       KC_Y,       KC_U,       KC_I,               KC_O,           KC_P,       KC_BSPC,         
            LGUI_T(KC_ESC),  KC_A,       KC_S,          KC_D,           KC_F,       KC_G,       KC_H,       KC_J,       KC_K,               KC_L,           KC_SCLN,    KC_QUOT,        
            KC_LSFT,         KC_Z,       KC_X,          KC_C,           KC_V,       KC_B,       KC_N,       KC_M,       KC_COMM,            KC_DOT,         KC_SLSH,    KC_RSFT,        
            KC_LCTL,         KC_LGUI,    KC_MS_WH_UP,   KC_LALT,        MO(3),      KC_SPC,     KC_ENT,     MO(4),      KC_LALT,            KC_MS_WH_DOWN,  KC_LGUI,    KC_LGUI),

	[2] = LAYOUT_preonic_grid(
            KC_GRV,         KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPC,        
            KC_TAB,         KC_QUOT,    KC_COMM,    KC_DOT,     KC_P,       KC_Y,       KC_F,       KC_G,       KC_C,       KC_R,       KC_L,       KC_DEL,         
            KC_ESC,         KC_A,       KC_O,       KC_E,       KC_U,       KC_I,       KC_D,       KC_H,       KC_T,       KC_N,       KC_S,       KC_SLSH,        
            KC_LSFT,        KC_SCLN,    KC_Q,       KC_J,       KC_K,       KC_X,       KC_B,       KC_M,       KC_W,       KC_V,       KC_Z,       KC_RSFT,         
            BL_STEP,        KC_LCTL,    KC_LALT,    KC_LGUI,    MO(3),      KC_SPC,     KC_SPC,     MO(4),      KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT),

	[3] = LAYOUT_preonic_grid(
            KC_TILD,    KC_EXLM,    KC_AT,      KC_HASH,    KC_DLR,         KC_PERC,        KC_CIRC,        KC_AMPR,    KC_ASTR,    KC_LPRN,    KC_RPRN,    KC_TILD,
            KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,          KC_F6,          KC_F7,          KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,
            KC_NO,      G(KC_LEFT), KC_NO,      KC_NO,      KC_NO,          KC_NO,          KC_LEFT,        KC_DOWN,    KC_UP,      KC_RGHT,    KC_TRNS,    KC_TRNS,    
            KC_TRNS,    KC_NO,      KC_NO,      KC_NO,      KC_NO,          KC_TRNS,        KC_TRNS,        C(KC_L),    KC_PSCR,    KC_TRNS,    KC_TRNS,    KC_TRNS, 
            KC_LCTL,    KC_LGUI,    KC_LALT,    KC_TRNS,    KC_TRNS,        KC_NO,          KC_TRNS,        MO(5),      KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS),
    
    [4] = LAYOUT_preonic_grid(
            KC_GRV,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_7,       KC_8,       KC_MINS,    KC_EQL,     KC_BSLS,        
            KC_TRNS,    KC_1,       A(KC_LEFT), KC_3,       KC_4,       KC_5,       KC_6,       KC_7,       G(KC_RGHT), KC_LBRC,    KC_RBRC,    KC_DEL,        
            KC_DEL,     KC_MUTE,    KC_MRWD,    KC_MFFD,    KC_MPLY,    KC_F5,      KC_HOME,    KC_PGDN,    KC_PGUP,    KC_END,     KC_TRNS,    KC_BSLS,        
            KC_TRNS,    KC_VOLD,    KC_VOLU,    KC_F10,     KC_F11,     A(KC_RGHT), KC_NUHS,    KC_NUBS,    KC_MINS,    KC_EQL,     KC_TRNS,    KC_TRNS,
            KC_TRNS,    KC_TRNS,    KC_TRNS,    MO(5),      KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS),

	[5] = LAYOUT_preonic_grid(
            KC_TRNS,    DF(0),      DF(1),      DF(6),       RGB_HUI,    RGB_HUD,    RGB_SAI,    RGB_SAD,    RGB_VAI,    RGB_VAD,    RGB_TOG,    RGB_MOD,
            RESET,      KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    TERM_ON,    TERM_OFF,   KC_TRNS,    KC_TRNS,    RGB_RMOD,
            DEBUG,      KC_TRNS,    MU_MOD,     AU_ON,      AU_OFF,     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, 
            KC_TRNS,    MUV_DE,     MUV_IN,     MU_ON,      MU_OFF,     MI_ON,      MI_OFF,     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, 
            KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS),

	[6] = LAYOUT_preonic_grid(
            KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      DF(0), 
            KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      
            KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_TRNS,    KC_NO,      
            KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      
            MEH(KC_A),  MEH(KC_B),  MEH(KC_C),  MEH(KC_D),  MEH(KC_E),  MEH(KC_F),  MEH(KC_G),  MEH(KC_H),  KC_NO,      KC_NO,      KC_NO,      KC_NO)      
};

bool muse_mode = false;
uint8_t last_muse_note = 0;
uint16_t muse_counter = 0;
uint8_t muse_offset = 70; 
uint16_t muse_tempo = 50; 

void encoder_update_user(uint8_t index, bool clockwise) {
  if (muse_mode) {
    if (IS_LAYER_ON(4)) {
      if (clockwise) {
        muse_offset++;
      } else {
        muse_offset--;
      }
    } else {
      if (clockwise) {
        muse_tempo+=1;
      } else {
        muse_tempo-=1;
      }
    }
  } else {
    if (clockwise) {
      register_code(KC__VOLDOWN);
      unregister_code(KC__VOLDOWN);
    } else {
      register_code(KC__VOLUP);
      unregister_code(KC__VOLUP);
    }
  }
}

