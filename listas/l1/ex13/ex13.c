#include "ex13.h"
#include <stdio.h>

// criar uma matriz
TMatriz criaMatriz(int n) {
  TMatriz matriz;
  matriz.n = n;
  return matriz;
}

// ler os dados
void lerMatriz(TMatriz *matriz) {
  printf("Digite os elementos da matriz %d x %d:\n", matriz->n, matriz->n);
  for (int i = 0; i < matriz->n; i++) {
    for (int j = 0; j < matriz->n; j++) {
      printf("Elemento [%d][%d]: ", i, j);
      scanf("%d", &matriz->elementos[i][j]);
    }
  }
}

// imprimir uma matriz
void imprimirMatriz(TMatriz *matriz) {
  printf("Matriz %d x %d:\n", matriz->n, matriz->n);
  for (int i = 0; i < matriz->n; i++) {
    for (int j = 0; j < matriz->n; j++) {
      printf("%d ", matriz->elementos[i][j]);
    }
    printf("\n");
  }
}

// somar duas matrizes
TMatriz somaMatrizes(TMatriz *m1, TMatriz *m2) {
  TMatriz resultado = criaMatriz(m1->n);
  for (int i = 0; i < m1->n; i++) {
    for (int j = 0; j < m1->n; j++) {
      resultado.elementos[i][j] = m1->elementos[i][j] + m2->elementos[i][j];
    }
  }
  return resultado;
}

// multiplicar duas matrizes
TMatriz multiplicaMatrizes(TMatriz *m1, TMatriz *m2) {
  TMatriz resultado = criaMatriz(m1->n);
  for (int i = 0; i < m1->n; i++) {
    for (int j = 0; j < m2->n; j++) {
      resultado.elementos[i][j] = 0;
      for (int k = 0; k < m1->n; k++) {
        resultado.elementos[i][j] += m1->elementos[i][k] * m2->elementos[k][j];
      }
    }
  }
  return resultado;
}

// calcular o determinante de uma matriz
int calcularDeterminante(TMatriz *matriz) {
  if (matriz->n == 1) {
    return matriz->elementos[0][0]; // Determinante de 1x1
  }
  if (matriz->n == 2) {
    return (matriz->elementos[0][0] * matriz->elementos[1][1]) - (matriz->elementos[0][1] * matriz->elementos[1][0]); // Determinante de 2x2
  }

  int det = 0;
  TMatriz submatriz;
  submatriz.n = matriz->n - 1;

  for (int x = 0; x < matriz->n; x++) {
    int subi = 0;
    for (int i = 1; i < matriz->n; i++) {
      int subj = 0;
      for (int j = 0; j < matriz->n; j++) {
        if (j == x)
          continue; // Ignora a coluna atual
        submatriz.elementos[subi][subj] = matriz->elementos[i][j];
        subj++;
      }
      subi++;
    }
    det += (x % 2 == 0 ? 1 : -1) * matriz->elementos[0][x] * calcularDeterminante(&submatriz);
  }
  return det;
}

// calcular a matriz inversa
TMatriz matrizInversa(TMatriz *matriz) {
  TMatriz inversa = criaMatriz(matriz->n);
  int det = calcularDeterminante(matriz);

  if (det == 0) {
    printf("Matriz não inversível.\n");
    return inversa;
  }

  if (matriz->n == 2) {
    inversa.elementos[0][0] = matriz->elementos[1][1] / (float)det;
    inversa.elementos[0][1] = -matriz->elementos[0][1] / (float)det;
    inversa.elementos[1][0] = -matriz->elementos[1][0] / (float)det;
    inversa.elementos[1][1] = matriz->elementos[0][0] / (float)det;
    return inversa;
  }

  printf("Inversão de matrizes maiores não implementada.\n");
  return inversa;
}
