#include "ex07.h"
#include <stdio.h>

// Função para inicializar a fila
void inicializaFila(Fila *f) {
  f->frente = 2; // Posição inicial da fila
  f->tras = 2;   // Posição inicial da fila
}

// Função para enfileirar (inserir um elemento na fila)
int enfileira(Fila *f, int valor) {
  if (f->tras >= MAX) { // Verifica se a fila está cheia
    printf("Fila cheia!\n");
    return -1; // Retorna erro
  }

  f->queue[f->tras] = valor; // Coloca o valor na posição final
  f->tras++;                 // Move a posição final para a próxima
  return 0;                  // Sucesso
}

// Função para desenfileirar (remover um elemento da fila)
int desenfileira(Fila *f) {
  if (f->frente == f->tras) { // Verifica se a fila está vazia
    printf("Fila vazia!\n");
    return -1; // Retorna erro
  }

  int valor = f->queue[f->frente]; // Obtém o valor da posição inicial
  f->frente++;                     // Move a posição inicial para a próxima
  return valor;                    // Retorna o valor removido
}

// Função para verificar se a fila está vazia
int filaVazia(Fila *f) {
  return f->frente == f->tras; // Se as posições frente e trás forem iguais, a fila está vazia
}
