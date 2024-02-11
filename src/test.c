
#include <check.h>
#include <math.h>

#include "s21_math.h"
/* Сравнивает два целых числа (eq - ==) */
START_TEST(s21_abs_test) {
  ck_assert_int_eq(s21_abs(1), abs(1));
  ck_assert_int_eq(s21_abs(20), abs(20));
  ck_assert_int_eq(s21_abs(-1), abs(-1));
  ck_assert_int_eq(s21_abs(-100), abs(-100));
  ck_assert_int_eq(s21_abs(100), abs(100));
  ck_assert_int_eq(s21_abs(0), abs(0));
}
END_TEST

/*
Сравнивает два значения с плавающей запятой двойной точности (long double).
Cоответствие должно быть меньше 1e-7.
tol нужен  из-за ошибок, связанных с представлением чисел с плавающей запятой,
ошибок округления, ошибок с плавающей запятой, зависящих от платформы.
*/
START_TEST(s21_atan_test) {
  // ck_assert_double_eq_tol(atan(500.000), s21_atan(500.000), 1e-7);
  // ck_assert_ldouble_eq_tol(atan(-1.0 / 0.0), s21_atan(-1.0 / 0.0), 1e-7);
  // ck_assert_ldouble_eq_tol(atan(0.0), s21_atan(0.0), 1e-7);
  // ck_assert_ldouble_eq_tol(atan(0.0), s21_atan(0.0), 1e-7);
  ck_assert_ldouble_eq_tol(atan(S21_INF), s21_atan(S21_INF), 1e-7);
  ck_assert_ldouble_eq_tol(atan(-2.78965), s21_atan(-2.78965), 1e-7);
  ck_assert_ldouble_eq_tol(atan(1), s21_atan(1), 1e-7);
  ck_assert_ldouble_eq_tol(atan(-1), s21_atan(-1), 1e-7);
}
END_TEST

/*
Сравнивает два значения с плавающей запятой двойной точности (double).
Cоответствие должно быть меньше 1e-6.
tol нужен  из-за ошибок, связанных с представлением чисел с плавающей
запятой, ошибок округления, ошибок с плавающей запятой, зависящих от
платформы.
*/
START_TEST(s21_acos_test) {
  ck_assert_ldouble_eq_tol(s21_acos(-1), acos(-1), 1e-7);
  ck_assert_ldouble_eq_tol(s21_acos(1), acos(1), 1e-7);
  ck_assert_ldouble_eq_tol(s21_acos(0.2), acos(0.2), 1e-7);
  ck_assert_ldouble_eq_tol(s21_acos(0), acos(0), 1e-7);
  ck_assert_ldouble_eq_tol(s21_acos(-0.5), acos(-0.5), 1e-7);
  ck_assert_ldouble_eq_tol(s21_acos(-0.5), acos(-0.5), 1e-7);
}
END_TEST

/*
Сравнивает два значения с плавающей запятой двойной точности (double).
Cоответствие должно быть меньше 1e-6.
tol нужен  из-за ошибок, связанных с представлением чисел с плавающей
запятой, ошибок округления, ошибок с плавающей запятой, зависящих от
платформы.
*/
START_TEST(s21_asin_test) {
  ck_assert_ldouble_eq_tol(s21_asin(-1), asin(-1), 1e-7);
  ck_assert_ldouble_eq_tol(s21_asin(1), asin(1), 1e-7);
  ck_assert_ldouble_eq_tol(s21_asin(0.2), asin(0.2), 1e-7);
  ck_assert_ldouble_eq_tol(s21_asin(0), asin(0), 1e-7);
  ck_assert_ldouble_eq_tol(s21_asin(-0.5), asin(-0.5), 1e-7);
  ck_assert_ldouble_eq_tol(s21_asin(-0.5), asin(-0.5), 1e-7);
}
END_TEST

/* Cравнивает два значения с плавающей запятой двойной точности (double). (eq
- ==) tol тут не нужен т.к. возрат будет целого числа
*/
START_TEST(s21_ceil_test) {
  ck_assert_ldouble_eq(ceil(-7.0), s21_ceil(-7.0));
  ck_assert_ldouble_eq(ceil(-98.1), s21_ceil(-98.1));
  ck_assert_ldouble_eq(ceil(123.02), s21_ceil(123.02));
  ck_assert_ldouble_eq(ceil(52.02), s21_ceil(52.02));
  ck_assert_ldouble_eq(ceil(1.05), s21_ceil(1.05));
  ck_assert_ldouble_eq(ceil(-123.02), s21_ceil(-123.02));
}
END_TEST

/*
Сравнивает два значения с плавающей запятой двойной точности (long double).
Cоответствие должно быть меньше 1e-7.
tol нужен  из-за ошибок, связанных с представлением чисел с плавающей
запятой, ошибок округления, ошибок с плавающей запятой, зависящих от
платформы.
*/
START_TEST(s21_cos_test) {
  ck_assert_ldouble_eq_tol(s21_cos(-1.5251), cos(-1.5251), 1e-7);
  ck_assert_ldouble_eq_tol(s21_cos(1), cos(1), 1e-7);
  ck_assert_ldouble_eq_tol(s21_cos(0.2), cos(0.2), 1e-7);
  ck_assert_ldouble_eq_tol(cos(12415.12415), s21_cos(12415.12415), 1e-7);
  ck_assert_ldouble_eq_tol(cos(-124345.9999), s21_cos(-124345.9999), 1e-7);
  ck_assert_ldouble_eq_tol(cos(11.010101), s21_cos(11.010101), 1e-7);
}
END_TEST

/*
Сравнивает два значения с плавающей запятой двойной точности (double).
Cоответствие должно быть меньше 1e-6.
tol нужен  из-за ошибок, связанных с представлением чисел с плавающей
запятой, ошибок округления, ошибок с плавающей запятой, зависящих от
платформы.
*/
START_TEST(s21_exp_test) {
  ck_assert_ldouble_eq_tol(s21_exp(-1.5251), exp(-1.5251), 1e-7);
  ck_assert_ldouble_eq_tol(s21_exp(1), exp(1), 1e-7);
  ck_assert_ldouble_eq_tol(s21_exp(0.2), exp(0.2), 1e-7);
  ck_assert_ldouble_eq(exp(12415.12415), s21_exp(12415.12415));
  ck_assert_ldouble_eq(exp(-124345.9999), s21_exp(-124345.9999));
  ck_assert_ldouble_eq_tol(exp(11.010101), s21_exp(11.010101), 1e-7);
}
END_TEST

/*
Сравнивает два значения с плавающей запятой двойной точности (double).
Cоответствие должно быть меньше 1e-6.
tol нужен  из-за ошибок, связанных с представлением чисел с плавающей
запятой, ошибок округления, ошибок с плавающей запятой, зависящих от
платформы.
*/
START_TEST(s21_fabs_test) {
  ck_assert_ldouble_eq_tol(s21_fabs(-1.5251), fabs(-1.5251), 1e-7);
  ck_assert_ldouble_eq_tol(s21_fabs(-1.3243), fabs(-1.3243), 1e-7);
  ck_assert_ldouble_eq_tol(s21_fabs(1.2), fabs(1.2), 1e-7);
  ck_assert_ldouble_eq_tol(s21_fabs(-1.2), fabs(-1.2), 1e-7);
  ck_assert_ldouble_eq_tol(s21_fabs(5969.9595), fabs(5969.9595), 1e-7);
  ck_assert_ldouble_eq_tol(s21_fabs(-5969.9595), fabs(-5969.9595), 1e-7);
}
END_TEST

/* Cравнивает два значения с плавающей запятой двойной точности (double). (eq
- ==) tol тут не нужен т.к. возрат будет целого числа
*/
START_TEST(s21_floor_test) {
  ck_assert_ldouble_eq(floor(-7.0), s21_floor(-7.0));
  ck_assert_ldouble_eq(floor(-98.1), s21_floor(-98.1));
  ck_assert_ldouble_eq(floor(123.02), s21_floor(123.02));
  ck_assert_ldouble_eq(floor(52.02), s21_floor(52.02));
  ck_assert_ldouble_eq(floor(1.05), s21_floor(1.05));
  ck_assert_ldouble_eq(floor(-123.02), s21_floor(-123.02));
}
END_TEST

/*
Сравнивает два значения с плавающей запятой двойной точности (double).
Cоответствие должно быть меньше 1e-6.
tol нужен  из-за ошибок, связанных с представлением чисел с плавающей
запятой, ошибок округления, ошибок с плавающей запятой, зависящих от
платформы.
*/
START_TEST(s21_fmod_test) {
  ck_assert_ldouble_eq_tol(s21_fmod(-1.5251, 5644.5488),
                           fmod(-1.5251, 5644.5488), 1e-7);
  ck_assert_ldouble_eq_tol(s21_fmod(5, 7), fmod(5, 7), 1e-7);
  ck_assert_ldouble_eq_tol(s21_fmod(5.76548, 2), fmod(5.76548, 2), 1e-7);
  ck_assert_ldouble_eq_tol(s21_fmod(5.76548, 1e-7), fmod(5.76548, 1e-7), 1e-7);
  ck_assert_ldouble_eq_tol(s21_fmod(320, 319), fmod(320, 319), 1e-7);
  ck_assert_ldouble_eq_tol(s21_fmod(-320, 319), fmod(-320, 319), 1e-7);
}
END_TEST

/*
Сравнивает два значения с плавающей запятой двойной точности (double).
Cоответствие должно быть меньше 1e-6.
tol нужен  из-за ошибок, связанных с представлением чисел с плавающей
запятой, ошибок округления, ошибок с плавающей запятой, зависящих от
платформы.
*/
START_TEST(s21_log_test) {
  ck_assert_ldouble_eq_tol(s21_log(10), log(10), 1e-7);
  ck_assert_ldouble_eq_tol(s21_log(100), log(100), 1e-7);
  ck_assert_ldouble_eq_tol(s21_log(5), log(5), 1e-7);
  ck_assert_int_eq(isnan(s21_log(-67)), 1);
  ck_assert_int_eq(isnan(s21_log(-1)), 1);
  ck_assert_ldouble_eq(s21_log(0), -S21_INF);
}
END_TEST

/*
Сравнивает два значения с плавающей запятой двойной точности (double).
Cоответствие должно быть меньше 1e-6.
tol нужен  из-за ошибок, связанных с представлением чисел с плавающей
запятой, ошибок округления, ошибок с плавающей запятой, зависящих от
платформы.
*/
START_TEST(s21_pow_test) {
  ck_assert_ldouble_eq_tol(s21_pow(5, 7), pow(5, 7), 1e-7);
  ck_assert_ldouble_eq_tol(s21_pow(5.76548, 2), pow(5.76548, 2), 1e-7);
  ck_assert_ldouble_eq_tol(s21_pow(5.76548, 1e-7), pow(5.76548, 1e-7), 1e-7);
  ck_assert_ldouble_eq(s21_pow(320, 319), pow(320, 319));
  ck_assert_ldouble_eq(s21_pow(-320, 319), pow(-320, 319));
}
END_TEST

/*
Сравнивает два значения с плавающей запятой двойной точности (long double).
Cоответствие должно быть меньше 1e-7.
tol нужен  из-за ошибок, связанных с представлением чисел с плавающей
запятой, ошибок округления, ошибок с плавающей запятой, зависящих от
платформы.
*/
START_TEST(s21_sin_test) {
  ck_assert_ldouble_eq_tol(sin(0.0), s21_sin(0.0), 1e-7);
  ck_assert_ldouble_eq_tol(sin(-2.78965), s21_sin(-2.78965), 1e-7);
  ck_assert_ldouble_eq_tol(sin(-7.7896), s21_sin(-7.7896), 1e-7);
  ck_assert_ldouble_eq_tol(sin(1.1), s21_sin(1.1), 1e-7);
  ck_assert_ldouble_eq_tol(sin(5.51651), s21_sin(5.51651), 1e-7);
  ck_assert_ldouble_eq_tol(sin(-0.1), s21_sin(-0.1), 1e-7);
}
END_TEST

/*
Сравнивает два значения с плавающей запятой двойной точности (double).
Cоответствие должно быть меньше 1e-6.
tol нужен  из-за ошибок, связанных с представлением чисел с плавающей
запятой, ошибок округления, ошибок с плавающей запятой, зависящих от
платформы.
*/
START_TEST(s21_sqrt_test) {
  ck_assert_ldouble_eq_tol(s21_sqrt(1), sqrt(1), 1e-7);
  ck_assert_ldouble_eq_tol(s21_sqrt(10.69), sqrt(10.69), 1e-7);
  ck_assert_ldouble_eq_tol(s21_sqrt(100.2), sqrt(100.2), 1e-7);
  ck_assert_ldouble_eq_tol(s21_sqrt(5), sqrt(5), 1e-7);
  ck_assert_ldouble_eq_tol(s21_sqrt(67.98), sqrt(67.98), 1e-7);
  ck_assert_ldouble_eq_tol(s21_sqrt(0), sqrt(0), 1e-7);
}
END_TEST

/*
Сравнивает два значения с плавающей запятой двойной точности (long double).
Cоответствие должно быть меньше 1e-7.
tol нужен  из-за ошибок, связанных с представлением чисел с плавающей
запятой, ошибок округления, ошибок с плавающей запятой, зависящих от
платформы.
*/
START_TEST(s21_tan_test) {
  ck_assert_ldouble_eq_tol(tan(0.0), s21_tan(0.0), 1e-7);
  ck_assert_ldouble_eq_tol(tan(-2.78965), s21_tan(-2.78965), 1e-7);
  ck_assert_ldouble_eq_tol(tan(-7.7896), s21_tan(-7.7896), 1e-7);
  ck_assert_ldouble_eq_tol(tan(1.1), s21_tan(1.1), 1e-7);
  ck_assert_ldouble_eq_tol(tan(5.51651), s21_tan(5.51651), 1e-7);
  ck_assert_ldouble_eq_tol(tan(-0.1), s21_tan(-0.1), 1e-7);
}
END_TEST

int main() {
  Suite *s1 = suite_create("test");  // Функция создания набора тестов.
  TCase *tc1_1 = tcase_create("test");  // Набор разбивается на группы тестов,
                                        // разделённых по каким-либо критериям.
  SRunner *runner = srunner_create(s1);

  int failed = 0;

  suite_add_tcase(s1, tc1_1);  // Добавление теста в тестовый набор.
  tcase_add_test(tc1_1, s21_abs_test);  // Добавление теста в группу тестов
  tcase_add_test(tc1_1, s21_atan_test);  // Добавление теста в группутестов
  tcase_add_test(tc1_1, s21_acos_test);  // Добавление теста в группутестов
  tcase_add_test(tc1_1, s21_asin_test);  // Добавление теста в группутестов
  tcase_add_test(tc1_1, s21_ceil_test);  // Добавление теста в группутестов
  tcase_add_test(tc1_1, s21_cos_test);  // Добавление теста в группутестов
  tcase_add_test(tc1_1, s21_exp_test);  // Добавление теста в группутестов
  tcase_add_test(tc1_1, s21_fabs_test);  // Добавление теста в группутестов
  tcase_add_test(tc1_1, s21_floor_test);  // Добавление теста в группутестов
  tcase_add_test(tc1_1, s21_fmod_test);  // Добавление теста в группутестов
  tcase_add_test(tc1_1, s21_log_test);  // Добавление теста в группутестов
  tcase_add_test(tc1_1, s21_sin_test);  // Добавление теста в группутестов
  tcase_add_test(tc1_1, s21_sqrt_test);  // Добавление теста в группутестов
  tcase_add_test(tc1_1, s21_tan_test);  // Добавление теста в группутестов
  tcase_add_test(tc1_1, s21_pow_test);  // Добавление теста в группутестов

  srunner_run_all(runner, CK_ENV);  // Запуск тестов
  failed =
      srunner_ntests_failed(runner);  // Получаем количество проваленных тестов.
  srunner_free(runner);  // Отчищаем
  if (failed != 0) {
    // Сигнализируем о том, что тестирование прошло неудачно.
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}
