#include <stdio.h>
#include <stdlib.h>
#include "ingresso.h"

struct ingresso {
    float preco;
    char local[30];
    char atracao[30];
};

void preenche(Ingresso *i) {
    printf("Digite o preco do ingresso: \n");
    scanf("%f", &i->preco);
    printf("Digite o local: \n");
    scanf(" %[^\n]", i->local);
    printf("Digite a atracao: \n");
    scanf(" %[^\n]", i->atracao);
}

void imprime(Ingresso *i) {
    printf("Preco: %.2f \n", i->preco);
    printf("Local: %s \n", i->local);
    printf("Atracao:%s \n", i->atracao);
}

void altera_preco(Ingresso *i, float valor) {
    printf("Valor atual do ingresso: %.2f \n", i->preco);
    i->preco = valor; // i->preco recebeu o conteudo de valor
    printf("Novo valor atualizado: %.2f \n", i->preco);
    imprime(i);
}

void imprime_menor_maior_preco(int n, Ingresso *vet) {
    int ingressoBarato = 0, ingressoCaro = 0;
    int i;
    for (i = 0; i < n; i++) {
        if (vet[i].preco > vet[ingressoCaro].preco) {
            ingressoCaro = i; // ser o preco do ingresso da posicao i for maior que o atual com o ingresso mais caro, esse ingresso recebera a variavel ingressoCaro
        }
        else if (vet[i].preco < vet[ingressoBarato].preco){
            ingressoBarato = i; // mesma coisa com o ingressoBarato so que menor
        }
    }
    printf("Ingresso mais caro: \n");
    imprime(&vet[ingressoCaro]);
    printf("Ingresso mais barato: \n");
    imprime(&vet[ingressoBarato]);
}
