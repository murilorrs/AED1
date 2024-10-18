typedef struct {
  int left;
  int right;
} realtype;

realtype criarReal(int left, int right);

double converterParaReal(realtype r);

realtype add(realtype r1, realtype r2);

realtype subtract(realtype r1, realtype r2);

realtype multiply(realtype r1, realtype r2);