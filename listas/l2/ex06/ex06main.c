#include "ex06.h"

int main() {
  // Testando a Fila de Pilhas
  FilaDePilhas filaDePilhas;
  inicializaFilaDePilhas(&filaDePilhas);

  Pilha p1 = {{1, 2, 3}, 2}; // Pilha com 3 elementos
  enfileiraFilaDePilhas(&filaDePilhas, p1);

  Pilha p2 = {{4, 5, 6}, 2}; // Outra pilha
  enfileiraFilaDePilhas(&filaDePilhas, p2);

  Pilha removida = desenfileiraFilaDePilhas(&filaDePilhas);
  printf("Desenfileirada Pilha: Topo = %d\n", removida.dados[removida.topo]);

  // Testando a Pilha de Filas
  PilhaDeFilas pilhaDeFilas;
  inicializaPilhaDeFilas(&pilhaDeFilas);

  Fila f1 = {{10, 20, 30}, 0, 3};
  empilhaPilhaDeFilas(&pilhaDeFilas, f1);

  Fila f2 = {{40, 50, 60}, 0, 3};
  empilhaPilhaDeFilas(&pilhaDeFilas, f2);

  Fila removidaFila = desempilhaPilhaDeFilas(&pilhaDeFilas);
  printf("Desempilhada Fila: Frente = %d, Tras = %d\n", removidaFila.dados[removidaFila.frente], removidaFila.dados[removidaFila.tras]);

  // Testando a Fila de Filas
  FilaDeFilas filaDeFilas;
  inicializaFilaDeFilas(&filaDeFilas);

  Fila f3 = {{1, 2, 3}, 0, 3};
  enfileiraFilaDeFilas(&filaDeFilas, f3);

  Fila f4 = {{4, 5, 6}, 0, 3};
  enfileiraFilaDeFilas(&filaDeFilas, f4);

  Fila removidaFilaDeFila = desenfileiraFilaDeFilas(&filaDeFilas);
  printf("Desenfileirada Fila de Fila: Frente = %d, Tras = %d\n", removidaFilaDeFila.dados[removidaFilaDeFila.frente], removidaFilaDeFila.dados[removidaFilaDeFila.tras]);

  return 0;
}