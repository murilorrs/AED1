#include "ex02.h"
#include <stdio.h>

int main() {
  realtype r1 = criarReal(5, 75);
  realtype r2 = criarReal(-3, 50);

  printf("r1 = %.2f\n", converterParaReal(r1));
  printf("r2 = %.2f\n", converterParaReal(r2));

  realtype soma = add(r1, r2);
  printf("Soma: %.2f\n", converterParaReal(soma));

  realtype subtracao = subtract(r1, r2);
  printf("Subtração: %.2f\n", converterParaReal(subtracao));

  realtype produto = multiply(r1, r2);
  printf("Multiplicação: %.2f\n", converterParaReal(produto));

  return 0;
}
