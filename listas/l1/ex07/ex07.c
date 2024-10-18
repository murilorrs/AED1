#include "ex07.h"

int gcd(int a, int b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

// Função para simplificar um número racional
rational simplify(rational r) {
  int divisor = gcd(r.numerator, r.denominator);
  r.numerator /= divisor;
  r.denominator /= divisor;

  // Garantir que o denominador seja sempre positivo
  if (r.denominator < 0) {
    r.numerator = -r.numerator;
    r.denominator = -r.denominator;
  }
  return r;
}

// Função para verificar se dois números racionais são iguais
int equal(rational r1, rational r2) {
  r1 = simplify(r1);
  r2 = simplify(r2);

  return (r1.numerator == r2.numerator && r1.denominator == r2.denominator);
}