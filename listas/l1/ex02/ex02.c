#include "ex02.h"
#include <stdio.h>

realtype criarReal(int left, int right) {
  realtype r;
  r.left = left;
  r.right = right;
  return r;
}

double converterParaReal(realtype r) {
  double parteFracionaria = r.right / 100.0;
  return r.left + (r.left < 0 ? -parteFracionaria : parteFracionaria);
}

realtype add(realtype r1, realtype r2) {
  double num1 = converterParaReal(r1);
  double num2 = converterParaReal(r2);
  double resultado = num1 + num2;

  realtype rResultado;
  rResultado.left = (int)resultado;
  rResultado.right = (int)((resultado - rResultado.left) * 100);
  return rResultado;
}

realtype subtract(realtype r1, realtype r2) {
  double num1 = converterParaReal(r1);
  double num2 = converterParaReal(r2);
  double resultado = num1 - num2;

  realtype rResultado;
  rResultado.left = (int)resultado;
  rResultado.right = (int)((resultado - rResultado.left) * 100);
  return rResultado;
}

realtype multiply(realtype r1, realtype r2) {
  double num1 = converterParaReal(r1);
  double num2 = converterParaReal(r2);
  double resultado = num1 * num2;

  realtype rResultado;
  rResultado.left = (int)resultado;
  rResultado.right = (int)((resultado - rResultado.left) * 100);
  return rResultado;
}