#include "../s21_decimal.h"

void s21_dec_print(s21_decimal a) {
  if (a.bite[3] >> 31) printf("- ");
  for (int k = 2; k >= 0; k--) {
    for (int i = 31; i >= 0; i--) printf("%d", s21_get_a_bit(a.bite[k], i));
    printf(" ");
  }
  printf(" EXP ");
  for (int i = 30; i >= 0; i--) printf("%d", s21_get_a_bit(a.bite[3], i));
  printf("\n");
}
