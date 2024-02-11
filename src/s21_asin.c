#include "s21_math.h"

long double s21_asin(double x) {
  long double result = 0;

  if (x != x)
    result = S21_NAN;
  else {
    if (x > -1 && x < 1) {
      double it = 1;
      double pred_term = 1;
      double term = x;
      while (term > precision || term < -precision) {
        result += term;
        pred_term *= (it / (it + 1));
        it += 2;
        term = pred_term * s21_pow(x, it) / it;
      }
    }
    if (x == 1 || x == -1)
      result = S21_PI / (2 * x);
    else if (x > 1 || x < -1)
      result = S21_NAN;
  }

  return result;
}