#include "ex02.h"
#include <stdio.h>
#include <stdlib.h>

void inicializaFila(TipoFila *pFila) {
  pFila->frente = 0;
  pFila->tras = -1;
  pFila->tamanho = 0;
}

int filaCheia(TipoFila *pFila) { return pFila->tamanho == MAX; }

int filaVazia(TipoFila *pFila) { return pFila->tamanho == 0; }

void enfileira(TipoFila *pFila, int item) {
  if (filaCheia(pFila)) {
    printf("Erro: Fila cheia!\n");
    return;
  }
  pFila->tras = (pFila->tras + 1) % MAX;
  pFila->itens[pFila->tras] = item;
  pFila->tamanho++;
}

int desenfileira(TipoFila *pFila) {
  if (filaVazia(pFila)) {
    printf("Erro: Fila vazia!\n");
    exit(1);
  }
  int itemRemovido = pFila->itens[pFila->frente];
  pFila->frente = (pFila->frente + 1) % MAX;
  pFila->tamanho--;
  return itemRemovido;
}

// Insere um item na primeira posição da fila de forma eficiente
void furaFila(TipoFila *pFila, int item) {
  if (filaCheia(pFila)) {
    printf("Erro: Fila cheia!\n");
    return;
  }
  // Move frente para trás na circularidade do array
  pFila->frente = (pFila->frente - 1 + MAX) % MAX;
  pFila->itens[pFila->frente] = item;
  pFila->tamanho++;
}

void exibeFila(TipoFila *pFila) {
  if (filaVazia(pFila)) {
    printf("Fila vazia.\n");
    return;
  }
  printf("Fila: ");
  for (int i = 0; i < pFila->tamanho; i++) {
    int index = (pFila->frente + i) % MAX;
    printf("%d ", pFila->itens[index]);
  }
  printf("\n");
}
