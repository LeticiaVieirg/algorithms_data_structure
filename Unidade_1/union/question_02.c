/*Escreva um programa que implementa uma struct Produto com os campos nome, preço e tipo. O
tipo deve ser armazenado como uma union que armazena um dos tipos: ALIMENTO, BEBIDA ou
ELETRONICO. O programa deve ler os dados de um produto e imprimir os dados do produto.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef union tipo{
    char Tipo[10];
} Tipo;

typedef struct produto{
    char nome[20];
    float preco;
    Tipo tipe;
} Produto;

void cadastro_pessoa(Produto *p){
    int opcao;
    printf("=== Cadastro de Produto ===\n");
    printf("Informe o nome: ");
    scanf("%[^\n]", p->nome);
    printf("Informe o preço: ");
    scanf("%f", &p->preco);
    printf("Informe o tipo 1 Alimento, 2 Bebida, 3 Eletronico: ");
    scanf("%d", &opcao);
    switch (opcao){
    case 1:
        strcpy(p->tipe.Tipo, "ALIMENTO");
        break;
    case 2: 
        strcpy(p->tipe.Tipo, "BEBIDA");
        break;
    default:
         strcpy(p->tipe.Tipo, "ELETRONICO");
        break;
    }
}

int main(void){
    Produto *produto = malloc(sizeof(Produto));
    cadastro_pessoa(produto);

    printf("Dados cadastrados: \n");
    printf("Nome: %s\n", produto->nome);
    printf("Idade: %f\n", produto->preco);
    printf("Genero: %s\n", produto->tipe.Tipo);

    return 0;
}
