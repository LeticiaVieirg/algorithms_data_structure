#include <stdio.h>
#include <stdlib.h>

typedef enum tipo {
    ALIMENTO = 1,
    BEBIDA,
    ELETRONICO
} Tipo;

typedef struct produto{
    char nome[20];
    float preco;
    Tipo tipo_produto;
} Produto;

void cadastro_produto(Produto *p){
    int opcao;
    printf("***CADASTRO***\n");
    printf("Informe o nome do produto: ");
    scanf("%[^\n]", p->nome);
  
    printf("Informe o preco do produto: ");
    scanf("%f", &p->preco);
  
    printf("Informe o tipo do produto, sendo 1 - Alimento, 2 - Bebida e 3 - Eletronico: ");
    scanf("%d", &opcao);
    p->tipo_produto = opcao;
}

void imprime(Produto *p){
    printf("***DADOS CADASTRADOS***\n");
    printf("Nome: %s\n", p->nome);
    printf("Idade: %.2f\n", p->preco);
    printf("Tipo: %s\n", p->tipo_produto == ALIMENTO? "Alimento" : p->tipo_produto == BEBIDA ? "Bebida" : "Eletronico");
}

int main(void){
    Produto *produto = malloc(sizeof(Produto));
    cadastro_produto(produto);
    imprime(produto);

    free(produto);
    return 0;
}
