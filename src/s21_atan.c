#include "s21_math.h"

long double s21_atan(double x) {
  long double temp = (long double)x;
  long double result = 0;
  if (temp < 1 && temp > -1) {
    for (int n = 1; n < 1000; n++) {
      result += (s21_pow(-1, n - 1) * s21_pow(temp, 2 * n - 1)) / (2 * n - 1);
    }
  } else if (temp == S21_INF) {
    result = S21_PI / 2;
  } else if (temp == -S21_INF) {
    result = -S21_PI / 2;
  } else if (temp > 1 || temp < -1) {
    for (int n = 0; n < 1000; n++) {
      result += s21_pow(-1, n) * s21_pow(temp, -1 - (2 * n)) / (1 + (2 * n));
    }
    result = S21_PI * s21_sqrt(temp * temp) / (2 * temp) - result;
  } else if (temp == 1) {
    result = S21_PI / 4;
  } else if (temp == -1) {
    result = (-1) * S21_PI / 4;
  } else if (temp != temp) {
    result = S21_NAN;
  }

  return result;
}
