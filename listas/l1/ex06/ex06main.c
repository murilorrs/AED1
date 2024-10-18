
#include "ex06.h"
#include <stdio.h>

int main() {
  rational r1 = {3, 4}; // 3/4
  rational r2 = {5, 6}; // 5/6

  rational sum = add(r1, r2);
  rational diff = subtract(r1, r2);
  rational div = divide(r1, r2);

  printf("Soma: %d/%d\n", sum.numerator, sum.denominator);
  printf("Subtração: %d/%d\n", diff.numerator, diff.denominator);
  printf("Divisão: %d/%d\n", div.numerator, div.denominator);

  return 0;
}
