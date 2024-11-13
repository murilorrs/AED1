#include "./ex04.h"

void InicializaFila(TipoFila *pFila) {
  pFila->frente = 0;
  pFila->tras = 0;
}

int Vazia(TipoFila *pFila) { return (pFila->frente == pFila->tras); }

int Enfileira(TipoFila *pFila, TipoItem item) {
  if ((pFila->tras + 1) % MAX == pFila->frente) { // Fila cheia
    // Se a fila atingir o limite, faz o deslocamento
    for (int i = 0; i < pFila->tras - pFila->frente; i++) {
      pFila->itens[i] = pFila->itens[pFila->frente + i];
    }
    pFila->tras -= pFila->frente;
    pFila->frente = 0;
  }

  pFila->itens[pFila->tras] = item;
  pFila->tras = (pFila->tras + 1) % MAX;
  return 1;
}

TipoItem Desenfileira(TipoFila *pFila) {
  if (Vazia(pFila)) {
    return -1;
  }

  TipoItem item = pFila->itens[pFila->frente];
  pFila->frente = (pFila->frente + 1) % MAX;
  return item;
}
