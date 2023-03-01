#include "./test_main.h"

START_TEST(s21_add_1) {}
END_TEST

START_TEST(s21_add_2) {}
END_TEST

Suite *suite_s21_add(void) {
  Suite *s24;
  TCase *tc24;
  s24 = suite_create("s21_add");
  tc24 = tcase_create("case_s21_add");
  tcase_add_test(tc24, s21_add_1);
  tcase_add_test(tc24, s21_add_1);
  suite_add_tcase(s24, tc24);
  return s24;
}
