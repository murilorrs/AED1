#include "ex07.h"
#include <stdio.h>

int main() {
  Fila f;
  inicializaFila(&f);

  enfileira(&f, 10);
  enfileira(&f, 20);
  enfileira(&f, 30);

  printf("Desenfileirando: %d\n", desenfileira(&f)); // Deve remover 10
  printf("Desenfileirando: %d\n", desenfileira(&f)); // Deve remover 20

  if (!filaVazia(&f)) {
    printf("Elemento na fila: %d\n", desenfileira(&f)); // Deve remover 30
  }

  desenfileira(&f);

  return 0;
}
