// main.c
#include "ex14.h"
#include <stdio.h>

int main() {
  TConjunto c1 = criaConjuntoVazio();
  TConjunto c2 = criaConjuntoVazio();

  printf("Lendo conjunto 1:\n");
  lerConjunto(&c1);
  printf("Lendo conjunto 2:\n");
  lerConjunto(&c2);

  printf("Conjunto 1: ");
  imprimirConjunto(&c1);

  printf("Conjunto 2: ");
  imprimirConjunto(&c2);

  TConjunto une = uniao(&c1, &c2);
  printf("União dos conjuntos: ");
  imprimirConjunto(&uniao);

  TConjunto intersecao = intersecaoConjuntos(&c1, &c2);
  printf("Interseção dos conjuntos: ");
  imprimirConjunto(&intersecao);

  if (conjuntosIguais(&c1, &c2)) {
    printf("Os conjuntos são iguais.\n");
  } else {
    printf("Os conjuntos são diferentes.\n");
  }

  return 0;
}
