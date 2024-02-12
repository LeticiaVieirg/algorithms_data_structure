#include <stdlib.h>
#include <string.h>
#include "aluno.h"
#include "disciplina.h"

struct aluno {
  char nome[100];
  int matricula;
  Disciplina *disciplinas[10];
  int num_disciplinas;
};

Aluno *cria_aluno(char nome[], int matricula) {
  Aluno *aluno = (Aluno *)malloc(sizeof(Aluno));
   
  if (aluno == NULL) {
    printf("Erro na alocacao de memoria do aluno.");
    }
  
  strcpy(aluno->nome, nome);
  aluno->matricula = matricula;
  return aluno;
}

void matricula_disciplina(Aluno *aluno, Disciplina *disciplina) {
  if (aluno == NULL || disciplina == NULL) {
    printf("Aluno ou disciplina nao existem.\n");
    return;
  }
   
  int i;  
  int n_disciplinas = 0;
  printf("Insira quantas disciplinas o aluno vai se matricular:\n");
  scanf("%d", &n_disciplinas);
  
  for (i = 0; i < n_disciplinas; i++) {
    printf("Insira a disciplina %d", i + 1);
    aluno->disciplinas[i] = disciplina;
  }
  
  aluno->num_disciplinas = n_disciplinas;
}

void imprime_alunos(Aluno *aluno) {
  if (aluno == NULL){
    printf("Aluno nao existe.\n");
    return;
  }
  
  int i;
  printf("Nome do aluno: %s\n", aluno->nome);
  printf("Numero de matricula: %d\n", aluno->matricula);
  printf("Numero de disciplinas em que o aluno esta: %d\n", aluno->num_disciplinas);

  for (i = 0; i < aluno->num_disciplinas; i++) {
    printf("Nome da disciplina: %d", i + 1);
    void imprime_disciplina
  }
}

void exclui_aluno(Aluno *aluno){
    free(aluno);
}
