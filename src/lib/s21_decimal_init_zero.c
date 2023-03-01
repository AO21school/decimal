#include "../s21_decimal.h"

void s21_decimal_init_zero(s21_decimal *dst) {
  for (int i = 0; i < 4; i++) dst->bite[i] = 0;
}
