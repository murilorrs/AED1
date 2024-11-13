#include <stdbool.h>

typedef struct NoFila {
  int dado;
  struct NoFila *proximo;
} NoFila;

typedef struct {
  NoFila *frente;
  NoFila *tras;
} Fila;

typedef struct NoPilha {
  int dado;
  struct NoPilha *proximo;
} NoPilha;

typedef struct {
  NoPilha *topo;
} Pilha;

// fila
Fila *criaFila();
void enfileira(Fila *f, int item);
int desenfileira(Fila *f);
bool filaVazia(Fila *f);
void destroiFila(Fila *f);

// pilha
Pilha *criaPilha();
void empilha(int item, Pilha *p);
int desempilha(Pilha *p);
bool pilhaVazia(Pilha *p);
void destroiPilha(Pilha *p);

void inverterFila(Fila *f);
