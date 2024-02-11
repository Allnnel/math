#include "s21_math.h"

long double s21_pow(double x, double y) {
  long double result = 0;
  if (x == 1 || y == 0)
    result = 1;
  else if (x == 0)
    result = 0;
  else if (x < 0 && y - (int)y != 0)
    result = S21_NAN;
  else if (x < 0 && y - (int)y == 0) {
    x = -x;
    result = s21_exp(y * s21_log(x));
    if (s21_fmod(y, 2) != 0) result = -result;
  } else {
    result = s21_exp(y * s21_log(x));
  }
  return result;
}
