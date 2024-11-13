#ifndef FILA_H
#define FILA_H

#define MAX 10

typedef int TipoItem;

typedef struct {
  TipoItem itens[MAX];
  int frente;
  int tras;
} TipoFila;

void InicializaFila(TipoFila *pFila);
int Vazia(TipoFila *pFila);
int Enfileira(TipoFila *pFila, TipoItem item);
TipoItem Desenfileira(TipoFila *pFila);

#endif
