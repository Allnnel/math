#include "s21_math.h"

long double s21_sin(double x) {
  long double result;
  if (x == S21_INF || x == -S21_INF)
    result = S21_NAN;

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
    double it = 0;
    long double term = x;
    result = x;
    while (term > precision || term < -precision) {
      term *= (-1) * x * x / ((2 * it + 2) * (2 * it + 3));
      result += term;
      it++;
    }
  }
  return result;
}