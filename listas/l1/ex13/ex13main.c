#include "ex13.h"

int main() {
  int n;
  printf("Digite o tamanho da matriz (n): ");
  scanf("%d", &n);

  TMatriz m1 = criaMatriz(n);
  TMatriz m2 = criaMatriz(n);

  lerMatriz(&m1);
  lerMatriz(&m2);

  TMatriz soma = somaMatrizes(&m1, &m2);
  printf("Soma das matrizes:\n");
  imprimirMatriz(&soma);

  TMatriz produto = multiplicaMatrizes(&m1, &m2);
  printf("Produto das matrizes:\n");
  imprimirMatriz(&produto);

  TMatriz inversa = matrizInversa(&m1);
  printf("Inversa da primeira matriz:\n");
  imprimirMatriz(&inversa);

  return 0;
}
