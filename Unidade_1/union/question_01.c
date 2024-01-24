#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef union genero{
    char MASCULINO_FEMININO[10];
} Genero;

typedef struct pessoa{
    char nome[20];
    int idade;
    Genero genero_pessoa;
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
        strcpy(p->genero_pessoa.MASCULINO_FEMININO, "MASCULINO");
    } else {
        strcpy(p->genero_pessoa.MASCULINO_FEMININO, "FEMININO");
    }
}

int main(void){
    Pessoa *p = malloc(sizeof(Pessoa));
    cadastro_pessoa(p);

    printf("===Dados cadastrados=== \n");
    printf("Nome: %s\n", p->nome);
    printf("Idade: %d\n", p->idade);
    printf("Genero: %s\n", p->genero_pessoa.MASCULINO_FEMININO);

    return 0;
}
