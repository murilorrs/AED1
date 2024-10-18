#include "ex08.h"

// Função para verificar se dois números racionais são iguais usando o produto cruzado
int equal2(rational r1, rational r2) { return (r1.numerator * r2.denominator == r2.numerator * r1.denominator); }