#include "s21_math.h"

long double s21_sqrt(double x) {
  long double result = 0;
  if (x < 0) {
    result = S21_NAN;
  } else if (x == 0) {
    result = 0;
  } else {
    result = x;
    for (int i = 0; i < 1000000; i++) {
      result = (result + x / result) / 2;
    }
  }
  return result;
}
