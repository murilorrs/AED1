#include "ex04.h"

int main() {

  Funcionario funcionarios[] = {{"Silva", "Joao", 3000.00}, {"Souza", "Maria", 4000.00}, {"Costa", "Ana", 3500.00}, {"Lima", "Pedro", 2800.00}};

  Estudante estudantes[] = {{"Silva", "Joao", 3.5}, {"Souza", "Maria", 2.8}, {"Costa", "Ana", 4.0}, {"Lima", "Pedro", 3.0}};

  int num_funcionarios = sizeof(funcionarios) / sizeof(Funcionario);
  int num_estudantes = sizeof(estudantes) / sizeof(Estudante);

  concederAumento(funcionarios, num_funcionarios, estudantes, num_estudantes);

  return 0;
}
