#include <stdbool.h>
#include <stdio.h>

#define MAX_ELEMENTOS 20

typedef struct {
  int conjunto[20];
  int tamanho;
} TConjunto;

TConjunto criaConjuntoVazio();

void lerConjunto(TConjunto *c);

TConjunto uniao(TConjunto *c1, TConjunto *c2);

TConjunto intersecaoConjuntos(TConjunto *c1, TConjunto *c2);

bool conjuntosIguais(TConjunto *c1, TConjunto *c2);

void imprimirConjunto(TConjunto *conjunto);