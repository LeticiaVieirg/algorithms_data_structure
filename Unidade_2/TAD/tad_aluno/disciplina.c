#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "disciplina.h"

struct disciplina {
  char nome[100];
  int codigo;
};

Disciplina *cria_disciplina(char nome[], int codigo) {
  Disciplina *materia = (Disciplina *)malloc(sizeof(Disciplina));
  if (materia == NULL)  {
    printf("Erro na alocacao de memoria da disciplina.");
    exit(1);
  }
  
  strcpy(materia->nome, nome);
  materia->codigo = codigo;
  return materia; 
}

void imprime_disciplina(Disciplina *disciplina) {
  printf("Nome da disciplina: %s\n", disciplina->nome);
  printf("Codigo disciplina: %d\n", disciplina->codigo);
}

void exclui_disciplina(Disciplina *disciplina){
  if (disciplina != NULL){
    free(disciplina);
  }
}
