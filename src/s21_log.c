#include "s21_math.h"

long double s21_log(double x) {
  long double result = 0;
  if (x == 0)
    result = -S21_INF;
  else if (x < 0)
    result = S21_NAN;
  else {
    for (int i = 0; i < 1000; i++) {
      long double compare = result;
      result = compare + 2 * (x - s21_exp(compare)) / (x + s21_exp(compare));
    }
  }
  return result;
}