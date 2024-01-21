#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pessoa{
    char nome[50];
    int numDocumento;
    int idade;
} Pessoa;

void preenche(Pessoa *pessoa){
    printf("Informe o nome da pessoa: ");
    scanf(" %s", pessoa->nome);

    printf("Informe o numero do documento: ");
    scanf("%d", &pessoa->numDocumento);

    printf("Informe a idade da pessoa: ");
    scanf("%d", &pessoa->idade);
}

void imprime(Pessoa * pessoa){
    printf("===Dados da Pessoa===");
    printf("Nome: %s\n", pessoa->nome);
    printf("Numero do documento: %d\n", pessoa->numDocumento);
    printf("Idade: %d\n", pessoa->idade);
} 
