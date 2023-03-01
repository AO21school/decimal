#include "../s21_decimal.h"

int s21_get_a_bit(int a, int i) {
  int c = (a & (1 << i));
  if (c) c /= c;
  return c;
}
