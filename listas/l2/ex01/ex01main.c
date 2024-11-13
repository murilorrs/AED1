#include "ex01.h"
#include <stdio.h>

int main() {
  Fila *f = criaFila();

  // Enfileirando alguns itens para teste
  enfileira(f, 1);
  enfileira(f, 2);
  enfileira(f, 3);
  enfileira(f, 4);

  printf("Fila original:\n");
  Fila *tempFila = criaFila(); // Fila temporária para exibir a fila original sem modificá-la
  while (!filaVazia(f)) {
    int item = desenfileira(f);
    printf("%d ", item);
    enfileira(tempFila, item); // Copia os elementos de volta para a fila original
  }
  printf("\n");

  // Restaurando a fila original para inverter
  while (!filaVazia(tempFila)) {
    enfileira(f, desenfileira(tempFila));
  }

  // Invertendo a fila
  inverterFila(f);

  printf("Fila invertida:\n");
  while (!filaVazia(f)) {
    printf("%d ", desenfileira(f));
  }
  printf("\n");

  destroiFila(f);
  destroiFila(tempFila);

  return 0;
}
