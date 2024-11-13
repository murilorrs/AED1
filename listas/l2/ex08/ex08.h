#define MAX 100
#define MAX_ITEM 10

typedef struct {
  int item[MAX_ITEM];
} TipoItem;

typedef struct {
  TipoItem queue[MAX]; // Vetor que contém os itens da fila
  int frente, tras;
} Fila;

void inicializaFila(Fila *f);
int enfileira(Fila *f, TipoItem item);
TipoItem desenfileira(Fila *f);
int filaVazia(Fila *f);
void imprimeItem(TipoItem item);
