#include "ex01.h"

int main() {
  Complexo c1 = criarComplexo(3, 4);
  Complexo c2 = criarComplexo(1, 2);

  Complexo soma = somaComplexo(c1, c2);
  Complexo produto = multiplicaComplexo(c1, c2);
  Complexo negado = negaComplexo(c1);
  double modulo = absComplexo(c1);

  printf("Soma: %.2f + %.2fi\n", soma.real, soma.imaginario);
  printf("Produto: %.2f + %.2fi\n", produto.real, produto.imaginario);
  printf("Negado: %.2f + %.2fi\n", negado.real, negado.imaginario);
  printf("Módulo de c1: %.2f\n", modulo);

  return 0;
}
