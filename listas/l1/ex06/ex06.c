#include "ex06.h"

int gcd(int a, int b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

rational simplify(rational r) {
  int divisor = gcd(r.numerator, r.denominator);
  r.numerator /= divisor;
  r.denominator /= divisor;
  return r;
}

rational add(rational r1, rational r2) {
  rational result;
  result.numerator = r1.numerator * r2.denominator + r2.numerator * r1.denominator;
  result.denominator = r1.denominator * r2.denominator;
  return simplify(result);
}

rational subtract(rational r1, rational r2) {
  rational result;
  result.numerator = r1.numerator * r2.denominator - r2.numerator * r1.denominator;
  result.denominator = r1.denominator * r2.denominator;
  return simplify(result);
}

rational divide(rational r1, rational r2) {
  rational result;
  result.numerator = r1.numerator * r2.denominator;
  result.denominator = r1.denominator * r2.numerator;
  return simplify(result);
}
