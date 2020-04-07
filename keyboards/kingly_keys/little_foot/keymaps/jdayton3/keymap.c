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
  cmb_Q, cmb_W, cmb_E, cmb_R, cmb_T, cmb_Y, cmb_U, cmb_I, cmb_O, cmb_P,
  cmb_A, cmb_S, cmb_D, cmb_F, cmb_G, cmb_H, cmb_J, cmb_K, cmb_L, cmb_COLON,
  cmb_Z, cmb_X, cmb_C, cmb_V, cmb_B, cmb_N, cmb_M, cmb_LT, cmb_GT, cmb_QUES
};

const uint16_t PROGMEM Q_cmb[] = {KC_Q, KC_1, COMBO_END};
const uint16_t PROGMEM W_cmb[] = {KC_W, KC_2, COMBO_END};
const uint16_t PROGMEM E_cmb[] = {KC_E, KC_3, COMBO_END};
const uint16_t PROGMEM R_cmb[] = {KC_R, KC_4, COMBO_END};
const uint16_t PROGMEM T_cmb[] = {KC_T, KC_5, COMBO_END};
const uint16_t PROGMEM Y_cmb[] = {KC_Y, KC_6, COMBO_END};
const uint16_t PROGMEM U_cmb[] = {KC_U, KC_7, COMBO_END};
const uint16_t PROGMEM I_cmb[] = {KC_I, KC_8, COMBO_END};
const uint16_t PROGMEM O_cmb[] = {KC_O, KC_9, COMBO_END};
const uint16_t PROGMEM P_cmb[] = {KC_P, KC_0, COMBO_END};
const uint16_t PROGMEM A_cmb[] = {KC_A, KC_Q, COMBO_END};
const uint16_t PROGMEM S_cmb[] = {KC_S, KC_W, COMBO_END};
const uint16_t PROGMEM D_cmb[] = {KC_D, KC_E, COMBO_END};
const uint16_t PROGMEM F_cmb[] = {KC_F, KC_R, COMBO_END};
const uint16_t PROGMEM G_cmb[] = {KC_G, KC_T, COMBO_END};
const uint16_t PROGMEM H_cmb[] = {KC_H, KC_Y, COMBO_END};
const uint16_t PROGMEM J_cmb[] = {KC_J, KC_U, COMBO_END};
const uint16_t PROGMEM K_cmb[] = {KC_K, KC_I, COMBO_END};
const uint16_t PROGMEM L_cmb[] = {KC_L, KC_O, COMBO_END};
const uint16_t PROGMEM COLON_cmb[] = {KC_SCLN, KC_P, COMBO_END};
const uint16_t PROGMEM Z_cmb[] = {KC_Z, KC_A, COMBO_END};
const uint16_t PROGMEM X_cmb[] = {KC_X, KC_S, COMBO_END};
const uint16_t PROGMEM C_cmb[] = {KC_C, KC_D, COMBO_END};
const uint16_t PROGMEM V_cmb[] = {KC_V, KC_F, COMBO_END};
const uint16_t PROGMEM B_cmb[] = {KC_B, KC_G, COMBO_END};
const uint16_t PROGMEM N_cmb[] = {KC_N, KC_H, COMBO_END};
const uint16_t PROGMEM M_cmb[] = {KC_M, KC_J, COMBO_END};
const uint16_t PROGMEM LT_cmb[] = {KC_COMM, KC_K, COMBO_END};
const uint16_t PROGMEM GT_cmb[] = {KC_DOT, KC_L, COMBO_END};
const uint16_t PROGMEM QUES_cmb[] = {KC_SLSH, KC_SCLN, COMBO_END};

combo_t key_combos[] = {
  [cmb_Q] = COMBO(Q_cmb, LSFT(KC_Q)),
  [cmb_W] = COMBO(W_cmb, LSFT(KC_W)),
  [cmb_E] = COMBO(E_cmb, LSFT(KC_E)),
  [cmb_R] = COMBO(R_cmb, LSFT(KC_R)),
  [cmb_T] = COMBO(T_cmb, LSFT(KC_T)),
  [cmb_Y] = COMBO(Y_cmb, LSFT(KC_Y)),
  [cmb_U] = COMBO(U_cmb, LSFT(KC_U)),
  [cmb_I] = COMBO(I_cmb, LSFT(KC_I)),
  [cmb_O] = COMBO(O_cmb, LSFT(KC_O)),
  [cmb_P] = COMBO(P_cmb, LSFT(KC_P)),
  [cmb_A] = COMBO(A_cmb, LSFT(KC_A)),
  [cmb_S] = COMBO(S_cmb, LSFT(KC_S)),
  [cmb_D] = COMBO(D_cmb, LSFT(KC_D)),
  [cmb_F] = COMBO(F_cmb, LSFT(KC_F)),
  [cmb_G] = COMBO(G_cmb, LSFT(KC_G)),
  [cmb_H] = COMBO(H_cmb, LSFT(KC_H)),
  [cmb_J] = COMBO(J_cmb, LSFT(KC_J)),
  [cmb_K] = COMBO(K_cmb, LSFT(KC_K)),
  [cmb_L] = COMBO(L_cmb, LSFT(KC_L)),
  [cmb_COLON] = COMBO(COLON_cmb, LSFT(KC_SCLN)),
  [cmb_Z] = COMBO(Z_cmb, LSFT(KC_Z)),
  [cmb_X] = COMBO(X_cmb, LSFT(KC_X)),
  [cmb_C] = COMBO(C_cmb, LSFT(KC_C)),
  [cmb_V] = COMBO(V_cmb, LSFT(KC_V)),
  [cmb_B] = COMBO(B_cmb, LSFT(KC_B)),
  [cmb_N] = COMBO(N_cmb, LSFT(KC_N)),
  [cmb_M] = COMBO(M_cmb, LSFT(KC_M)),
  [cmb_LT] = COMBO(LT_cmb, LSFT(KC_COMM)),
  [cmb_GT] = COMBO(GT_cmb, LSFT(KC_DOT)),
  [cmb_QUES] = COMBO(QUES_cmb, LSFT(KC_SLSH))
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT_split_space_base(
        TD(TD_1), TD(TD_2), TD(TD_3), TD(TD_4), TD(TD_5), TD(TD_6), TD(TD_7), TD(TD_8), TD(TD_9), TD(TD_0),
		KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
		KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L,  KC_SCLN,
		KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,
                GUI_T(KC_TAB), SFT_T(KC_BSPC), ALT_T(KC_SPC), CTL_T(KC_ENT)
  )
};
