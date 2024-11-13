#include "ex03.h"
#include <stdio.h>

int main() {
  FilaProcessos fila;
  inicializaFila(&fila);

  int opcao;
  Processo p;

  do {
    printf("\nMenu:\n");
    printf("1. Incluir novo processo\n");
    printf("2. Retirar processo com maior tempo de espera\n");
    printf("3. Imprimir fila de processos\n");
    printf("4. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:

      printf("Digite o ID do processo: ");
      scanf("%d", &p.id);
      printf("Digite o tempo de espera (em segundos): ");
      scanf("%d", &p.tempo);
      incluiProcesso(&fila, p);
      break;

    case 2:
      p = retiraProcesso(&fila);
      if (p.id != 0) {
        printf("Processo retirado: ID = %d, Tempo de espera = %d\n", p.id, p.tempo);
      }
      break;

    case 3:

      imprimeFila(&fila);
      break;

    case 4:

      printf("Saindo...\n");
      break;

    default:
      printf("Opção inválida!\n");
      break;
    }

  } while (opcao != 4);

  return 0;
}
