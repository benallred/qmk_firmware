#include QMK_KEYBOARD_H


enum layers {
  LAYER_BASE,
  LAYER_NO_DUAL_FUNCTION,
  LAYER_QWERTY,
  LAYER_PARENS,
  LAYER_NUMBERS_SYMBOLS,
  LAYER_HEX_NUMPAD,
  LAYER_GIT,
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
  ST_MACRO_6,
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
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
  DANCE_9,
  DANCE_10,
  DANCE_11,
  DANCE_12,
  DANCE_13,
  DANCE_14,
  DANCE_15,
  DANCE_16,
  DANCE_17,
  DANCE_18,
  DANCE_19,
  DANCE_20,
  DANCE_21,
  DANCE_22,
  DANCE_23,
};

#define EISU LALT(KC_GRV)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [LAYER_BASE] = LAYOUT( // Base
    KC_ESCAPE          , TD(DANCE_0) , TD(DANCE_1)   , TD(DANCE_2) , TD(DANCE_3) , TD(DANCE_4), TG(11)             ,                    TT(2)               , TD(DANCE_6)    , TD(DANCE_7)   , TD(DANCE_8) , TD(DANCE_9)   , TD(DANCE_10)    , KC_ENTER      ,
    KC_TRANSPARENT     , C_S_T(KC_Q) , KC_W          , LT(3, KC_F) , KC_P        , KC_B       , TG(1)              ,                    TG(4)               , KC_J           , KC_L          , LT(3, KC_U) , KC_Y          , C_S_T(KC_SCOLON), KC_BSLASH     ,
    TD(DANCE_5)        , LGUI_T(KC_A), LALT_T(KC_R)  , LCTL_T(KC_S), LSFT_T(KC_T), KC_G       , LCTL(LGUI(KC_LEFT)),                    LCTL(LGUI(KC_RIGHT)), KC_M           , RSFT_T(KC_N)  , RCTL_T(KC_E), RALT_T(KC_I)  , RGUI_T(KC_O)    , KC_QUOTE      ,
    LSFT_T(KC_CAPSLOCK), KC_Z        , KC_X          , KC_C        , KC_D        , KC_V       , KC_SPACE           ,                    TG(9)               , KC_K           , KC_H          , KC_COMMA    , KC_DOT        , KC_SLASH        , KC_GRAVE      ,
    LCTL(KC_S)         , LCTL(KC_A)  , KC_UNDO       , MO(8)       , KC_ENTER    , MO(4)      , KC_TAB             ,                    TD(DANCE_11)        , LT(7, KC_SPACE), KC_BSPACE     , MO(8)       , MO(10)        , TT(7)           , KC_TRANSPARENT
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
  [LAYER_GIT] = LAYOUT( // Git
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_6    , KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
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
    KC_TRANSPARENT       , KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_UP)   , KC_TRANSPARENT  , LGUI(KC_PGUP)  , LCTL(KC_MINUS),                    KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_12)  , TD(DANCE_13)  , TD(DANCE_14)  , TD(DANCE_15)  , KC_TRANSPARENT,
    KC_TRANSPARENT       , KC_TRANSPARENT, LGUI(KC_LEFT) , LGUI(KC_DOWN) , LGUI(KC_RIGHT)  , LGUI(KC_PGDOWN), LCTL(KC_KP_0) ,                    KC_TRANSPARENT, LALT(KC_SPACE), TD(DANCE_16)  , TD(DANCE_17)  , TD(DANCE_18)  , TD(DANCE_19)  , KC_TRANSPARENT,
    KC_TRANSPARENT       , KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(LALT(KC_D)), KC_TRANSPARENT , KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_20)  , TD(DANCE_21)  , TD(DANCE_22)  , TD(DANCE_23)  , KC_TRANSPARENT,
    LCTL(LSFT(KC_ESCAPE)), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT  , KC_TRANSPARENT , KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [LAYER_GAMING] = LAYOUT( // Gaming
    KC_ESCAPE, KC_1 , KC_2 , KC_3 , KC_4   , KC_5    , KC_6     ,                    KC_F1         , KC_F2   , KC_F3    , KC_NO   , KC_NO , KC_NO     , KC_ENTER  ,
    KC_TAB   , KC_Q , KC_W , KC_E , KC_R   , KC_T    , KC_NO    ,                    KC_NO         , KC_Y    , KC_U     , KC_I    , KC_O  , KC_P      , KC_BSLASH ,
    KC_NO    , KC_A , KC_S , KC_D , KC_F   , KC_G    , KC_NO    ,                    KC_NO         , KC_H    , KC_J     , KC_K    , KC_L  , KC_SCOLON , KC_QUOTE  ,
    KC_LSHIFT, KC_Z , KC_X , KC_C , KC_V   , KC_B    , KC_GRAVE ,                    KC_TRANSPARENT, KC_N    , KC_M     , KC_COMMA, KC_DOT, KC_SLASH  , ST_MACRO_7,
    KC_LCTRL , KC_NO, KC_NO, KC_NO, KC_LALT, KC_SPACE, KC_LSHIFT,                    KC_DELETE     , KC_SPACE, KC_BSPACE, KC_NO   , MO(10), ST_MACRO_8, ST_MACRO_9
  ),
  [LAYER_MEDIA] = LAYOUT( // Media
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT     , KC_TRANSPARENT     , KC_TRANSPARENT     , KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_MS_ACCEL2  , KC_MS_BTN2    , KC_MS_UP      , KC_MS_BTN1    , KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT     , KC_AUDIO_VOL_UP    , KC_TRANSPARENT     , KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_MS_ACCEL1  , KC_MS_LEFT    , KC_MS_DOWN    , KC_MS_RIGHT   , KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_MS_ACCEL0  , KC_TRANSPARENT, KC_MS_BTN3    , KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_AUDIO_MUTE , KC_TRANSPARENT     , KC_AUDIO_VOL_DOWN  , KC_TRANSPARENT     , KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT     , KC_TRANSPARENT     , KC_TRANSPARENT     , KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [LAYER_KEYBOARD] = LAYOUT( // Keyboard
    KC_TRANSPARENT, RESET         , KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
//   [LAYER_KEYBOARD] = LAYOUT( // Keyboard
//     AU_ON          , AU_OFF        , KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RESET         ,                    KC_TRANSPARENT    , KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, HSV_0_255_255  , HSV_86_255_255, HSV_172_255_255,
//     MU_ON          , MU_OFF        , MU_MOD        , KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT    , KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, HSV_129_255_192, HSV_32_255_255, HSV_235_255_224,
//     KC_TRANSPARENT , KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                    KC_TRANSPARENT    , KC_ASON       , KC_ASUP       , KC_TRANSPARENT, KC_TRANSPARENT , KC_TRANSPARENT, MOON_LED_LEVEL ,
//     DYN_MACRO_PLAY2, DYN_REC_STOP  , DYN_REC_START2, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RGB_MOD       ,                    RGB_TOG           , KC_ASOFF      , KC_ASDN       , KC_TRANSPARENT, KC_TRANSPARENT , RGB_HUI       , RGB_SAI        ,
//     DYN_MACRO_PLAY1, DYN_REC_STOP  , DYN_REC_START1, WEBUSB_PAIR   , RGB_SPI       , RGB_SPD       , RGB_SLD       ,                    TOGGLE_LAYER_COLOR, RGB_VAD       , RGB_VAI       , KC_ASRP       , KC_TRANSPARENT , RGB_HUD       , RGB_SAD
//   ),

//   /* Qwerty
//    * ,----------------------------------------------------------------------------------------------------------------------.
//    * | ESC  |   1  |   2  |   3  |   4  |   5  |   [  |                    |   ]  |   6  |   7  |   8  |   9  |   0  |Pscree|
//    * |------+------+------+------+------+------+------+--------------------+------+------+------+------+------+------+------|
//    * |  `   |   Q  |   W  |   E  |   R  |   T  |   -  |                    |   =  |   Y  |   U  |   I  |   O  |   P  |  \   |
//    * |------+------+------+------+------+------+------+--------------------+------+------+------+------+------+------+------|
//    * | Tab  |   A  |   S  |   D  |   F  |   G  |  Del |                    | Bksp |   H  |   J  |   K  |   L  |   ;  |  "   |
//    * |------+------+------+------+------+------+---------------------------+------+------+------+------+------+------+------|
//    * | Shift|   Z  |   X  |   C  |   V  |   B  | Space|                    | Enter|   N  |   M  |   ,  |   .  |   /  | Shift|
//    * |-------------+------+------+------+------+------+------+------+------+------+------+------+------+------+-------------|
//    * | Ctrl |  GUI |  ALt | EISU |||||||| Lower| Space|  Del |||||||| Bksp | Enter| Raise|||||||| Left | Down |  Up  | Right|
//    * ,----------------------------------------------------------------------------------------------------------------------.
//    */
//   [_QWERTY] = LAYOUT(
//     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_LBRC,                        KC_RBRC, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_PSCR,
//     KC_GRV,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_MINS,                        KC_EQL , KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
//     KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_DEL ,                        KC_BSPC, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
//     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_SPC ,                        KC_ENT , KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
//     KC_LCTL, KC_LGUI, KC_LALT, EISU,             LOWER,   KC_SPC ,KC_DEL,         KC_BSPC,KC_ENT , RAISE,            KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
//   ),

//   /* Lower
//    * ,----------------------------------------------------------------------------------------------------------------------.
//    * |  F11 |  F1  |  F2  |  F3  |  F4  |  F5  |   {  |                    |   }  |  F6  |  F7  |  F8  |  F9  |  F10 |  F12 |
//    * |------+------+------+------+------+------+------+--------------------+------+------+------+------+------+------+------|
//    * |  ~   |   !  |   @  |   #  |   $  |   %  |   _  |                    |   +  |   ^  |   &  |   *  |   (  |   )  |  |   |
//    * |------+------+------+------+------+------+------+--------------------+------+------+------+------+------+------+------|
//    * | Tab  |   1  |   2  |   3  |   4  |   5  |  Del |                    | Bksp |   H  |   J  |   K  |   L  |   :  |  "   |
//    * |------+------+------+------+------+------+---------------------------+------+------+------+------+------+------+------|
//    * | Shift|   6  |   7  |   8  |   9  |   0  | Space|                    | Enter|   N  |   M  |   <  |   >  |   ?  | Shift|
//    * |-------------+------+------+------+------+------+------+------+------+------+------+------+------+------+-------------|
//    * | Ctrl |  GUI |  ALt | EISU |||||||| Lower| Space|  Del |||||||| Bksp | Enter| Raise|||||||| Home |PageDn|PageUp|  End |
//    * ,----------------------------------------------------------------------------------------------------------------------.
//    */
//   [_LOWER] = LAYOUT(
//     KC_F11,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_LCBR,                        KC_RCBR, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F12,
//     KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_UNDS,                        KC_PLUS, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE,
//     KC_TAB,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_DEL ,                        KC_BSPC, KC_H,    KC_J,    KC_K,    KC_L,    KC_COLN, KC_DQT ,
//     KC_LSFT, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_SPC ,                        KC_ENT , KC_N,    KC_M,    KC_LT,   KC_GT,   KC_QUES, KC_RSFT,
//     KC_LCTL, KC_LGUI, KC_LALT, EISU,             LOWER,   KC_SPC ,KC_DEL,         KC_BSPC,KC_ENT , RAISE,            KC_HOME, KC_PGDN, KC_PGUP, KC_END
//   ),

//   /* Raise
//    * ,----------------------------------------------------------------------------------------------------------------------.
//    * |  F11 |  F1  |  F2  |  F3  |  F4  |  F5  |   {  |                    |   }  |  F6  |  F7  |  F8  |  F9  |  F10 |  F12 |
//    * |------+------+------+------+------+------+------+--------------------+------+------+------+------+------+------+------|
//    * |  ~   |   !  |   @  |   #  |   $  |   %  |   _  |                    |   +  |   ^  |   &  |   *  |   (  |   )  |  |   |
//    * |------+------+------+------+------+------+------+--------------------+------+------+------+------+------+------+------|
//    * | Tab  |   1  |   2  |   3  |   4  |   5  |  Del |                    | Bksp |   H  |   J  |   K  |   L  |   :  |  "   |
//    * |------+------+------+------+------+------+---------------------------+------+------+------+------+------+------+------|
//    * | Shift|   6  |   7  |   8  |   9  |   0  | Space|                    | Enter|   N  |   M  |   <  |   >  |   ?  | Shift|
//    * |-------------+------+------+------+------+------+------+------+------+------+------+------+------+------+-------------|
//    * | Ctrl |  GUI |  ALt | EISU |||||||| Lower| Space|  Del |||||||| Bksp | Enter| Raise|||||||| Home |PageDn|PageUp|  End |
//    * ,----------------------------------------------------------------------------------------------------------------------.
//    */
//   [_RAISE] = LAYOUT(
//     KC_F11,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_LCBR,                        KC_RCBR, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F12,
//     KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_UNDS,                        KC_PLUS, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE,
//     KC_TAB,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_DEL ,                        KC_BSPC, KC_H,    KC_J,    KC_K,    KC_L,    KC_COLN, KC_DQT ,
//     KC_LSFT, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_SPC ,                        KC_ENT , KC_N,    KC_M,    KC_LT,   KC_GT,   KC_QUES, KC_RSFT,
//     KC_LCTL, KC_LGUI, KC_LALT, EISU,             LOWER,   KC_SPC ,KC_DEL,         KC_BSPC,KC_ENT , RAISE,            KC_HOME, KC_PGDN, KC_PGUP, KC_END
//   ),

//   /* Adjust
//    * ,----------------------------------------------------------------------------------------------------------------------.
//    * |      |      |      |      |      |      |      |                    |      |      |      |      |      |      |      |
//    * |------+------+------+------+------+------+---------------------------+------+------+------+------+------+------+------|
//    * |      | Reset|RGB ON|  MODE|  HUE-|  HUE+|      |                    |      |  SAT-|  SAT+|  VAL-|  VAL+|      |      |
//    * |------+------+------+------+------+------+---------------------------+------+------+------+------+------+------+------|
//    * |      |      | BL ON|  BRTG|  INC|   DEC|      |                    |      |      |      |      |      |      |      |
//    * |------+------+------+------+------+------+---------------------------+------+------+------+------+------+------+------|
//    * |      |      |      |      |      |      |      |                    |      |      |      |      |      |      |      |
//    * |-------------+------+------+------+------+------+------+------+------+------+------+------+------+------+-------------|
//    * |      |      |      |      ||||||||      |      |      ||||||||      |      |      ||||||||      |      |      |      |
//    * ,----------------------------------------------------------------------------------------------------------------------.
//    */
//   [_ADJUST] = LAYOUT(
//     _______, _______, _______, _______, _______, _______,_______,                       _______, _______, _______, _______, _______, _______, _______,
//     _______, RESET  , RGB_TOG, RGB_MOD, RGB_HUD, RGB_HUI,_______,                       _______, RGB_SAD, RGB_SAI, RGB_VAD, RGB_VAI, _______, _______,
//     _______, _______, BL_TOGG, BL_BRTG, BL_INC , BL_DEC ,_______,                       _______, _______, _______, _______, _______, _______, _______,
//     _______, _______, _______, _______, _______, _______,_______,                       _______, _______, _______, _______, _______, _______, _______,
//     _______, _______, _______, _______,          _______,_______,_______,       _______,_______, _______,          _______, _______, _______, _______
//   )
};

#ifdef AUDIO_ENABLE
float tone_qwerty[][2]     = SONG(QWERTY_SOUND);
#endif

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
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
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_G) SS_DELAY(100) SS_TAP(X_I) SS_DELAY(100) SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_SPACE) SS_DELAY(100) SS_TAP(X_S)  SS_DELAY(100) SS_TAP(X_ENTER));

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
  }
  return true;
//   switch (keycode) {
//     case QWERTY:
//       if (record->event.pressed) {
//          print("mode just switched to qwerty and this is a huge string\n");
//         set_single_persistent_default_layer(_QWERTY);
//       }
//       return false;
//       break;
//     case LOWER:
//       if (record->event.pressed) {
//         layer_on(_LOWER);
//         update_tri_layer(_LOWER, _RAISE, _ADJUST);
//       } else {
//         layer_off(_LOWER);
//         update_tri_layer(_LOWER, _RAISE, _ADJUST);
//       }
//       return false;
//       break;
//     case RAISE:
//       if (record->event.pressed) {
//         layer_on(_RAISE);
//         update_tri_layer(_LOWER, _RAISE, _ADJUST);
//       } else {
//         layer_off(_RAISE);
//         update_tri_layer(_LOWER, _RAISE, _ADJUST);
//       }
//       return false;
//       break;
//     case ADJUST:
//       if (record->event.pressed) {
//         layer_on(_ADJUST);
//       } else {
//         layer_off(_ADJUST);
//       }
//       return false;
//       break;
//   }
//   return true;
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

static tap dance_state[24];

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


void on_dance_0(qk_tap_dance_state_t *state, void *user_data);
void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_0(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_1));
        tap_code16(LGUI(KC_1));
        tap_code16(LGUI(KC_1));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_1));
    }
}

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_1)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_1)); break;
        case DOUBLE_TAP: register_code16(LCTL(LGUI(LSFT(KC_1)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_1)); register_code16(LGUI(KC_1));
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_1)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_1)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LGUI(LSFT(KC_1)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_1)); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(qk_tap_dance_state_t *state, void *user_data);
void dance_1_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_1_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_1(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_2));
        tap_code16(LGUI(KC_2));
        tap_code16(LGUI(KC_2));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_2));
    }
}

void dance_1_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_2)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_2)); break;
        case DOUBLE_TAP: register_code16(LCTL(LGUI(LSFT(KC_2)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_2)); register_code16(LGUI(KC_2));
    }
}

void dance_1_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_2)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_2)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LGUI(LSFT(KC_2)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_2)); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(qk_tap_dance_state_t *state, void *user_data);
void dance_2_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_2_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_2(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_3));
        tap_code16(LGUI(KC_3));
        tap_code16(LGUI(KC_3));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_3));
    }
}

void dance_2_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_3)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_3)); break;
        case DOUBLE_TAP: register_code16(LCTL(LGUI(LSFT(KC_3)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_3)); register_code16(LGUI(KC_3));
    }
}

void dance_2_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_3)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_3)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LGUI(LSFT(KC_3)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_3)); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(qk_tap_dance_state_t *state, void *user_data);
void dance_3_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_3_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_3(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_4));
        tap_code16(LGUI(KC_4));
        tap_code16(LGUI(KC_4));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_4));
    }
}

void dance_3_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_4)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_4)); break;
        case DOUBLE_TAP: register_code16(LCTL(LGUI(LSFT(KC_4)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_4)); register_code16(LGUI(KC_4));
    }
}

void dance_3_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_4)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_4)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LGUI(LSFT(KC_4)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_4)); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(qk_tap_dance_state_t *state, void *user_data);
void dance_4_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_4_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_4(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_5));
        tap_code16(LGUI(KC_5));
        tap_code16(LGUI(KC_5));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_5));
    }
}

void dance_4_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_5)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_5)); break;
        case DOUBLE_TAP: register_code16(LCTL(LGUI(LSFT(KC_5)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_5)); register_code16(LGUI(KC_5));
    }
}

void dance_4_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_5)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_5)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LGUI(LSFT(KC_5)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_5)); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(qk_tap_dance_state_t *state, void *user_data);
void dance_5_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_5_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_5(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_V));
        tap_code16(LCTL(KC_V));
        tap_code16(LCTL(KC_V));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_V));
    }
}

void dance_5_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_V)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_C)); break;
        case DOUBLE_TAP: register_code16(LCTL(LSFT(KC_V))); break;
        case DOUBLE_HOLD: register_code16(LCTL(KC_X)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_V)); register_code16(LCTL(KC_V));
    }
}

void dance_5_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_V)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_C)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LSFT(KC_V))); break;
        case DOUBLE_HOLD: unregister_code16(LCTL(KC_X)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_V)); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(qk_tap_dance_state_t *state, void *user_data);
void dance_6_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_6_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_6(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_6));
        tap_code16(LGUI(KC_6));
        tap_code16(LGUI(KC_6));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_6));
    }
}

void dance_6_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_6)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_6)); break;
        case DOUBLE_TAP: register_code16(LCTL(LGUI(LSFT(KC_6)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_6)); register_code16(LGUI(KC_6));
    }
}

void dance_6_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_6)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_6)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LGUI(LSFT(KC_6)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_6)); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(qk_tap_dance_state_t *state, void *user_data);
void dance_7_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_7_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_7(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_7));
        tap_code16(LGUI(KC_7));
        tap_code16(LGUI(KC_7));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_7));
    }
}

void dance_7_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_7)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_7)); break;
        case DOUBLE_TAP: register_code16(LCTL(LGUI(LSFT(KC_7)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_7)); register_code16(LGUI(KC_7));
    }
}

void dance_7_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_7)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_7)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LGUI(LSFT(KC_7)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_7)); break;
    }
    dance_state[7].step = 0;
}
void on_dance_8(qk_tap_dance_state_t *state, void *user_data);
void dance_8_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_8_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_8(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_8));
        tap_code16(LGUI(KC_8));
        tap_code16(LGUI(KC_8));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_8));
    }
}

void dance_8_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_8)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_8)); break;
        case DOUBLE_TAP: register_code16(LCTL(LGUI(LSFT(KC_8)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_8)); register_code16(LGUI(KC_8));
    }
}

void dance_8_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_8)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_8)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LGUI(LSFT(KC_8)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_8)); break;
    }
    dance_state[8].step = 0;
}
void on_dance_9(qk_tap_dance_state_t *state, void *user_data);
void dance_9_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_9_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_9(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_9));
        tap_code16(LGUI(KC_9));
        tap_code16(LGUI(KC_9));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_9));
    }
}

void dance_9_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_9)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_9)); break;
        case DOUBLE_TAP: register_code16(LCTL(LGUI(LSFT(KC_9)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_9)); register_code16(LGUI(KC_9));
    }
}

void dance_9_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[9].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_9)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_9)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LGUI(LSFT(KC_9)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_9)); break;
    }
    dance_state[9].step = 0;
}
void on_dance_10(qk_tap_dance_state_t *state, void *user_data);
void dance_10_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_10_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_10(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LGUI(KC_0));
        tap_code16(LGUI(KC_0));
        tap_code16(LGUI(KC_0));
    }
    if(state->count > 3) {
        tap_code16(LGUI(KC_0));
    }
}

void dance_10_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[10].step = dance_step(state);
    switch (dance_state[10].step) {
        case SINGLE_TAP: register_code16(LGUI(KC_0)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_0)); break;
        case DOUBLE_TAP: register_code16(LCTL(LGUI(LSFT(KC_0)))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LGUI(KC_0)); register_code16(LGUI(KC_0));
    }
}

void dance_10_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[10].step) {
        case SINGLE_TAP: unregister_code16(LGUI(KC_0)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_0)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LGUI(LSFT(KC_0)))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LGUI(KC_0)); break;
    }
    dance_state[10].step = 0;
}
void on_dance_11(qk_tap_dance_state_t *state, void *user_data);
void dance_11_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_11_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_11(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DELETE);
        tap_code16(KC_DELETE);
        tap_code16(KC_DELETE);
    }
    if(state->count > 3) {
        tap_code16(KC_DELETE);
    }
}

void dance_11_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[11].step = dance_step(state);
    switch (dance_state[11].step) {
        case SINGLE_TAP: register_code16(KC_DELETE); break;
        case SINGLE_HOLD: register_code16(KC_LSHIFT); break;
        case DOUBLE_TAP: register_code16(KC_DELETE); register_code16(KC_DELETE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DELETE); register_code16(KC_DELETE);
    }
}

void dance_11_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[11].step) {
        case SINGLE_TAP: unregister_code16(KC_DELETE); break;
        case SINGLE_HOLD: unregister_code16(KC_LSHIFT); break;
        case DOUBLE_TAP: unregister_code16(KC_DELETE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DELETE); break;
    }
    dance_state[11].step = 0;
}
void on_dance_12(qk_tap_dance_state_t *state, void *user_data);
void dance_12_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_12_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_12(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F9);
        tap_code16(KC_F9);
        tap_code16(KC_F9);
    }
    if(state->count > 3) {
        tap_code16(KC_F9);
    }
}

void dance_12_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[12].step = dance_step(state);
    switch (dance_state[12].step) {
        case SINGLE_TAP: register_code16(KC_F9); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_F9)); break;
        case DOUBLE_TAP: register_code16(LALT(KC_F9)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_F9)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F9); register_code16(KC_F9);
    }
}

void dance_12_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[12].step) {
        case SINGLE_TAP: unregister_code16(KC_F9); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_F9)); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_F9)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_F9)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F9); break;
    }
    dance_state[12].step = 0;
}
void on_dance_13(qk_tap_dance_state_t *state, void *user_data);
void dance_13_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_13_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_13(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F10);
        tap_code16(KC_F10);
        tap_code16(KC_F10);
    }
    if(state->count > 3) {
        tap_code16(KC_F10);
    }
}

void dance_13_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[13].step = dance_step(state);
    switch (dance_state[13].step) {
        case SINGLE_TAP: register_code16(KC_F10); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_F10)); break;
        case DOUBLE_TAP: register_code16(LALT(KC_F10)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_F10)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F10); register_code16(KC_F10);
    }
}

void dance_13_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[13].step) {
        case SINGLE_TAP: unregister_code16(KC_F10); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_F10)); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_F10)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_F10)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F10); break;
    }
    dance_state[13].step = 0;
}
void on_dance_14(qk_tap_dance_state_t *state, void *user_data);
void dance_14_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_14_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_14(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F11);
        tap_code16(KC_F11);
        tap_code16(KC_F11);
    }
    if(state->count > 3) {
        tap_code16(KC_F11);
    }
}

void dance_14_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[14].step = dance_step(state);
    switch (dance_state[14].step) {
        case SINGLE_TAP: register_code16(KC_F11); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_F11)); break;
        case DOUBLE_TAP: register_code16(LALT(KC_F11)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_F11)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F11); register_code16(KC_F11);
    }
}

void dance_14_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[14].step) {
        case SINGLE_TAP: unregister_code16(KC_F11); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_F11)); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_F11)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_F11)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F11); break;
    }
    dance_state[14].step = 0;
}
void on_dance_15(qk_tap_dance_state_t *state, void *user_data);
void dance_15_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_15_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_15(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F12);
        tap_code16(KC_F12);
        tap_code16(KC_F12);
    }
    if(state->count > 3) {
        tap_code16(KC_F12);
    }
}

void dance_15_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[15].step = dance_step(state);
    switch (dance_state[15].step) {
        case SINGLE_TAP: register_code16(KC_F12); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_F12)); break;
        case DOUBLE_TAP: register_code16(LALT(KC_F12)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_F12)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F12); register_code16(KC_F12);
    }
}

void dance_15_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[15].step) {
        case SINGLE_TAP: unregister_code16(KC_F12); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_F12)); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_F12)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_F12)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F12); break;
    }
    dance_state[15].step = 0;
}
void on_dance_16(qk_tap_dance_state_t *state, void *user_data);
void dance_16_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_16_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_16(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F5);
        tap_code16(KC_F5);
        tap_code16(KC_F5);
    }
    if(state->count > 3) {
        tap_code16(KC_F5);
    }
}

void dance_16_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[16].step = dance_step(state);
    switch (dance_state[16].step) {
        case SINGLE_TAP: register_code16(KC_F5); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_F5)); break;
        case DOUBLE_TAP: register_code16(LALT(KC_F5)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_F5)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F5); register_code16(KC_F5);
    }
}

void dance_16_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[16].step) {
        case SINGLE_TAP: unregister_code16(KC_F5); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_F5)); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_F5)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_F5)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F5); break;
    }
    dance_state[16].step = 0;
}
void on_dance_17(qk_tap_dance_state_t *state, void *user_data);
void dance_17_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_17_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_17(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F6);
        tap_code16(KC_F6);
        tap_code16(KC_F6);
    }
    if(state->count > 3) {
        tap_code16(KC_F6);
    }
}

void dance_17_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[17].step = dance_step(state);
    switch (dance_state[17].step) {
        case SINGLE_TAP: register_code16(KC_F6); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_F6)); break;
        case DOUBLE_TAP: register_code16(LALT(KC_F6)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_F6)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F6); register_code16(KC_F6);
    }
}

void dance_17_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[17].step) {
        case SINGLE_TAP: unregister_code16(KC_F6); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_F6)); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_F6)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_F6)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F6); break;
    }
    dance_state[17].step = 0;
}
void on_dance_18(qk_tap_dance_state_t *state, void *user_data);
void dance_18_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_18_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_18(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F7);
        tap_code16(KC_F7);
        tap_code16(KC_F7);
    }
    if(state->count > 3) {
        tap_code16(KC_F7);
    }
}

void dance_18_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[18].step = dance_step(state);
    switch (dance_state[18].step) {
        case SINGLE_TAP: register_code16(KC_F7); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_F7)); break;
        case DOUBLE_TAP: register_code16(LALT(KC_F7)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_F7)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F7); register_code16(KC_F7);
    }
}

void dance_18_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[18].step) {
        case SINGLE_TAP: unregister_code16(KC_F7); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_F7)); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_F7)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_F7)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F7); break;
    }
    dance_state[18].step = 0;
}
void on_dance_19(qk_tap_dance_state_t *state, void *user_data);
void dance_19_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_19_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_19(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F8);
        tap_code16(KC_F8);
        tap_code16(KC_F8);
    }
    if(state->count > 3) {
        tap_code16(KC_F8);
    }
}

void dance_19_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[19].step = dance_step(state);
    switch (dance_state[19].step) {
        case SINGLE_TAP: register_code16(KC_F8); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_F8)); break;
        case DOUBLE_TAP: register_code16(LALT(KC_F8)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_F8)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F8); register_code16(KC_F8);
    }
}

void dance_19_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[19].step) {
        case SINGLE_TAP: unregister_code16(KC_F8); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_F8)); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_F8)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_F8)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F8); break;
    }
    dance_state[19].step = 0;
}
void on_dance_20(qk_tap_dance_state_t *state, void *user_data);
void dance_20_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_20_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_20(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F1);
        tap_code16(KC_F1);
        tap_code16(KC_F1);
    }
    if(state->count > 3) {
        tap_code16(KC_F1);
    }
}

void dance_20_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[20].step = dance_step(state);
    switch (dance_state[20].step) {
        case SINGLE_TAP: register_code16(KC_F1); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_F1)); break;
        case DOUBLE_TAP: register_code16(LALT(KC_F1)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_F1)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F1); register_code16(KC_F1);
    }
}

void dance_20_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[20].step) {
        case SINGLE_TAP: unregister_code16(KC_F1); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_F1)); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_F1)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_F1)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F1); break;
    }
    dance_state[20].step = 0;
}
void on_dance_21(qk_tap_dance_state_t *state, void *user_data);
void dance_21_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_21_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_21(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F2);
        tap_code16(KC_F2);
        tap_code16(KC_F2);
    }
    if(state->count > 3) {
        tap_code16(KC_F2);
    }
}

void dance_21_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[21].step = dance_step(state);
    switch (dance_state[21].step) {
        case SINGLE_TAP: register_code16(KC_F2); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_F2)); break;
        case DOUBLE_TAP: register_code16(LALT(KC_F2)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_F2)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F2); register_code16(KC_F2);
    }
}

void dance_21_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[21].step) {
        case SINGLE_TAP: unregister_code16(KC_F2); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_F2)); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_F2)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_F2)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F2); break;
    }
    dance_state[21].step = 0;
}
void on_dance_22(qk_tap_dance_state_t *state, void *user_data);
void dance_22_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_22_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_22(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F3);
        tap_code16(KC_F3);
        tap_code16(KC_F3);
    }
    if(state->count > 3) {
        tap_code16(KC_F3);
    }
}

void dance_22_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[22].step = dance_step(state);
    switch (dance_state[22].step) {
        case SINGLE_TAP: register_code16(KC_F3); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_F3)); break;
        case DOUBLE_TAP: register_code16(LALT(KC_F3)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_F3)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F3); register_code16(KC_F3);
    }
}

void dance_22_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[22].step) {
        case SINGLE_TAP: unregister_code16(KC_F3); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_F3)); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_F3)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_F3)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F3); break;
    }
    dance_state[22].step = 0;
}
void on_dance_23(qk_tap_dance_state_t *state, void *user_data);
void dance_23_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_23_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_23(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F4);
        tap_code16(KC_F4);
        tap_code16(KC_F4);
    }
    if(state->count > 3) {
        tap_code16(KC_F4);
    }
}

void dance_23_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[23].step = dance_step(state);
    switch (dance_state[23].step) {
        case SINGLE_TAP: register_code16(KC_F4); break;
        case DOUBLE_TAP: register_code16(KC_F4); register_code16(KC_F4); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_F4)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F4); register_code16(KC_F4);
    }
}

void dance_23_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[23].step) {
        case SINGLE_TAP: unregister_code16(KC_F4); break;
        case DOUBLE_TAP: unregister_code16(KC_F4); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_F4)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F4); break;
    }
    dance_state[23].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_8, dance_8_finished, dance_8_reset),
        [DANCE_9] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_9, dance_9_finished, dance_9_reset),
        [DANCE_10] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_10, dance_10_finished, dance_10_reset),
        [DANCE_11] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_11, dance_11_finished, dance_11_reset),
        [DANCE_12] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_12, dance_12_finished, dance_12_reset),
        [DANCE_13] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_13, dance_13_finished, dance_13_reset),
        [DANCE_14] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_14, dance_14_finished, dance_14_reset),
        [DANCE_15] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_15, dance_15_finished, dance_15_reset),
        [DANCE_16] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_16, dance_16_finished, dance_16_reset),
        [DANCE_17] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_17, dance_17_finished, dance_17_reset),
        [DANCE_18] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_18, dance_18_finished, dance_18_reset),
        [DANCE_19] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_19, dance_19_finished, dance_19_reset),
        [DANCE_20] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_20, dance_20_finished, dance_20_reset),
        [DANCE_21] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_21, dance_21_finished, dance_21_reset),
        [DANCE_22] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_22, dance_22_finished, dance_22_reset),
        [DANCE_23] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_23, dance_23_finished, dance_23_reset),
};
