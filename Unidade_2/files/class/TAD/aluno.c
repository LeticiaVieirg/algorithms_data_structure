#include "aluno.h"
#include <stdio.h>
#include <stdlib.h>

struct aluno{
    char nome[20];
    int matricula;
    float IRA;
};

Aluno *recebe_dados(){
    Aluno *estudante = (Aluno *) malloc(sizeof(Aluno));

    if (estudante == NULL){
        printf("Erro na alocacao da memória!\n");
        exit(1);
    }

    printf("Informe o nome do aluno: ");
    scanf("%[^\n]", estudante->nome); 
    
    printf("Informe a matrícula do aluno: ");
    scanf("%d", &estudante->matricula);

    printf("Informe o IRA do aluno: ");
    scanf("%f", &estudante->IRA);

    return estudante;
}

void imprime_dados(Aluno * estudante){
    printf("Dados cadastrados do Aluno\n");
    printf("Nome: %s\n", estudante->nome);
    printf("Matrícula: %d\n", estudante->matricula);
    printf("IRA: %.2f\n", estudante->IRA);
}

void libera_dados(Aluno *estudante){
    printf("Aguarde,a memória esta sendo liberada\n");
    free(estudante);
    printf("Memória liberada!\n");
}
