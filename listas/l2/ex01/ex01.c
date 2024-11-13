#include "./ex01.h"
#include <stdio.h>
#include <stdlib.h>

// Funções de Fila
Fila *criaFila() {
  Fila *f = (Fila *)malloc(sizeof(Fila));
  f->frente = f->tras = NULL;
  return f;
}

void enfileira(Fila *f, int item) {
  NoFila *novo = (NoFila *)malloc(sizeof(NoFila));
  novo->dado = item;
  novo->proximo = NULL;
  if (f->tras != NULL) {
    f->tras->proximo = novo;
  } else {
    f->frente = novo;
  }
  f->tras = novo;
}

int desenfileira(Fila *f) {
  if (filaVazia(f)) {
    printf("Erro: Fila vazia!\n");
    exit(1);
  }
  NoFila *removido = f->frente;
  int item = removido->dado;
  f->frente = removido->proximo;
  if (f->frente == NULL) {
    f->tras = NULL;
  }
  free(removido);
  return item;
}

bool filaVazia(Fila *f) { return f->frente == NULL; }

void destroiFila(Fila *f) {
  while (!filaVazia(f)) {
    desenfileira(f);
  }
  free(f);
}

Pilha *criaPilha() {
  Pilha *p = (Pilha *)malloc(sizeof(Pilha));
  p->topo = NULL;
  return p;
}

void empilha(int item, Pilha *p) {
  NoPilha *novo = (NoPilha *)malloc(sizeof(NoPilha));
  novo->dado = item;
  novo->proximo = p->topo;
  p->topo = novo;
}

int desempilha(Pilha *p) {
  if (pilhaVazia(p)) {
    printf("Erro: Pilha vazia!\n");
    exit(1);
  }
  NoPilha *removido = p->topo;
  int item = removido->dado;
  p->topo = removido->proximo;
  free(removido);
  return item;
}

bool pilhaVazia(Pilha *p) { return p->topo == NULL; }

void destroiPilha(Pilha *p) {
  while (!pilhaVazia(p)) {
    desempilha(p);
  }
  free(p);
}

void inverterFila(Fila *f) {
  Pilha *p = criaPilha();
  int aux;

  while (!filaVazia(f)) {
    aux = desenfileira(f);
    empilha(aux, p);
  }

  while (!pilhaVazia(p)) {
    aux = desempilha(p);
    enfileira(f, aux);
  }

  destroiPilha(p);
}
