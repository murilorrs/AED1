#define MAX_SIZE 10

typedef struct {
  int n;
  int elementos[MAX_SIZE][MAX_SIZE];
} TMatriz;

TMatriz criaMatriz(int n);
void lerMatriz(TMatriz *matriz);
void imprimirMatriz(TMatriz *matriz);
TMatriz somaMatrizes(TMatriz *m1, TMatriz *m2);
TMatriz multiplicaMatrizes(TMatriz *m1, TMatriz *m2);
int calcularDeterminante(TMatriz *matriz);
TMatriz matrizInversa(TMatriz *matriz);
