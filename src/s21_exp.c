#include "s21_math.h"

long double s21_exp(double x) {
  long double result = 0;

  if ((long double)x == S21_INF || (long double)x > 709.7)
    result = S21_INF;

  else if ((long double)x == -S21_INF)
    result = 0.0;

  else if (x != x)
    result = S21_NAN;

  else if ((long double)x < -14) {
    result = 0;
  }

  else {
    double it = 1;
    long double term = 1;

    while (term > precision || term < -precision) {
      result += term;
      term *= (long double)x / it;
      it++;
    }
  }

  return result;
}