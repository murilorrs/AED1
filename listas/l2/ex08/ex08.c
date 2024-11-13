#include "ex08.h"
#include <stdio.h>

// Função para inicializar a fila
void inicializaFila(Fila *f) {
  f->frente = 0; // Posição inicial da fila
  f->tras = 0;   // Posição inicial da fila
}

// Função para enfileirar (inserir um item na fila)
int enfileira(Fila *f, TipoItem item) {
  if (f->tras >= MAX) { // Verifica se a fila está cheia
    printf("Fila cheia!\n");
    return -1; // Retorna erro
  }

  f->queue[f->tras] = item; // Coloca o item na posição final
  f->tras++;                // Move a posição final para a próxima
  return 0;                 // Sucesso
}

// Função para desenfileirar (remover um item da fila)
TipoItem desenfileira(Fila *f) {
  if (filaVazia(f)) { // Verifica se a fila está vazia
    printf("Fila vazia!\n");
    TipoItem itemVazio = {{0}}; // Retorna um item vazio
    return itemVazio;
  }

  TipoItem item = f->queue[f->frente]; // Obtém o item da posição inicial
  f->frente++;                         // Move a posição inicial para a próxima
  return item;                         // Retorna o item removido
}

// Função para verificar se a fila está vazia
int filaVazia(Fila *f) {
  return f->frente == f->tras; // Se as posições frente e trás forem iguais, a fila está vazia
}

// Função para imprimir um item (vetor de inteiros)
void imprimeItem(TipoItem item) {
  for (int i = 0; i < MAX_ITEM; i++) {
    printf("%d ", item.item[i]);
  }
  printf("\n");
}
