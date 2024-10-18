// main.c
#include "ex07.h"
#include <stdio.h>

int main() {
  rational r1 = {3, 4};
  rational r2 = {6, 8};
  rational r3 = {2, 3};

  if (equal(r1, r2)) {
    printf("r1 e r2 são iguais.\n");
  } else {
    printf("r1 e r2 são diferentes.\n");
  }

  if (equal(r1, r3)) {
    printf("r1 e r3 são iguais.\n");
  } else {
    printf("r1 e r3 são diferentes.\n");
  }

  return 0;
}
