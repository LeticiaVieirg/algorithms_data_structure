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
