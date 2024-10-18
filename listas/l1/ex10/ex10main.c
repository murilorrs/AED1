#include "ex10.h"
#include <stdio.h>

int main() {

  // aumenta em 1000 o salario
  Reg r = {"Joao", 1000, 20, 'M'};

  addSalario(&r, 1000);

  printf("Salario: %d\n", r.salario);

  return 0;
}