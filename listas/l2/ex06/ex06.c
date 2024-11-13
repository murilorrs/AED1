#include "ex06.h"
#include <stdio.h>
#include <stdlib.h>

// Funções para Fila de Pilhas
void inicializaFilaDePilhas(FilaDePilhas *f) {
  f->frente = 0;
  f->tras = 0;
}

void enfileiraFilaDePilhas(FilaDePilhas *f, Pilha p) {
  if (f->tras < MAX) {
    f->pilhas[f->tras] = p;
    f->tras++;
  }
}

Pilha desenfileiraFilaDePilhas(FilaDePilhas *f) {
  if (f->frente < f->tras) {
    Pilha p = f->pilhas[f->frente];
    f->frente++;
    return p;
  }
  // Caso de fila vazia
  return (Pilha){.topo = -1};
}

// Funções para Pilha de Filas
void inicializaPilhaDeFilas(PilhaDeFilas *p) { p->topo = -1; }

void empilhaPilhaDeFilas(PilhaDeFilas *p, Fila f) {
  if (p->topo < MAX - 1) {
    p->topo++;
    p->filas[p->topo] = f;
  }
}

Fila desempilhaPilhaDeFilas(PilhaDeFilas *p) {
  if (p->topo >= 0) {
    Fila f = p->filas[p->topo];
    p->topo--;
    return f;
  }
  // Caso de pilha vazia
  return (Fila){.frente = -1, .tras = -1};
}

// Funções para Fila de Filas
void inicializaFilaDeFilas(FilaDeFilas *f) {
  f->frente = 0;
  f->tras = 0;
}

void enfileiraFilaDeFilas(FilaDeFilas *f, Fila fila) {
  if (f->tras < MAX) {
    f->filas[f->tras] = fila;
    f->tras++;
  }
}

Fila desenfileiraFilaDeFilas(FilaDeFilas *f) {
  if (f->frente < f->tras) {
    Fila fila = f->filas[f->frente];
    f->frente++;
    return fila;
  }
  // Caso de fila vazia
  return (Fila){.frente = -1, .tras = -1};
}
