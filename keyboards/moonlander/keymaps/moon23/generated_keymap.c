enum layers{
  LAYER_BASE,
  LAYER_SYM,
  LAYER_NUM,
  LAYER_FN,
  LAYER_NAV,
  LAYER_MNAV,
  LAYER_GUI,
  LAYER_BEN_SYM,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[LAYER_BASE] = LAYOUT_moonlander(
KC_ESCAPE,              KC_F8,                  KC_F6,                  KC_F4,                  KC_F2,                  KC_F10,                 KC_F12,                 KC_F11,                 KC_F1,                  KC_F3,                  KC_F5,                  KC_F7,                  KC_F9,                  KC_BACKSPACE,           
C(KC_Z),                KC_Q,                   KC_W,                   KC_F,                   KC_P,                   KC_B,                   KC_AUDIO_VOL_UP,        KC_PRINT_SCREEN,        KC_J,                   KC_L,                   KC_U,                   KC_Y,                   KC_QUOTE,               TO(LAYER_BASE),         
C(KC_X),                KC_A,                   MT(MOD_LALT, KC_R),     MT(MOD_LCTL, KC_S),     MT(MOD_LSFT, KC_T),     KC_G,                   KC_AUDIO_VOL_DOWN,      KC_AUDIO_MUTE,          KC_M,                   MT(MOD_RSFT, KC_N),     MT(MOD_RCTL, KC_E),     MT(MOD_RALT, KC_I),     KC_O,                   TO(LAYER_NUM),          
MEGA_COPY,              KC_Z,                   KC_X,                   KC_C,                   KC_D,                   KC_V,                                                                   KC_K,                   KC_H,                   KC_COMMA,               KC_DOT,                 QUESTION_BANG,          TO(LAYER_NAV),          
MEGA_PASTE,             KC_LEFT_GUI,            OSM(MOD_LALT),          OSM(MOD_LCTL),          OSM(MOD_LSFT),          LT(6, KC_SPACE),                                                        QK_CAPS_WORD_TOGGLE,    OSM(MOD_RSFT),          OSM(MOD_RCTL),          OSM(MOD_RALT),          KC_RIGHT_GUI,           TO(LAYER_MNAV),         
                                                                                                LT(1, KC_ENTER),        LT(2, KC_TAB),          TO(LAYER_BEN_SYM),      KC_DELETE,              LT(4, KC_BACKSPACE),    LT(1, KC_SPACE)

),
[LAYER_SYM] = LAYOUT_moonlander(
KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_TRANSPARENT,         
KC_TRANSPARENT,         KC_GRAVE,               KC_CIRCUMFLEX,          KC_DOLLAR,              KC_HASH,                KC_EXCLAIM,             KC_NO,                  KC_NO,                  KC_NO,                  KC_BACKSLASH,           KC_SLASH,               KC_PIPE,                KC_NO,                  TO(LAYER_BASE),         
KC_TRANSPARENT,         KC_QUOTE,               KC_LEFT_ANGLE_BRACKET,  KC_LEFT_PAREN,          KC_LEFT_CURLY_BRACE,    KC_LEFT_BRACKET,        KC_NO,                  KC_NO,                  KC_COLON,               KC_PLUS,                KC_EQUAL,               KC_ASTERISK,            KC_AMPERSAND,           TO(LAYER_NUM),          
KC_TRANSPARENT,         KC_DOUBLE_QUOTE,        KC_RIGHT_ANGLE_BRACKET, KC_RIGHT_PAREN,         KC_RIGHT_CURLY_BRACE,   KC_RIGHT_BRACKET,                                                       KC_AT,                  KC_UNDERSCORE,          KC_MINUS,               KC_TILDE,               KC_PERCENT,             TO(LAYER_NAV),          
KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_NO,                                                                  KC_NO,                  KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         TO(LAYER_MNAV),         
                                                                                                KC_TRANSPARENT,         KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_TRANSPARENT

),
[LAYER_NUM] = LAYOUT_moonlander(
KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_TRANSPARENT,         
KC_TRANSPARENT,         KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_MINUS,               KC_7,                   KC_8,                   KC_9,                   KC_NO,                  TO(LAYER_BASE),         
KC_TRANSPARENT,         KC_NO,                  KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_NO,                  KC_NO,                  KC_NO,                  KC_DOT,                 KC_4,                   KC_5,                   KC_6,                   KC_NO,                  TO(LAYER_NUM),          
KC_TRANSPARENT,         KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                                                                  KC_0,                   KC_1,                   KC_2,                   KC_3,                   KC_NO,                  TO(LAYER_NAV),          
KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_NO,                                                                  KC_NO,                  KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         TO(LAYER_MNAV),         
                                                                                                KC_0,                   KC_TRANSPARENT,         KC_1,                   KC_1,                   KC_NO,                  KC_0

),
[LAYER_FN] = LAYOUT_moonlander(
QK_BOOTLOADER,          KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_TRANSPARENT,         
KC_TRANSPARENT,         KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_F12,                 KC_F7,                  KC_F8,                  KC_F9,                  KC_NO,                  TO(LAYER_BASE),         
KC_TRANSPARENT,         KC_NO,                  KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_NO,                  KC_NO,                  KC_NO,                  KC_F11,                 KC_F4,                  KC_F5,                  KC_F6,                  KC_NO,                  TO(LAYER_NUM),          
KC_TRANSPARENT,         KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                                                                  KC_F10,                 KC_F1,                  KC_F2,                  KC_F3,                  KC_NO,                  TO(LAYER_NAV),          
KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_NO,                                                                  KC_NO,                  KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         TO(LAYER_MNAV),         
                                                                                                KC_NO,                  KC_NO,                  KC_TRANSPARENT,         KC_NO,                  KC_NO,                  KC_NO

),
[LAYER_NAV] = LAYOUT_moonlander(
KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_TRANSPARENT,         
KC_TRANSPARENT,         KC_NO,                  KC_HOME,                KC_UP,                  KC_END,                 KC_PAGE_UP,             KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  TO(LAYER_BASE),         
KC_TRANSPARENT,         KC_NO,                  KC_LEFT,                KC_DOWN,                KC_RIGHT,               KC_PAGE_DOWN,           KC_NO,                  KC_NO,                  KC_NO,                  KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_NO,                  TO(LAYER_NUM),          
KC_TRANSPARENT,         KC_NO,                  LEFT_LEFT,              KC_NO,                  RIGHT_RIGHT,            KC_NO,                                                                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  TO(LAYER_NAV),          
KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,                                                         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         TO(LAYER_MNAV),         
                                                                                                KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT

),
[LAYER_MNAV] = LAYOUT_moonlander(
KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_TRANSPARENT,         
KC_TRANSPARENT,         KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  TO(LAYER_BASE),         
KC_TRANSPARENT,         KC_NO,                  KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_NO,                  TO(LAYER_NUM),          
KC_TRANSPARENT,         KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                                                                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  TO(LAYER_NAV),          
KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,                                                         KC_TRANSPARENT,         KC_PAGE_UP,             KC_UP,                  KC_DOWN,                KC_PAGE_DOWN,           TO(LAYER_MNAV),         
                                                                                                KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT

),
[LAYER_GUI] = LAYOUT_moonlander(
KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_TRANSPARENT,         
KC_TRANSPARENT,         KC_NO,                  S(G(KC_LEFT)),          G(KC_UP),               S(G(KC_RIGHT)),         KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  TO(LAYER_BASE),         
KC_TRANSPARENT,         KC_NO,                  G(KC_LEFT),             G(KC_DOWN),             G(KC_RIGHT),            KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_NO,                  TO(LAYER_NUM),          
KC_TRANSPARENT,         KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                                                                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  TO(LAYER_NAV),          
KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,                                                         KC_NO,                  KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         TO(LAYER_MNAV),         
                                                                                                KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO

),
[LAYER_BEN_SYM] = LAYOUT_moonlander(
KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_TRANSPARENT,         
KC_TRANSPARENT,         KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  TO(LAYER_BASE),         
KC_TRANSPARENT,         KC_NO,                  KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_NO,                  TO(LAYER_NUM),          
KC_TRANSPARENT,         KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                                                                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  TO(LAYER_NAV),          
KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_NO,                                                                  KC_NO,                  KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         KC_TRANSPARENT,         TO(LAYER_MNAV),         
                                                                                                KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,                  KC_NO

),

};
