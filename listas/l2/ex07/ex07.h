#define MAX 100 // Tamanho máximo da fila

typedef struct {
  int queue[MAX];
  int frente, tras;
} Fila;

// Funções da fila
void inicializaFila(Fila *f);
int enfileira(Fila *f, int valor);
int desenfileira(Fila *f);
int filaVazia(Fila *f);
