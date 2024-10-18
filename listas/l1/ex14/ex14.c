#include "ex14.h"

TConjunto criaConjuntoVazio() {
  TConjunto c;
  c.tamanho = 0;
  return c;
}

void lerConjunto(TConjunto *c) {
  printf("Informe o número de elementos (máx %d): ", MAX_ELEMENTOS);
  scanf("%d", &c->tamanho);
  if (c->tamanho > MAX_ELEMENTOS) {
    c->tamanho = MAX_ELEMENTOS;
  }
  for (int i = 0; i < c->tamanho; i++) {
    printf("Elemento %d: ", i + 1);
    scanf("%d", &c->conjunto[i]);
  }
}

TConjunto uniaoConjuntos(TConjunto *c1, TConjunto *c2) {
  TConjunto resultado = criaConjuntoVazio();
  for (int i = 0; i < c1->tamanho; i++) {
    resultado.conjunto[resultado.tamanho++] = c1->conjunto[i];
  }
  for (int i = 0; i < c2->tamanho; i++) {
    if (!elementoEstaNoConjunto(&resultado, c2->conjunto[i])) {
      resultado.conjunto[resultado.tamanho++] = c2->conjunto[i];
    }
  }
  return resultado;
}

TConjunto intersecaoConjuntos(TConjunto *c1, TConjunto *c2) {
  TConjunto resultado = criaConjuntoVazio();
  for (int i = 0; i < c1->tamanho; i++) {
    if (elementoEstaNoConjunto(c2, c1->conjunto[i])) {
      resultado.conjunto[resultado.tamanho++] = c1->conjunto[i];
    }
  }
  return resultado;
}

bool conjuntosIguais(TConjunto *c1, TConjunto *c2) {
  if (c1->tamanho != c2->tamanho) {
    return 0;
  }
  for (int i = 0; i < c1->tamanho; i++) {
    if (!elementoEstaNoConjunto(c2, c1->conjunto[i])) {
      return 0;
    }
  }
  return 1;
}

void imprimirConjunto(TConjunto *c) {
  printf("{ ");
  for (int i = 0; i < c->tamanho; i++) {
    printf("%d ", c->conjunto[i]);
  }
  printf("}\n");
}