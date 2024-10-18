typedef struct {
  int numerator;
  int denominator;
} rational;

// Funções para operações básicas
rational add(rational r1, rational r2);
rational subtract(rational r1, rational r2);
rational divide(rational r1, rational r2);

rational simplify(rational r);

int gcd(int a, int b);

int equal(rational r1, rational r2);