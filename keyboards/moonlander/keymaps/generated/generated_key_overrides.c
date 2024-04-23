const key_override_t override_0 = ko_make_basic(0x0 | MOD_MASK_SHIFT, KC_BACKSPACE, KC_DELETE);
const key_override_t override_1 = ko_make_basic(0x0 | MOD_MASK_SHIFT, KC_COMMA, KC_SEMICOLON);
const key_override_t override_2 = ko_make_basic(0x0 | MOD_MASK_SHIFT, KC_DOT, KC_COLON);
const key_override_t **key_overrides = (const key_override_t *[]){
  &override_0,
  &override_1,
  &override_2,
  NULL // Null terminated array
};
