typedef struct {
  int ficha;
  char nome[50];
  int classe;
  int horas;
  int horasExtra;
} Ficha;

void relatorio(Ficha *f, int n);