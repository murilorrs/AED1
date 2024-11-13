#ifndef FILA_PROCESSOS_H
#define FILA_PROCESSOS_H

#define MAX 100 // Tamanho máximo da fila

// Estrutura de processo
typedef struct {
  int id;    // Identificador do processo
  int tempo; // Tempo de espera (em segundos)
} Processo;

// Estrutura da fila de processos
typedef struct {
  Processo queue[MAX]; // Fila de processos
  int frente, tras;    // Índices para o início e fim da fila
} FilaProcessos;

// Funções da fila de processos
void inicializaFila(FilaProcessos *f);
int incluiProcesso(FilaProcessos *f, Processo p);
Processo retiraProcesso(FilaProcessos *f);
int filaVazia(FilaProcessos *f);
void imprimeFila(FilaProcessos *f);

#endif // FILA_PROCESSOS_H
