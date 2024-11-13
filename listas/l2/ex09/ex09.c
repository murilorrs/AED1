#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
  int deque[MAX];
  int esq, dir;
} Deque;

void inicializaDeque(Deque *d) {
  d->esq = -1;
  d->dir = -1;
}

int dequeVazio(Deque *d) { return d->esq == -1 && d->dir == -1; }

int dequeCheio(Deque *d) { return (d->dir + 1) % MAX == d->esq; }

int InsereDireita(Deque *d, int item) {
  if (dequeCheio(d)) {
    printf("Erro: Deque cheio!\n");
    return -1;
  }
  if (dequeVazio(d)) {
    d->esq = 0;
    d->dir = 0;
  } else {
    d->dir = (d->dir + 1) % MAX;
  }
  d->deque[d->dir] = item;
  return 0; // Sucesso
}

int InsereEsquerda(Deque *d, int item) {
  if (dequeCheio(d)) {
    printf("Erro: Deque cheio!\n");
    return -1; // Deque cheio
  }
  if (dequeVazio(d)) {
    d->esq = 0; // Inicializa a posição esquerda
    d->dir = 0; // Inicializa a posição direita
  } else {
    d->esq = (d->esq - 1 + MAX) % MAX; // Move para a esquerda
  }
  d->deque[d->esq] = item;
  return 0; // Sucesso
}

// Remove um item à direita
int RemoveDireita(Deque *d, int *item) {
  if (dequeVazio(d)) {
    printf("Erro: Deque vazio!\n");
    return -1; // Deque vazio
  }
  *item = d->deque[d->dir];
  if (d->esq == d->dir) {
    d->esq = -1;
    d->dir = -1;
  } else {
    d->dir = (d->dir - 1 + MAX) % MAX;
  }
  return 0; // Sucesso
}

// Remove um item à esquerda
int RemoveEsquerda(Deque *d, int *item) {
  if (dequeVazio(d)) {
    printf("Erro: Deque vazio!\n");
    return -1; // Deque vazio
  }
  *item = d->deque[d->esq]; // Armazena o item removido
  if (d->esq == d->dir) {   // Caso o deque fique vazio
    d->esq = -1;
    d->dir = -1;
  } else {
    d->esq = (d->esq + 1) % MAX; // Move para a direita
  }
  return 0; // Sucesso
}

void imprimeDeque(Deque *d) {
  if (dequeVazio(d)) {
    printf("Deque vazio!\n");
    return;
  }
  int i = d->esq;
  while (i != d->dir) {
    printf("%d ", d->deque[i]);
    i = (i + 1) % MAX;
  }
  printf("%d\n", d->deque[d->dir]);
}

int main() {
  Deque d;
  inicializaDeque(&d);

  int op, item;

  while (1) {
    printf("\n1. Insere à direita\n");
    printf("2. Insere à esquerda\n");
    printf("3. Remove da direita\n");
    printf("4. Remove da esquerda\n");
    printf("5. Imprimir deque\n");
    printf("6. Sair\n");
    printf("Escolha a opção: ");
    scanf("%d", &op);

    switch (op) {
    case 1:
      printf("Digite o item para inserir à direita: ");
      scanf("%d", &item);
      InsereDireita(&d, item);
      break;
    case 2:
      printf("Digite o item para inserir à esquerda: ");
      scanf("%d", &item);
      InsereEsquerda(&d, item);
      break;
    case 3:
      if (RemoveDireita(&d, &item) == 0) {
        printf("Item removido da direita: %d\n", item);
      }
      break;
    case 4:
      if (RemoveEsquerda(&d, &item) == 0) {
        printf("Item removido da esquerda: %d\n", item);
      }
      break;
    case 5:
      imprimeDeque(&d);
      break;
    case 6:
      printf("Saindo...\n");
      return 0;
    default:
      printf("Opção inválida!\n");
      break;
    }
  }

  return 0;
}
