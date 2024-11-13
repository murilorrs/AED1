#include "ex03.h"
#include <stdio.h>

void inicializaFila(FilaProcessos *f) {
  f->frente = 0;
  f->tras = 0;
}

int incluiProcesso(FilaProcessos *f, Processo p) {
  if (f->tras >= MAX) {
    printf("Fila cheia!\n");
    return -1;
  }

  f->queue[f->tras] = p;
  f->tras++;
  return 0;
}

Processo retiraProcesso(FilaProcessos *f) {
  if (filaVazia(f)) {
    printf("Fila vazia!\n");
    Processo processoVazio = {0, 0};
    return processoVazio;
  }

  int maiorTempoIdx = f->frente;
  for (int i = f->frente + 1; i < f->tras; i++) {
    if (f->queue[i].tempo > f->queue[maiorTempoIdx].tempo) {
      maiorTempoIdx = i;
    }
  }

  Processo p = f->queue[maiorTempoIdx];

  // Remove o processo da fila
  for (int i = maiorTempoIdx; i < f->tras - 1; i++) {
    f->queue[i] = f->queue[i + 1];
  }
  f->tras--;
  return p;
}

int filaVazia(FilaProcessos *f) { return f->frente == f->tras; }

void imprimeFila(FilaProcessos *f) {
  if (filaVazia(f)) {
    printf("Fila vazia!\n");
    return;
  }

  printf("Fila de processos:\n");
  for (int i = f->frente; i < f->tras; i++) {
    printf("ID: %d, Tempo de espera: %d\n", f->queue[i].id, f->queue[i].tempo);
  }
}
