#include "./ex02.h"

int main() {
  TipoFila fila;
  inicializaFila(&fila);

  enfileira(&fila, 10);
  enfileira(&fila, 20);
  enfileira(&fila, 30);

  printf("Fila antes de furar fila:\n");
  exibeFila(&fila);

  furaFila(&fila, 5);

  printf("Fila após furar fila com o valor 5:\n");
  exibeFila(&fila);

  return 0;
}