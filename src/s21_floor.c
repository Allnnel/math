#include "s21_math.h"

long double s21_floor(double x) {
  long double a = (int)x;
  if (x > 0 && x == S21_INF)
    a = S21_INF;
  else if (x < 0 && x == -S21_INF)
    a = -S21_INF;
  else if (x != x)
    a = S21_NAN;
  else {
    if (x < 0 && x - a != 0) a = a - 1;
  }
  return a;
}