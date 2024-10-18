#include <stdio.h>
#include <string.h>

typedef struct {
  char sobrenome[50];
  char primeiro_nome[50];
  float indice_graduacao;
} Estudante;

typedef struct {
  char sobrenome[50];
  char primeiro_nome[50];
  float salario;
} Funcionario;

void concederAumento(Funcionario funcionarios[], int num_funcionarios, Estudante estudantes[], int num_estudantes);