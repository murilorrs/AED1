#include "ex08.h"
#include <stdio.h>

int main() {
  rational r1 = {3, 4}; // 3/4
  rational r2 = {6, 8}; // 6/8 (equivalente a 3/4)
  rational r3 = {2, 3}; // 2/3

  // Testando se r1 e r2 são iguais
  if (equal2(r1, r2)) {
    printf("r1 e r2 são iguais.\n");
  } else {
    printf("r1 e r2 são diferentes.\n");
  }

  // Testando se r1 e r3 são iguais
  if (equal2(r1, r3)) {
    printf("r1 e r3 são iguais.\n");
  } else {
    printf("r1 e r3 são diferentes.\n");
  }

  return 0;
}