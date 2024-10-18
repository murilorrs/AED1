#include "ex05.h"

void concederAumentoArquivo(const char *arquivoFuncionarios, const char *arquivoEstudantes) {
  FILE *funcFile = fopen(arquivoFuncionarios, "r+");
  FILE *estFile = fopen(arquivoEstudantes, "r");

  if (funcFile == NULL || estFile == NULL) {
    fprintf(stderr, "Erro ao abrir os arquivos.\n");
    return;
  }

  Funcionario funcionario;
  Estudante estudante;

  while (fscanf(funcFile, "%s %s %f", funcionario.sobrenome, funcionario.primeiro_nome, &funcionario.salario) != EOF) {

    rewind(estFile);

    while (fscanf(estFile, "%s %s %f", estudante.sobrenome, estudante.primeiro_nome, &estudante.indice_graduacao) != EOF) {

      if (strcmp(funcionario.sobrenome, estudante.sobrenome) == 0 && strcmp(funcionario.primeiro_nome, estudante.primeiro_nome) == 0) {

        if (estudante.indice_graduacao > 3.0) {

          funcionario.salario *= 1.10;

          long pos = ftell(funcFile);
          fseek(funcFile, pos - sizeof(Funcionario), SEEK_SET);

          fprintf(funcFile, "%s %s %.2f\n", funcionario.sobrenome, funcionario.primeiro_nome, funcionario.salario);

          printf("Aumento concedido ao funcionário %s %s. Novo salário: %.2f\n", funcionario.primeiro_nome, funcionario.sobrenome, funcionario.salario);
        }
      }
    }
  }

  // Fecha os arquivos
  fclose(funcFile);
  fclose(estFile);
}
