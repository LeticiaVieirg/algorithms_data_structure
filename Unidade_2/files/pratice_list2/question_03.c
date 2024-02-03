#include <stdio.h>
#include <stdlib.h>

typedef struct aluno {
  char nome[50];
  float nota1;
  float nota2;
  float nota3;
} Aluno;

void preenche_notas (struct Aluno *estudante, int quantidade){
  int i;
  for (i=0, i<quantidade; i++){
    printf("===Informe os seguintes dados===");
    printf("Nome do aluno: ");
    scanf("%[^\n]s", estudante[i].nome);

    printf("Primeira nota: ");
    scanf("%f", &estudante[i].nota1);
    
    printf("Segunda nota: ");
    scanf("%f", &estudante[i].nota2);
      
    printf("Primeira nota: ");
    scanf("%f", &estudante[i].nota3);

    fprintf(arquivo, "%s\t%f\t%f\t%f\n", aluno[i].nome, aluno[i].nota1, aluno[i].nota2, aluno[i].nota3);

  }
}

int main (){

  FILE *arquivo;
  char nome_arquivo[50];
  int n;

  printf("Informe o nome do arquivo: ");
  scanf("%[^\n]", nome_arquivo);

  arquivo=fopen(nome_arquivo, "a");
  if (arquivo==NULL){
    printf("Erro ao abrir o arquivo!");
    exit(1);
  }

  printf("Digite o numero de alunos: ");
  scanf("%d", &n);
  Aluno *aluno = (Aluno*) malloc(n*sizeof(Aluno));
    
  preeche_notas();
  fclose(arquivo);
  free(arquivo);

  return 0;
}
