#include "s21_math.h"

long double s21_cos(double x) {
  long double result = 1;
  if ((x > 0 && x == S21_INF) || x != x)
    result = S21_NAN;
  else if (x < 0 && x == -S21_INF)
    result = -S21_NAN;
  else {
    if (x > 0) {
      while (x > 2 * S21_PI) {
        x -= 2 * S21_PI;
      }
    } else {
      while (x < -2 * S21_PI) {
        x += 2 * S21_PI;
      }
    }
    int it = 1;
    long double term = 1;
    while (term > precision || term < -precision) {
      term *= (-1) * x * x / ((2 * it - 1) * (2 * it));
      result += term;
      it++;
    }
  }
  return result;
}
