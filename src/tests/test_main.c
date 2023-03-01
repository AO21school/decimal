#include "test_main.h"

int main(void) {
  Suite *test_suites[] = {
      suite_s21_add(),
      /*      suite_s21_sub(),
            suite_s21_mul(),
            suite_s21_div(),
            suite_s21_mod(),
            suite_s21_from_int_to_decimal(),
            suite_s21_from_float_to_decimal(),
            suite_s21_from_decimal_to_int(),
            suite_s21_from_decimal_to_float(),
            suite_s21_floor(),
            suite_s21_round(),
            suite_s21_truncate(),
            suite_s21_negate()*/
  };

  SRunner *suite_runner = srunner_create(test_suites[0]);
  srunner_set_fork_status(suite_runner, CK_NOFORK);

  for (int i = 1; i < ARRAY_SIZE(test_suites); i++) {
    srunner_add_suite(suite_runner, test_suites[i]);
  }
  srunner_run_all(suite_runner, CK_NORMAL);
  int failed_count = srunner_ntests_failed(suite_runner);
  srunner_free(suite_runner);

  if (failed_count != 0) {
    // Сигнализируем о том, что тестирование прошло неудачно.
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}
