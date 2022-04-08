#include QMK_KEYBOARD_H
#include <time.h>

enum layers {
  LAYER_BASE,
  LAYER_NO_DUAL_FUNCTION,
  LAYER_QWERTY,
  LAYER_PARENS,
  LAYER_NUMBERS_SYMBOLS,
  LAYER_HEX_NUMPAD,
  LAYER_NAVIGATION,
  LAYER_FUNCTION,
  LAYER_GAMING,
  LAYER_MEDIA,
  LAYER_KEYBOARD,
};

enum custom_keycodes {
  RGB_SLD = SAFE_RANGE,
  HSV_0_255_255,
  HSV_86_255_255,
  HSV_172_255_255,
  HSV_129_255_192,
  HSV_32_255_255,
  HSV_235_255_224,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_5,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  EMO_RANGE_START_EXCLUSIVE,
  EMO_THINK,
  EMO_CONFUSED,
  EMO_WOW,
  EMO_EMBARRASSED,
  EMO_SWEATSMILE,
  EMO_WINK,
  EMO_CRY,
  EMO_EYEROLL,
  EMO_GRIMACE,
  EMO_SCREAM,
  EMO_ANGRY,
  EMO_EYES,
  EMO_SHRUG,
  EMO_FACEPALM,
  EMO_BOW,
  EMO_PRAY,
  EMO_THUMBSUP,
  EMO_POINTUP,
  EMO_HAND,
  EMO_WAVE,
  EMO_CLAP,
  EMO_TADA,
  EMO_BURGER,
  EMO_HEART,
  EMO_100,
  EMO_CHECK,
  EMO_X,
  EMO_RANGE_END_EXCLUSIVE,
};

enum tap_dance_codes {
  DANCE_XCV,
  DANCE_NUMROW_1,
  DANCE_NUMROW_2,
  DANCE_NUMROW_3,
  DANCE_NUMROW_4,
  DANCE_NUMROW_5,
  DANCE_NUMROW_6,
  DANCE_NUMROW_7,
  DANCE_NUMROW_8,
  DANCE_NUMROW_9,
  DANCE_NUMROW_0,
  DANCE_F01,
  DANCE_F02,
  DANCE_F03,
  DANCE_F04,
  DANCE_F05,
  DANCE_F06,
  DANCE_F07,
  DANCE_F08,
  DANCE_F09,
  DANCE_F10,
  DANCE_F11,
  DANCE_F12,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [LAYER_BASE] = LAYOUT( // Base
    KC_ESCAPE          , TD(DANCE_NUMROW_1), TD(DANCE_NUMROW_2), TD(DANCE_NUMROW_3)    , TD(DANCE_NUMROW_4), TD(DANCE_NUMROW_5)       , TT(LAYER_KEYBOARD)        ,                    TG(LAYER_QWERTY)         , TD(DANCE_NUMROW_6)            , TD(DANCE_NUMROW_7), TD(DANCE_NUMROW_8)    , TD(DANCE_NUMROW_9), TD(DANCE_NUMROW_0)  , KC_ENTER      ,
    KC_TRANSPARENT     , C_S_T(KC_Q)       , KC_W              , LT(LAYER_PARENS, KC_F), KC_P              , KC_B                     , TG(LAYER_NO_DUAL_FUNCTION),                    TG(LAYER_NUMBERS_SYMBOLS), KC_J                          , KC_L              , LT(LAYER_PARENS, KC_U), KC_Y              , C_S_T(KC_SCOLON)    , KC_BSLASH     ,
    TD(DANCE_XCV)      , LGUI_T(KC_A)      , LALT_T(KC_R)      , LCTL_T(KC_S)          , LSFT_T(KC_T)      , KC_G                     , LCTL(LGUI(KC_LEFT))       ,                    LCTL(LGUI(KC_RIGHT))     , KC_M                          , RSFT_T(KC_N)      , RCTL_T(KC_E)          , RALT_T(KC_I)      , RGUI_T(KC_O)        , KC_QUOTE      ,
    LSFT_T(KC_CAPSLOCK), KC_Z              , KC_X              , KC_C                  , KC_D              , KC_V                     , KC_SPACE                  ,                    TG(LAYER_GAMING)         , KC_K                          , KC_H              , KC_COMMA              , KC_DOT            , KC_SLASH            , KC_GRAVE      ,
    LCTL(KC_S)         , LCTL(KC_A)        , LCTL(KC_Z)        , MO(LAYER_FUNCTION)    , KC_ENTER          , MO(LAYER_NUMBERS_SYMBOLS), KC_TAB                    ,                    KC_DEL                   , LT(LAYER_NAVIGATION, KC_SPACE), KC_BSPACE         , MO(LAYER_FUNCTION)    , MO(LAYER_MEDIA)   , TT(LAYER_NAVIGATION), KC_TRANSPARENT
  ),
  [LAYER_NO_DUAL_FUNCTION] = LAYOUT( // Colemak-DH, no dual-function keys
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_Q          , KC_W          , KC_F          , KC_P          , KC_B          , KC_TRANSPARENT,                    KC_TRANSPARENT, KC_J          , KC_L          , KC_U          , KC_Y          , KC_SCOLON     , KC_TRANSPARENT,
    KC_TRANSPARENT, KC_A          , KC_R          , KC_S          , KC_T          , KC_G          , KC_TRANSPARENT,                    KC_TRANSPARENT, KC_M          , KC_N          , KC_E          , KC_I          , KC_O          , KC_TRANSPARENT,
    KC_LSHIFT     , KC_Z          , KC_X          , KC_C          , KC_D          , KC_V          , KC_TRANSPARENT,                    KC_TRANSPARENT, KC_K          , KC_H          , KC_COMMA      , KC_DOT        , KC_SLASH      , KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [LAYER_QWERTY] = LAYOUT( // QWERTY
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT   , KC_TRANSPARENT,
    KC_TRANSPARENT, C_S_T(KC_Q)   , KC_W          , LT(3,KC_E)    , KC_R          , KC_T,           KC_TRANSPARENT,                    KC_TRANSPARENT, KC_Y          , KC_U          , LT(3, KC_I)   , KC_O          , C_S_T(KC_P)      , KC_TRANSPARENT,
    KC_TRANSPARENT, LGUI_T(KC_A)  , LALT_T(KC_S)  , LCTL_T(KC_D)  , LSFT_T(KC_F)  , KC_G,           KC_TRANSPARENT,                    KC_TRANSPARENT, KC_H          , RSFT_T(KC_J)  , RCTL_T(KC_K)  , RALT_T(KC_L)  , RGUI_T(KC_SCOLON), KC_TRANSPARENT,
    KC_TRANSPARENT, KC_Z          , KC_X          , KC_C          , KC_V          , KC_B,           KC_TRANSPARENT,                    KC_TRANSPARENT, KC_N          , KC_M          , KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT   , KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT   , KC_TRANSPARENT
  ),
  [LAYER_PARENS] = LAYOUT( // Parens and emojis
    EMO_THINK  , EMO_CONFUSED, EMO_WOW   , EMO_EMBARRASSED, EMO_SWEATSMILE, EMO_WINK      , EMO_CRY       ,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    EMO_EYEROLL, EMO_GRIMACE , EMO_SCREAM, EMO_ANGRY      , EMO_EYES      , ST_MACRO_2    , KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_5    ,
    EMO_SHRUG  , EMO_FACEPALM, EMO_BOW   , EMO_PRAY       , EMO_THUMBSUP  , EMO_POINTUP   , KC_TRANSPARENT,                    KC_TRANSPARENT, ST_MACRO_3    , KC_LCBR       , KC_LPRN       , KC_LBRACKET   , KC_LABK       , KC_TRANSPARENT,
    EMO_HAND   , EMO_WAVE    , EMO_CLAP  , EMO_TADA       , EMO_BURGER    , KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_RCBR       , KC_RPRN       , KC_RBRACKET   , KC_RABK       , KC_TRANSPARENT,
    EMO_HEART  , EMO_100     , EMO_CHECK , EMO_X          , KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [LAYER_NUMBERS_SYMBOLS] = LAYOUT( // Numbers and symbols
    KC_TRANSPARENT , KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_LPRN       , KC_RPRN, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    LM(5, MOD_LALT), KC_UNDS       , KC_AT         , KC_HASH       , KC_DLR        , KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_7          , KC_8   , KC_9          , KC_KP_ASTERISK, KC_KP_SLASH   ,
    KC_TRANSPARENT , KC_EXLM       , KC_PLUS       , KC_MINUS      , KC_EQUAL      , KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_CALCULATOR , KC_4          , KC_5   , KC_6          , KC_KP_PLUS    , KC_KP_MINUS   ,
    KC_TRANSPARENT , KC_PERC       , KC_CIRC       , KC_AMPR       , KC_ASTR       , KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_COMMA      , KC_1          , KC_2   , KC_3          , KC_KP_ENTER   , KC_TRANSPARENT,
    KC_TRANSPARENT , KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_0          , KC_COLN, KC_DOT        , KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [LAYER_HEX_NUMPAD] = LAYOUT( // Hex numpad
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                    KC_A          , KC_B          , KC_C   , KC_D          , KC_E          , KC_F          , KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_7, KC_KP_8       , KC_KP_9       , KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                    KC_X          , KC_TRANSPARENT, KC_KP_4, KC_KP_5       , KC_KP_6       , KC_KP_PLUS    , KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_1, KC_KP_2       , KC_KP_3       , KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_0, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [LAYER_NAVIGATION] = LAYOUT( // Navigation
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_PGUP       , KC_UP         , KC_PGDOWN     , KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_LGUI       , KC_LALT       , KC_LCTRL      , KC_LSHIFT     , KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT       , KC_DOWN       , KC_RIGHT      , KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, LCTL(KC_Z)    , LCTL(KC_X)    , LCTL(KC_C)    , KC_TRANSPARENT, LCTL(KC_V)    , KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_HOME       , KC_END        , KC_TRANSPARENT, KC_LCTRL      , KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [LAYER_FUNCTION] = LAYOUT( // Function
    LALT(KC_F4)          , KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT  , KC_TRANSPARENT , LCTL(KC_EQUAL),                    KC_INSERT     , KC_NUMLOCK    , KC_SCROLLLOCK , KC_APPLICATION, KC_TRANSPARENT, LGUI(KC_PAUSE), KC_PSCREEN    ,
    KC_TRANSPARENT       , KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_UP)   , KC_TRANSPARENT  , LGUI(KC_PGUP)  , LCTL(KC_MINUS),                    KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_F09) , TD(DANCE_F10) , TD(DANCE_F11) , TD(DANCE_F12) , KC_TRANSPARENT,
    KC_TRANSPARENT       , KC_TRANSPARENT, LGUI(KC_LEFT) , LGUI(KC_DOWN) , LGUI(KC_RIGHT)  , LGUI(KC_PGDOWN), LCTL(KC_KP_0) ,                    KC_TRANSPARENT, LALT(KC_SPACE), TD(DANCE_F05) , TD(DANCE_F06) , TD(DANCE_F07) , TD(DANCE_F08) , KC_TRANSPARENT,
    KC_TRANSPARENT       , KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(LALT(KC_D)), KC_TRANSPARENT , KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_F01) , TD(DANCE_F02) , TD(DANCE_F03) , TD(DANCE_F04) , KC_TRANSPARENT,
    LCTL(LSFT(KC_ESCAPE)), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT  , KC_TRANSPARENT , KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [LAYER_GAMING] = LAYOUT( // Gaming
    KC_ESCAPE, KC_1 , KC_2 , KC_3 , KC_4   , KC_5    , KC_6     ,                    KC_F1         , KC_F2   , KC_F3    , KC_NO   , KC_NO          , KC_NO     , KC_ENTER  ,
    KC_TAB   , KC_Q , KC_W , KC_E , KC_R   , KC_T    , KC_NO    ,                    KC_NO         , KC_Y    , KC_U     , KC_I    , KC_O           , KC_P      , KC_BSLASH ,
    KC_NO    , KC_A , KC_S , KC_D , KC_F   , KC_G    , KC_NO    ,                    KC_NO         , KC_H    , KC_J     , KC_K    , KC_L           , KC_SCOLON , KC_QUOTE  ,
    KC_LSHIFT, KC_Z , KC_X , KC_C , KC_V   , KC_B    , KC_GRAVE ,                    KC_TRANSPARENT, KC_N    , KC_M     , KC_COMMA, KC_DOT         , KC_SLASH  , ST_MACRO_7,
    KC_LCTRL , KC_NO, KC_NO, KC_NO, KC_LALT, KC_SPACE, KC_LSHIFT,                    KC_DELETE     , KC_SPACE, KC_BSPACE, KC_NO   , MO(LAYER_MEDIA), ST_MACRO_8, ST_MACRO_9
  ),
  [LAYER_MEDIA] = LAYOUT( // Media
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT     , KC_TRANSPARENT     , KC_TRANSPARENT     , KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_MS_ACCEL2  , KC_MS_BTN2    , KC_MS_UP      , KC_MS_BTN1    , KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT     , KC_AUDIO_VOL_UP    , KC_TRANSPARENT     , KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_MS_ACCEL1  , KC_MS_LEFT    , KC_MS_DOWN    , KC_MS_RIGHT   , KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_MS_ACCEL0  , KC_TRANSPARENT, KC_MS_BTN3    , KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_AUDIO_MUTE , KC_TRANSPARENT     , KC_AUDIO_VOL_DOWN  , KC_TRANSPARENT     , KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT     , KC_TRANSPARENT     , KC_TRANSPARENT     , KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [LAYER_KEYBOARD] = LAYOUT( // Keyboard
    KC_TRANSPARENT, RESET         , KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, HSV_0_255_255  , HSV_86_255_255, HSV_172_255_255,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, HSV_129_255_192, HSV_32_255_255, HSV_235_255_224,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RGB_MOD       ,                    RGB_TOG       , KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RGB_HUI       , RGB_SAI       ,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RGB_SPI       , RGB_SPD       , RGB_SLD       ,                    KC_TRANSPARENT, RGB_VAD       , RGB_VAI       , KC_TRANSPARENT, KC_TRANSPARENT, RGB_HUD       , RGB_SAD
  ),
//   [LAYER_KEYBOARD] = LAYOUT( // Keyboard
//     AU_ON          , AU_OFF        , KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RESET         ,                    KC_TRANSPARENT    , KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, HSV_0_255_255  , HSV_86_255_255, HSV_172_255_255,
//     MU_ON          , MU_OFF        , MU_MOD        , KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT    , KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, HSV_129_255_192, HSV_32_255_255, HSV_235_255_224,
//     KC_TRANSPARENT , KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT    , KC_ASON       , KC_ASUP       , KC_TRANSPARENT, KC_TRANSPARENT , KC_TRANSPARENT, MOON_LED_LEVEL ,
//     DYN_MACRO_PLAY2, DYN_REC_STOP  , DYN_REC_START2, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RGB_MOD       ,                    RGB_TOG           , KC_ASOFF      , KC_ASDN       , KC_TRANSPARENT, KC_TRANSPARENT , RGB_HUI       , RGB_SAI        ,
//     DYN_MACRO_PLAY1, DYN_REC_STOP  , DYN_REC_START1, WEBUSB_PAIR   , RGB_SPI       , RGB_SPD       , RGB_SLD       ,                    TOGGLE_LAYER_COLOR, RGB_VAD       , RGB_VAI       , KC_ASRP       , KC_TRANSPARENT , RGB_HUD       , RGB_SAD
//   ),
};

#ifdef AUDIO_ENABLE
float tone_qwerty[][2]     = SONG(QWERTY_SOUND);
#endif

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

unsigned char base_layer_hue = 129;
unsigned char base_layer_saturation = 255;
unsigned char base_layer_value = 192;

void keyboard_post_init_user(void) {
    srand(time(NULL));
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  base_layer_hue += base_layer_hue == 0 ? 1 : base_layer_hue == 255 ? -1 : rand() % 2 ? 1 : -1;
  base_layer_saturation += base_layer_saturation == 0 ? 1 : base_layer_saturation == 255 ? -1 : rand() % 2 ? 1 : -1;
  base_layer_value += base_layer_value == 0 ? 1 : base_layer_value == 255 ? -1 : rand() % 2 ? 1 : -1;
  rgblight_sethsv(base_layer_hue, base_layer_saturation, base_layer_value);

  switch (keycode) {
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_SCOLON)) SS_DELAY(100) SS_TAP(X_MINUS) SS_DELAY(100) SS_LSFT(SS_TAP(X_0)));

    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_SPACE) SS_DELAY(100) SS_TAP(X_EQUAL) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)) SS_DELAY(100) SS_TAP(X_SPACE));

    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_C)) SS_DELAY(100) SS_LSFT(SS_TAP(X_SCOLON)) SS_DELAY(100) SS_TAP(X_BSLASH));

    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_ENTER) SS_DELAY(100) SS_TAP(X_G) SS_DELAY(100) SS_TAP(X_J));

    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_ENTER) SS_DELAY(100) SS_TAP(X_G) SS_DELAY(100) SS_TAP(X_G));

    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_ENTER) SS_DELAY(100) SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_Y));

    }
    break;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_0_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,255,255);
      }
      return false;
    case HSV_86_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(86,255,255);
      }
      return false;
    case HSV_172_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(172,255,255);
      }
      return false;
    case HSV_129_255_192:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(129,255,192);
      }
      return false;
    case HSV_32_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(32,255,255);
      }
      return false;
    case HSV_235_255_224:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(235,255,224);
      }
      return false;
  }
  return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case LAYER_NO_DUAL_FUNCTION:
            rgblight_mode(1);
            rgblight_sethsv(86, 255, 255);
            break;
        case LAYER_QWERTY:
            rgblight_mode(1);
            rgblight_sethsv(172, 255, 255);
            break;
        case LAYER_PARENS:
            rgblight_mode(1);
            rgblight_sethsv(162, 107, 193);
            break;
        case LAYER_NUMBERS_SYMBOLS:
            rgblight_mode(1);
            rgblight_sethsv(129, 255, 192);
            break;
        case LAYER_NAVIGATION:
            rgblight_mode(1);
            rgblight_sethsv(32, 255, 255);
            break;
        case LAYER_FUNCTION:
            rgblight_mode(1);
            rgblight_sethsv(235, 255, 224);
            break;
        case LAYER_GAMING:
            rgblight_mode(1);
            rgblight_sethsv(0, 0, 255);
            break;
        case LAYER_MEDIA:
            rgblight_mode(1);
            rgblight_sethsv(60, 255, 255);
            break;
        case LAYER_KEYBOARD:
            rgblight_mode(1);
            rgblight_sethsv(0, 255, 255);
            break;
        default:
            rgblight_mode(1);
            rgblight_sethsv(base_layer_hue, base_layer_saturation, base_layer_value);
            break;
    }
  return state;
}

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[23];

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_xcv(qk_tap_dance_state_t *state, void *user_data);
void dance_xcv_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_xcv_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_xcv(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_V));
        tap_code16(LCTL(KC_V));
        tap_code16(LCTL(KC_V));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_V));
    }
}

void dance_xcv_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DANCE_XCV].step = dance_step(state);
    switch (dance_state[DANCE_XCV].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_V)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_C)); break;
        case DOUBLE_TAP: register_code16(LCTL(LSFT(KC_V))); break;
        case DOUBLE_HOLD: register_code16(LCTL(KC_X)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_V)); register_code16(LCTL(KC_V));
    }
}

void dance_xcv_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[DANCE_XCV].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_V)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_C)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LSFT(KC_V))); break;
        case DOUBLE_HOLD: unregister_code16(LCTL(KC_X)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_V)); break;
    }
    dance_state[DANCE_XCV].step = 0;
}
void on_dance_numrow1(qk_tap_dance_state_t *state, void *user_data);
void dance_numrow1_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_numrow1_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_numrow1(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_1));
        tap_code16(LGUI(KC_1));
        tap_code16(LGUI(KC_1));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_1));
    }
}

void dance_numrow1_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DANCE_NUMROW_1].step = dance_step(state);
    switch (dance_state[DANCE_NUMROW_1].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_1)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_1)); break;
        case DOUBLE_TAP: register_code16(LCTL(LGUI(LSFT(KC_1)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_1)); register_code16(LGUI(KC_1));
    }
}

void dance_numrow1_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[DANCE_NUMROW_1].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_1)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_1)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LGUI(LSFT(KC_1)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_1)); break;
    }
    dance_state[DANCE_NUMROW_1].step = 0;
}
void on_dance_numrow2(qk_tap_dance_state_t *state, void *user_data);
void dance_numrow2_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_numrow2_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_numrow2(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_2));
        tap_code16(LGUI(KC_2));
        tap_code16(LGUI(KC_2));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_2));
    }
}

void dance_numrow2_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DANCE_NUMROW_2].step = dance_step(state);
    switch (dance_state[DANCE_NUMROW_2].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_2)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_2)); break;
        case DOUBLE_TAP: register_code16(LCTL(LGUI(LSFT(KC_2)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_2)); register_code16(LGUI(KC_2));
    }
}

void dance_numrow2_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[DANCE_NUMROW_2].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_2)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_2)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LGUI(LSFT(KC_2)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_2)); break;
    }
    dance_state[DANCE_NUMROW_2].step = 0;
}
void on_dance_numrow3(qk_tap_dance_state_t *state, void *user_data);
void dance_numrow3_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_numrow3_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_numrow3(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_3));
        tap_code16(LGUI(KC_3));
        tap_code16(LGUI(KC_3));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_3));
    }
}

void dance_numrow3_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DANCE_NUMROW_3].step = dance_step(state);
    switch (dance_state[DANCE_NUMROW_3].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_3)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_3)); break;
        case DOUBLE_TAP: register_code16(LCTL(LGUI(LSFT(KC_3)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_3)); register_code16(LGUI(KC_3));
    }
}

void dance_numrow3_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[DANCE_NUMROW_3].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_3)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_3)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LGUI(LSFT(KC_3)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_3)); break;
    }
    dance_state[DANCE_NUMROW_3].step = 0;
}
void on_dance_numrow4(qk_tap_dance_state_t *state, void *user_data);
void dance_numrow4_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_numrow4_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_numrow4(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_4));
        tap_code16(LGUI(KC_4));
        tap_code16(LGUI(KC_4));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_4));
    }
}

void dance_numrow4_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DANCE_NUMROW_4].step = dance_step(state);
    switch (dance_state[DANCE_NUMROW_4].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_4)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_4)); break;
        case DOUBLE_TAP: register_code16(LCTL(LGUI(LSFT(KC_4)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_4)); register_code16(LGUI(KC_4));
    }
}

void dance_numrow4_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[DANCE_NUMROW_4].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_4)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_4)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LGUI(LSFT(KC_4)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_4)); break;
    }
    dance_state[DANCE_NUMROW_4].step = 0;
}
void on_dance_numrow5(qk_tap_dance_state_t *state, void *user_data);
void dance_numrow5_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_numrow5_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_numrow5(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_5));
        tap_code16(LGUI(KC_5));
        tap_code16(LGUI(KC_5));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_5));
    }
}

void dance_numrow5_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DANCE_NUMROW_5].step = dance_step(state);
    switch (dance_state[DANCE_NUMROW_5].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_5)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_5)); break;
        case DOUBLE_TAP: register_code16(LCTL(LGUI(LSFT(KC_5)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_5)); register_code16(LGUI(KC_5));
    }
}

void dance_numrow5_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[DANCE_NUMROW_5].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_5)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_5)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LGUI(LSFT(KC_5)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_5)); break;
    }
    dance_state[DANCE_NUMROW_5].step = 0;
}
void on_dance_numrow6(qk_tap_dance_state_t *state, void *user_data);
void dance_numrow6_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_numrow6_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_numrow6(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_6));
        tap_code16(LGUI(KC_6));
        tap_code16(LGUI(KC_6));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_6));
    }
}

void dance_numrow6_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DANCE_NUMROW_6].step = dance_step(state);
    switch (dance_state[DANCE_NUMROW_6].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_6)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_6)); break;
        case DOUBLE_TAP: register_code16(LCTL(LGUI(LSFT(KC_6)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_6)); register_code16(LGUI(KC_6));
    }
}

void dance_numrow6_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[DANCE_NUMROW_6].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_6)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_6)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LGUI(LSFT(KC_6)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_6)); break;
    }
    dance_state[DANCE_NUMROW_6].step = 0;
}
void on_dance_numrow7(qk_tap_dance_state_t *state, void *user_data);
void dance_numrow7_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_numrow7_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_numrow7(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_7));
        tap_code16(LGUI(KC_7));
        tap_code16(LGUI(KC_7));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_7));
    }
}

void dance_numrow7_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DANCE_NUMROW_7].step = dance_step(state);
    switch (dance_state[DANCE_NUMROW_7].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_7)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_7)); break;
        case DOUBLE_TAP: register_code16(LCTL(LGUI(LSFT(KC_7)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_7)); register_code16(LGUI(KC_7));
    }
}

void dance_numrow7_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[DANCE_NUMROW_7].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_7)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_7)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LGUI(LSFT(KC_7)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_7)); break;
    }
    dance_state[DANCE_NUMROW_7].step = 0;
}
void on_dance_numrow8(qk_tap_dance_state_t *state, void *user_data);
void dance_numrow8_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_numrow8_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_numrow8(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_8));
        tap_code16(LGUI(KC_8));
        tap_code16(LGUI(KC_8));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_8));
    }
}

void dance_numrow8_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DANCE_NUMROW_8].step = dance_step(state);
    switch (dance_state[DANCE_NUMROW_8].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_8)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_8)); break;
        case DOUBLE_TAP: register_code16(LCTL(LGUI(LSFT(KC_8)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_8)); register_code16(LGUI(KC_8));
    }
}

void dance_numrow8_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[DANCE_NUMROW_8].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_8)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_8)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LGUI(LSFT(KC_8)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_8)); break;
    }
    dance_state[DANCE_NUMROW_8].step = 0;
}
void on_dance_numrow9(qk_tap_dance_state_t *state, void *user_data);
void dance_numrow9_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_numrow9_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_numrow9(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_9));
        tap_code16(LGUI(KC_9));
        tap_code16(LGUI(KC_9));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_9));
    }
}

void dance_numrow9_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DANCE_NUMROW_9].step = dance_step(state);
    switch (dance_state[DANCE_NUMROW_9].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_9)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_9)); break;
        case DOUBLE_TAP: register_code16(LCTL(LGUI(LSFT(KC_9)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_9)); register_code16(LGUI(KC_9));
    }
}

void dance_numrow9_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[DANCE_NUMROW_9].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_9)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_9)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LGUI(LSFT(KC_9)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_9)); break;
    }
    dance_state[DANCE_NUMROW_9].step = 0;
}
void on_dance_numrow0(qk_tap_dance_state_t *state, void *user_data);
void dance_numrow0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_numrow0_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_numrow0(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_0));
        tap_code16(LGUI(KC_0));
        tap_code16(LGUI(KC_0));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_0));
    }
}

void dance_numrow0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DANCE_NUMROW_0].step = dance_step(state);
    switch (dance_state[DANCE_NUMROW_0].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_0)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_0)); break;
        case DOUBLE_TAP: register_code16(LCTL(LGUI(LSFT(KC_0)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_0)); register_code16(LGUI(KC_0));
    }
}

void dance_numrow0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[DANCE_NUMROW_0].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_0)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_0)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LGUI(LSFT(KC_0)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_0)); break;
    }
    dance_state[DANCE_NUMROW_0].step = 0;
}
void on_dance_f01(qk_tap_dance_state_t *state, void *user_data);
void dance_f01_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_f01_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_f01(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F1);
        tap_code16(KC_F1);
        tap_code16(KC_F1);
    }
    if(state->count > 3) {
        tap_code16(KC_F1);
    }
}

void dance_f01_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DANCE_F01].step = dance_step(state);
    switch (dance_state[DANCE_F01].step) {
        case SINGLE_TAP: register_code16(KC_F1); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_F1)); break;
        case DOUBLE_TAP: register_code16(LALT(KC_F1)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_F1)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F1); register_code16(KC_F1);
    }
}

void dance_f01_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[DANCE_F01].step) {
        case SINGLE_TAP: unregister_code16(KC_F1); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_F1)); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_F1)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_F1)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F1); break;
    }
    dance_state[DANCE_F01].step = 0;
}
void on_dance_f02(qk_tap_dance_state_t *state, void *user_data);
void dance_f02_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_f02_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_f02(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F2);
        tap_code16(KC_F2);
        tap_code16(KC_F2);
    }
    if(state->count > 3) {
        tap_code16(KC_F2);
    }
}

void dance_f02_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DANCE_F02].step = dance_step(state);
    switch (dance_state[DANCE_F02].step) {
        case SINGLE_TAP: register_code16(KC_F2); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_F2)); break;
        case DOUBLE_TAP: register_code16(LALT(KC_F2)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_F2)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F2); register_code16(KC_F2);
    }
}

void dance_f02_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[DANCE_F02].step) {
        case SINGLE_TAP: unregister_code16(KC_F2); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_F2)); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_F2)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_F2)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F2); break;
    }
    dance_state[DANCE_F02].step = 0;
}
void on_dance_f03(qk_tap_dance_state_t *state, void *user_data);
void dance_f03_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_f03_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_f03(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F3);
        tap_code16(KC_F3);
        tap_code16(KC_F3);
    }
    if(state->count > 3) {
        tap_code16(KC_F3);
    }
}

void dance_f03_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DANCE_F03].step = dance_step(state);
    switch (dance_state[DANCE_F03].step) {
        case SINGLE_TAP: register_code16(KC_F3); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_F3)); break;
        case DOUBLE_TAP: register_code16(LALT(KC_F3)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_F3)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F3); register_code16(KC_F3);
    }
}

void dance_f03_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[DANCE_F03].step) {
        case SINGLE_TAP: unregister_code16(KC_F3); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_F3)); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_F3)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_F3)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F3); break;
    }
    dance_state[DANCE_F03].step = 0;
}
void on_dance_f04(qk_tap_dance_state_t *state, void *user_data);
void dance_f04_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_f04_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_f04(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F4);
        tap_code16(KC_F4);
        tap_code16(KC_F4);
    }
    if(state->count > 3) {
        tap_code16(KC_F4);
    }
}

void dance_f04_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DANCE_F04].step = dance_step(state);
    switch (dance_state[DANCE_F04].step) {
        case SINGLE_TAP: register_code16(KC_F4); break;
        case DOUBLE_TAP: register_code16(KC_F4); register_code16(KC_F4); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_F4)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F4); register_code16(KC_F4);
    }
}

void dance_f04_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[DANCE_F04].step) {
        case SINGLE_TAP: unregister_code16(KC_F4); break;
        case DOUBLE_TAP: unregister_code16(KC_F4); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_F4)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F4); break;
    }
    dance_state[DANCE_F04].step = 0;
}
void on_dance_f05(qk_tap_dance_state_t *state, void *user_data);
void dance_f05_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_f05_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_f05(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F5);
        tap_code16(KC_F5);
        tap_code16(KC_F5);
    }
    if(state->count > 3) {
        tap_code16(KC_F5);
    }
}

void dance_f05_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DANCE_F05].step = dance_step(state);
    switch (dance_state[DANCE_F05].step) {
        case SINGLE_TAP: register_code16(KC_F5); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_F5)); break;
        case DOUBLE_TAP: register_code16(LALT(KC_F5)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_F5)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F5); register_code16(KC_F5);
    }
}

void dance_f05_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[DANCE_F05].step) {
        case SINGLE_TAP: unregister_code16(KC_F5); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_F5)); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_F5)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_F5)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F5); break;
    }
    dance_state[DANCE_F05].step = 0;
}
void on_dance_f06(qk_tap_dance_state_t *state, void *user_data);
void dance_f06_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_f06_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_f06(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F6);
        tap_code16(KC_F6);
        tap_code16(KC_F6);
    }
    if(state->count > 3) {
        tap_code16(KC_F6);
    }
}

void dance_f06_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DANCE_F06].step = dance_step(state);
    switch (dance_state[DANCE_F06].step) {
        case SINGLE_TAP: register_code16(KC_F6); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_F6)); break;
        case DOUBLE_TAP: register_code16(LALT(KC_F6)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_F6)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F6); register_code16(KC_F6);
    }
}

void dance_f06_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[DANCE_F06].step) {
        case SINGLE_TAP: unregister_code16(KC_F6); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_F6)); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_F6)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_F6)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F6); break;
    }
    dance_state[DANCE_F06].step = 0;
}
void on_dance_f07(qk_tap_dance_state_t *state, void *user_data);
void dance_f07_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_f07_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_f07(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F7);
        tap_code16(KC_F7);
        tap_code16(KC_F7);
    }
    if(state->count > 3) {
        tap_code16(KC_F7);
    }
}

void dance_f07_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DANCE_F07].step = dance_step(state);
    switch (dance_state[DANCE_F07].step) {
        case SINGLE_TAP: register_code16(KC_F7); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_F7)); break;
        case DOUBLE_TAP: register_code16(LALT(KC_F7)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_F7)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F7); register_code16(KC_F7);
    }
}

void dance_f07_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[DANCE_F07].step) {
        case SINGLE_TAP: unregister_code16(KC_F7); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_F7)); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_F7)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_F7)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F7); break;
    }
    dance_state[DANCE_F07].step = 0;
}
void on_dance_f08(qk_tap_dance_state_t *state, void *user_data);
void dance_f08_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_f08_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_f08(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F8);
        tap_code16(KC_F8);
        tap_code16(KC_F8);
    }
    if(state->count > 3) {
        tap_code16(KC_F8);
    }
}

void dance_f08_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DANCE_F08].step = dance_step(state);
    switch (dance_state[DANCE_F08].step) {
        case SINGLE_TAP: register_code16(KC_F8); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_F8)); break;
        case DOUBLE_TAP: register_code16(LALT(KC_F8)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_F8)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F8); register_code16(KC_F8);
    }
}

void dance_f08_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[DANCE_F08].step) {
        case SINGLE_TAP: unregister_code16(KC_F8); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_F8)); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_F8)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_F8)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F8); break;
    }
    dance_state[DANCE_F08].step = 0;
}
void on_dance_f09(qk_tap_dance_state_t *state, void *user_data);
void dance_f09_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_f09_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_f09(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F9);
        tap_code16(KC_F9);
        tap_code16(KC_F9);
    }
    if(state->count > 3) {
        tap_code16(KC_F9);
    }
}

void dance_f09_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DANCE_F09].step = dance_step(state);
    switch (dance_state[DANCE_F09].step) {
        case SINGLE_TAP: register_code16(KC_F9); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_F9)); break;
        case DOUBLE_TAP: register_code16(LALT(KC_F9)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_F9)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F9); register_code16(KC_F9);
    }
}

void dance_f09_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[DANCE_F09].step) {
        case SINGLE_TAP: unregister_code16(KC_F9); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_F9)); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_F9)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_F9)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F9); break;
    }
    dance_state[DANCE_F09].step = 0;
}
void on_dance_f10(qk_tap_dance_state_t *state, void *user_data);
void dance_f10_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_f10_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_f10(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F10);
        tap_code16(KC_F10);
        tap_code16(KC_F10);
    }
    if(state->count > 3) {
        tap_code16(KC_F10);
    }
}

void dance_f10_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DANCE_F10].step = dance_step(state);
    switch (dance_state[DANCE_F10].step) {
        case SINGLE_TAP: register_code16(KC_F10); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_F10)); break;
        case DOUBLE_TAP: register_code16(LALT(KC_F10)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_F10)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F10); register_code16(KC_F10);
    }
}

void dance_f10_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[DANCE_F10].step) {
        case SINGLE_TAP: unregister_code16(KC_F10); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_F10)); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_F10)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_F10)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F10); break;
    }
    dance_state[DANCE_F10].step = 0;
}
void on_dance_f11(qk_tap_dance_state_t *state, void *user_data);
void dance_f11_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_f11_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_f11(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F11);
        tap_code16(KC_F11);
        tap_code16(KC_F11);
    }
    if(state->count > 3) {
        tap_code16(KC_F11);
    }
}

void dance_f11_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DANCE_F11].step = dance_step(state);
    switch (dance_state[DANCE_F11].step) {
        case SINGLE_TAP: register_code16(KC_F11); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_F11)); break;
        case DOUBLE_TAP: register_code16(LALT(KC_F11)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_F11)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F11); register_code16(KC_F11);
    }
}

void dance_f11_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[DANCE_F11].step) {
        case SINGLE_TAP: unregister_code16(KC_F11); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_F11)); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_F11)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_F11)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F11); break;
    }
    dance_state[DANCE_F11].step = 0;
}
void on_dance_f12(qk_tap_dance_state_t *state, void *user_data);
void dance_f12_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_f12_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_f12(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F12);
        tap_code16(KC_F12);
        tap_code16(KC_F12);
    }
    if(state->count > 3) {
        tap_code16(KC_F12);
    }
}

void dance_f12_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[DANCE_F12].step = dance_step(state);
    switch (dance_state[DANCE_F12].step) {
        case SINGLE_TAP: register_code16(KC_F12); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_F12)); break;
        case DOUBLE_TAP: register_code16(LALT(KC_F12)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_F12)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F12); register_code16(KC_F12);
    }
}

void dance_f12_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[DANCE_F12].step) {
        case SINGLE_TAP: unregister_code16(KC_F12); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_F12)); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_F12)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_F12)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F12); break;
    }
    dance_state[DANCE_F12].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
        [DANCE_XCV] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_xcv, dance_xcv_finished, dance_xcv_reset),
        [DANCE_NUMROW_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_numrow1, dance_numrow1_finished, dance_numrow1_reset),
        [DANCE_NUMROW_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_numrow2, dance_numrow2_finished, dance_numrow2_reset),
        [DANCE_NUMROW_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_numrow3, dance_numrow3_finished, dance_numrow3_reset),
        [DANCE_NUMROW_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_numrow4, dance_numrow4_finished, dance_numrow4_reset),
        [DANCE_NUMROW_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_numrow5, dance_numrow5_finished, dance_numrow5_reset),
        [DANCE_NUMROW_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_numrow6, dance_numrow6_finished, dance_numrow6_reset),
        [DANCE_NUMROW_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_numrow7, dance_numrow7_finished, dance_numrow7_reset),
        [DANCE_NUMROW_8] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_numrow8, dance_numrow8_finished, dance_numrow8_reset),
        [DANCE_NUMROW_9] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_numrow9, dance_numrow9_finished, dance_numrow9_reset),
        [DANCE_NUMROW_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_numrow0, dance_numrow0_finished, dance_numrow0_reset),
        [DANCE_F01] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_f01, dance_f01_finished, dance_f01_reset),
        [DANCE_F02] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_f02, dance_f02_finished, dance_f02_reset),
        [DANCE_F03] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_f03, dance_f03_finished, dance_f03_reset),
        [DANCE_F04] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_f04, dance_f04_finished, dance_f04_reset),
        [DANCE_F05] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_f05, dance_f05_finished, dance_f05_reset),
        [DANCE_F06] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_f06, dance_f06_finished, dance_f06_reset),
        [DANCE_F07] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_f07, dance_f07_finished, dance_f07_reset),
        [DANCE_F08] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_f08, dance_f08_finished, dance_f08_reset),
        [DANCE_F09] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_f09, dance_f09_finished, dance_f09_reset),
        [DANCE_F10] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_f10, dance_f10_finished, dance_f10_reset),
        [DANCE_F11] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_f11, dance_f11_finished, dance_f11_reset),
        [DANCE_F12] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_f12, dance_f12_finished, dance_f12_reset),
};
