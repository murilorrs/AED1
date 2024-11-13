#define MAX 10 // Tamanho máximo da fila e pilha

typedef struct {
  int dados[MAX];
  int topo;
} Pilha;

typedef struct {
  int dados[MAX];
  int frente, tras;
} Fila;

// Definição da estrutura Fila de Pilhas
typedef struct {
  Pilha pilhas[MAX];
  int frente, tras;
} FilaDePilhas;

// Definição da estrutura Pilha de Filas
typedef struct {
  Fila filas[MAX];
  int topo;
} PilhaDeFilas;

// Definição da estrutura Fila de Filas
typedef struct {
  Fila filas[MAX];
  int frente, tras;
} FilaDeFilas;

// Funções para Fila de Pilhas
void inicializaFilaDePilhas(FilaDePilhas *f);
void enfileiraFilaDePilhas(FilaDePilhas *f, Pilha p);
Pilha desenfileiraFilaDePilhas(FilaDePilhas *f);

// Funções para Pilha de Filas
void inicializaPilhaDeFilas(PilhaDeFilas *p);
void empilhaPilhaDeFilas(PilhaDeFilas *p, Fila f);
Fila desempilhaPilhaDeFilas(PilhaDeFilas *p);

// Funções para Fila de Filas
void inicializaFilaDeFilas(FilaDeFilas *f);
void enfileiraFilaDeFilas(FilaDeFilas *f, Fila fila);
Fila desenfileiraFilaDeFilas(FilaDeFilas *f);
