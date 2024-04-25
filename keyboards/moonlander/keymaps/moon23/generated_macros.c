
void clear_all_the_mods(void) {
  del_oneshot_mods(MOD_MASK_SHIFT);
  unregister_mods(MOD_MASK_SHIFT);
  del_oneshot_mods(MOD_MASK_CTRL);
  unregister_mods(MOD_MASK_CTRL);
  del_oneshot_mods(MOD_MASK_ALT);
  unregister_mods(MOD_MASK_ALT);
  del_oneshot_mods(MOD_MASK_GUI);
  unregister_mods(MOD_MASK_GUI);
}


bool process_macro(uint16_t keycode, keyrecord_t *record) {
  const uint8_t mods = get_mods();
  const uint8_t oneshot_mods = get_oneshot_mods();
  switch (keycode) {

    case LEFT_LEFT:
      if (record->event.pressed) {
        clear_all_the_mods();
        if (0) {
        } else if (((mods | oneshot_mods) & MOD_MASK_SHIFT)) {
          SEND_STRING(SS_DOWN(X_RCTL) SS_DOWN(X_RSFT) SS_TAP(X_LEFT) SS_UP(X_RSFT) SS_UP(X_RCTL));

        } else if (1) {
          SEND_STRING(SS_DOWN(X_RCTL) SS_TAP(X_LEFT) SS_UP(X_RCTL));

        }
        register_mods(mods);
      }
      return false;

    case MEGA_COPY:
      if (record->event.pressed) {
        clear_all_the_mods();
        if (0) {
        } else if (((mods | oneshot_mods) & MOD_MASK_SHIFT) && ((mods | oneshot_mods) & MOD_MASK_CTRL)) {
          SEND_STRING(SS_TAP(X_F2)  SS_DELAY(200) SS_LCTL("a")  SS_DELAY(200) SS_LCTL("c")  SS_DELAY(200) SS_TAP(X_ESC));

        } else if (((mods | oneshot_mods) & MOD_MASK_CTRL)) {
          SEND_STRING(SS_TAP(X_F2)  SS_DELAY(200) SS_LCTL("c")  SS_DELAY(200) SS_TAP(X_ESC));

        } else if (1) {
          SEND_STRING(SS_LCTL("c"));

        }
        register_mods(mods);
      }
      return false;

    case MEGA_PASTE:
      if (record->event.pressed) {
        clear_all_the_mods();
        if (0) {
        } else if (((mods | oneshot_mods) & MOD_MASK_SHIFT) && ((mods | oneshot_mods) & MOD_MASK_CTRL)) {
          SEND_STRING(SS_TAP(X_F2) SS_DELAY(200) SS_LCTL("a")  SS_DELAY(200) SS_LCTL("v")  SS_DELAY(200) SS_TAP(X_ENTER));

        } else if (((mods | oneshot_mods) & MOD_MASK_CTRL)) {
          SEND_STRING(SS_TAP(X_F2) SS_DELAY(200) SS_LCTL("v")  SS_DELAY(200)  SS_TAP(X_ENTER));

        } else if (1) {
          SEND_STRING(SS_LCTL("v"));

        }
        register_mods(mods);
      }
      return false;

    case QUESTION_BANG:
      if (record->event.pressed) {
        clear_all_the_mods();
        if (0) {
        } else if (((mods | oneshot_mods) & MOD_MASK_SHIFT)) {
          SEND_STRING("!");

        } else if (1) {
          SEND_STRING("?");

        }
        register_mods(mods);
      }
      return false;

    case RIGHT_RIGHT:
      if (record->event.pressed) {
        clear_all_the_mods();
        if (0) {
        } else if (((mods | oneshot_mods) & MOD_MASK_SHIFT)) {
          SEND_STRING(SS_DOWN(X_RCTL) SS_DOWN(X_RSFT) SS_TAP(X_RIGHT) SS_UP(X_RSFT) SS_UP(X_RCTL));

        } else if (1) {
          SEND_STRING(SS_DOWN(X_RCTL) SS_TAP(X_RIGHT) SS_UP(X_RCTL));

        }
        register_mods(mods);
      }
      return false;

    default:
        return true; // Process all other keycodes normally
    }
}