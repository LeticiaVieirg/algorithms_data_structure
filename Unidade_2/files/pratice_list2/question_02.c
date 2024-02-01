#include <stdio.h>
#include <stdlib.h>

typedef struct aluno{
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
} Aluno;

int main() {
    
    FILE *arquivo;
    char arquivoNotas[50];
    int n;
  
    printf("Digite o nome do arquivo: ");
    scanf(" %[^\n]", arquivoNotas);
   
    arquivo = fopen(arquivoNotas, "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!");
        exit(1);
    }

    printf("Digite o numero de alunos: ");
    scanf("%d", &n);
    Aluno *aluno = (Aluno*) malloc(n*sizeof(Aluno));
    
    int i; 
    for (i = 0; i < n; i++) {
        printf("Digite o nome do aluno: ");
        scanf("%s", aluno[i].nome);
      
        printf("Digite a nota 1 do aluno: ");
        scanf("%f", &aluno[i].nota1);
      
        printf("Digite a nota 2 do aluno: ");
        scanf("%f", &aluno[i].nota2);
      
        printf("Digite a nota 3 do aluno: ");
        scanf("%f", &aluno[i].nota3);

        fprintf(arquivo, "%s\t%f\t%f\t%f\n", aluno[i].nome, aluno[i].nota1, aluno[i].nota2, aluno[i].nota3);
    }

    fclose(arquivo);
    free(aluno);
    return 0;

}
