#include "ex04.h"

void concederAumento(Funcionario funcionarios[], int num_funcionarios, Estudante estudantes[], int num_estudantes) {

  for (int i = 0; i < num_funcionarios; i++) {

    for (int j = 0; j < num_estudantes; j++) {
      // Compara sobrenome e primeiro nome entre funcionário e estudante
      if (strcmp(funcionarios[i].sobrenome, estudantes[j].sobrenome) == 0 && strcmp(funcionarios[i].primeiro_nome, estudantes[j].primeiro_nome) == 0) {

        // Verifica se o índice de graduação é maior que 3.0
        if (estudantes[j].indice_graduacao > 3.0) {
          // Concede o aumento de 10% no salário
          funcionarios[i].salario *= 1.10;
          printf("Aumento concedido ao funcionário %s %s. Novo salário: %.2f\n", funcionarios[i].primeiro_nome, funcionarios[i].sobrenome, funcionarios[i].salario);
        }
      }
    }
  }
}
