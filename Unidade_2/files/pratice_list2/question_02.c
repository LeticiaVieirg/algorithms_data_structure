#include <stdio.h>
#include <stdlib.h>

typedef struct aluno {
    char name[20];
    float nota1;
    float nota2;
    float nota3;
    float media;
} Aluno;


void adicionar_aluno(){
    Aluno aluno;

    FILE *entrada = fopen("alunos.txt", "a");

    if (entrada == NULL){ 
        printf("Erro!\n");
        exit(1);
    }

    printf("Informe o nome do aluno: ");
    scanf(" %[^\n]s", aluno.name);
    
    printf("Informe a primeira nota: ");
    scanf("%f", &aluno.nota1);
    
    printf("Informe a segunda nota: ");
    scanf("%f", &aluno.nota2);
    
    printf("Informe a terceira nota: ");
    scanf("%f", &aluno.nota3);
    
    fprintf(entrada, "%s\t%.1f\t%.1f\t%.1f\n", aluno.name, aluno.nota1, aluno.nota2, aluno.nota3);
    printf("Aluno adicionado!\n");
    fclose(entrada);

}

int main(){
    int quantidade;

    printf("Informe a quantidade de alunos que deseja adicionar: ");
    scanf("%d", &quantidade);

    for (int i = 0; i < quantidade; i++){
        adicionar_aluno();
    }
    return 0;
}
