#include "ex01.h"

Complexo criarComplexo(double real, double imag) {
  Complexo c;
  c.real = real;
  c.imaginario = imag;
  return c;
}

double absComplexo(Complexo c) { return sqrt(c.real * c.real + c.imaginario * c.imaginario); }

Complexo somaComplexo(Complexo c1, Complexo c2) {
  Complexo resultado;
  resultado.real = c1.real + c2.real;
  resultado.imaginario = c1.imaginario + c2.imaginario;
  return resultado;
}

Complexo multiplicaComplexo(Complexo c1, Complexo c2) {
  Complexo resultado;
  resultado.real = c1.real * c2.real - c1.imaginario * c2.imaginario;
  resultado.imaginario = c1.real * c2.imaginario + c1.imaginario * c2.real;
  return resultado;
}

Complexo negaComplexo(Complexo c) {
  Complexo resultado;
  resultado.real = -c.real;
  resultado.imaginario = -c.imaginario;
  return resultado;
}