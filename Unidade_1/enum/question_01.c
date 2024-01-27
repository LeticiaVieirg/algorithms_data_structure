#include <stdio.h>
#include <stdlib.h>

typedef enum genero{
    masculino,
    feminino
} Genero;

typedef struct pessoa{
    char nome[20];
    int idade;
    Genero genero_pessoa;
} Pessoa;

void cadastro_pessoa(Pessoa *p){
    printf("***CADASTRO***\n");
    printf("Informe o nome: ");
    scanf("%[^\n]", p->nome);
  
    printf("Informe a idade: ");
    scanf("%d", &p->idade);
  
    printf("Informe 0 para Masculino e 1 para Feminino: ");
    scanf("%d", &p->genero_pessoa);
}

void imprime(Pessoa *p){
    printf("***DADOS CADASTRADOS*** \n");
    printf("Nome: %s\n", p->nome);
    printf("Idade: %d\n", p->idade);
    printf("Genero: %s\n", p->genero_pessoa == Masculino ? "Masculino" : "Feminino");
}

int main(void){
    Pessoa *pessoa = malloc(sizeof(Pessoa));
    cadastro_pessoa(pessoa);
    imprime(pessoa);

    free(pessoa);
    return 0;
}
