#include "ex08.h"
#include <stdio.h>

int main() {
  Fila f;
  inicializaFila(&f);

  TipoItem item1 = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}};
  enfileira(&f, item1);

  TipoItem item2 = {{11, 12, 13, 14, 15, 16, 17, 18, 19, 20}};
  enfileira(&f, item2);

  TipoItem itemRemovido = desenfileira(&f);
  printf("Item removido: ");
  imprimeItem(itemRemovido);

  itemRemovido = desenfileira(&f);
  printf("Item removido: ");
  imprimeItem(itemRemovido);

  itemRemovido = desenfileira(&f);

  return 0;
}
