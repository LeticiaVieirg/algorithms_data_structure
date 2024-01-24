/*Escreva um programa que implementa uma struct Pessoa com os campos nome, idade e gênero. O
gênero deve ser armazenado como um enum com os valores MASCULINO e FEMININO. O programa
deve ler os dados de uma pessoa e imprimir os dados da pessoa.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef union genero{
    char MASC_FEMI[10];
} Genero;

typedef struct pessoa{
    char nome[20];
    int idade;
    Genero gener;
} Pessoa;

void cadastro_pessoa(Pessoa *p){
    int opcao;
    printf("=== Cadastro de Pessoas ===\n");
    printf("Informe o nome: ");
    scanf("%[^\n]", p->nome);
    printf("Informe a idade: ");
    scanf("%d", &p->idade);
    printf("Informe 1 para MASCULINO e 0 para FEMININO: ");
    scanf("%d", &opcao);
    if(opcao){
        strcpy(p->gener.MASC_FEMI, "MASCULINO");
    } else {
        strcpy(p->gener.MASC_FEMI, "FEMININO");
    }
}

int main(void){
    Pessoa *pessoa = malloc(sizeof(Pessoa));
    cadastro_pessoa(pessoa);

    printf("Dados cadastrados: \n");
    printf("Nome: %s\n", pessoa->nome);
    printf("Idade: %d\n", pessoa->idade);
    printf("Genero: %s\n", pessoa->gener.MASC_FEMI);

    return 0;
}
