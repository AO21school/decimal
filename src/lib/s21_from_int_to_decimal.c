#include "../s21_decimal.h"

int s21_from_int_to_decimal(int src, s21_decimal *dst) {
  s21_decimal_init_zero(dst);
  if (src < 0) dst->bite[3] = (1 << 31);
  dst->bite[0] = abs(src);
  return 0;
}
