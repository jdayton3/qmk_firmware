#include QMK_KEYBOARD_H
#include "quantum.h"

// Layer names
enum{
  // - Base layer:
  _BASE
};

//Tap Dance Declarations
enum {
  TD_QUES_ENT = 0,
  TD_SPC_SHFT = 1,
  TD_CTRL_Z = 2,
  TD_CTRL_Y = 3,
  TD_CTRL_C = 4,
  TD_CTRL_V = 5,
  TD_CTRL_A = 6,
  TD_P_BSLS = 7,
  TD_QUOTE = 8,
  TD_SDCOL = 9,
  TD_1 = 10,
  TD_2 = 11,
  TD_3 = 12,
  TD_4 = 13,
  TD_5 = 14,
  TD_6 = 15,
  TD_7 = 16,
  TD_8 = 17,
  TD_9 = 18,
  TD_0 = 19,
};

//Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_QUES_ENT]  = ACTION_TAP_DANCE_DOUBLE(KC_SLSH, KC_ENT),
  [TD_SPC_SHFT]  = ACTION_TAP_DANCE_DOUBLE(KC_SPACE, KC_LSFT),
  [TD_CTRL_Z]    = ACTION_TAP_DANCE_DOUBLE(KC_Z, LCTL(KC_Z)),
  [TD_CTRL_Y]    = ACTION_TAP_DANCE_DOUBLE(KC_Y, LCTL(KC_Y)),
  [TD_CTRL_C]    = ACTION_TAP_DANCE_DOUBLE(KC_C, LCTL(KC_C)),
  [TD_CTRL_V]    = ACTION_TAP_DANCE_DOUBLE(KC_V, LCTL(KC_V)),
  [TD_CTRL_A]    = ACTION_TAP_DANCE_DOUBLE(KC_A, LCTL(KC_A)),
  [TD_P_BSLS]    = ACTION_TAP_DANCE_DOUBLE(KC_P, KC_BSLS),
  [TD_QUOTE]     = ACTION_TAP_DANCE_DOUBLE(KC_QUOTE, KC_DQT),
  [TD_SDCOL]       = ACTION_TAP_DANCE_DOUBLE(KC_SCLN, KC_COLN),
  [TD_1] = ACTION_TAP_DANCE_DOUBLE(KC_1, KC_EXLM),
  [TD_2] = ACTION_TAP_DANCE_DOUBLE(KC_2, KC_AT),
  [TD_3] = ACTION_TAP_DANCE_DOUBLE(KC_3, KC_HASH),
  [TD_4] = ACTION_TAP_DANCE_DOUBLE(KC_4, KC_DLR),
  [TD_5] = ACTION_TAP_DANCE_DOUBLE(KC_5, KC_PERC),
  [TD_6] = ACTION_TAP_DANCE_DOUBLE(KC_6, KC_CIRC),
  [TD_7] = ACTION_TAP_DANCE_DOUBLE(KC_7, KC_AMPR),
  [TD_8] = ACTION_TAP_DANCE_DOUBLE(KC_8, KC_ASTR),
  [TD_9] = ACTION_TAP_DANCE_DOUBLE(KC_9, KC_LPRN),
  [TD_0] = ACTION_TAP_DANCE_DOUBLE(KC_0, KC_RPRN),
// Other declarations would go here, separated by commas, if you have them
};

enum combos {
  cmb_Q,
};

const uint16_t PROGMEM Q_cmb[] = {KC_Q, KC_1, COMBO_END};

combo_t key_combos[] = {
  [cmb_Q] = COMBO(Q_cmb, LSFT(KC_Q)),
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT_split_space_base(
        KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0,
		KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
		KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L,  KC_SCLN,
		KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,
                GUI_T(KC_TAB), MT(KC_DEL, KC_BSPC), ALT_T(KC_SPC), CTL_T(KC_ENT)
  )
};
