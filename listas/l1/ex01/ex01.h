#include <stdio.h>

typedef struct {
  float real;
  float imaginario;
} Complexo;

Complexo criarComplexo(double real, double imag);
double absComplexo(Complexo c);
Complexo somaComplexo(Complexo c1, Complexo c2);
Complexo multiplicaComplexo(Complexo c1, Complexo c2);
Complexo negaComplexo(Complexo c);