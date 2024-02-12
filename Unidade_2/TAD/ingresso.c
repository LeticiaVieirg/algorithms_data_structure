#include <stdio.h>
#include <stdlib.h>
#include "ingresso.h"

struct ingresso {
    float preco;
    char local[30];
    char atracao[30];
};

void preenche(Ingresso *ingressos) {
    printf("Digite o preco do ingresso: \n");
    scanf("%f", &ingressos->preco);
    printf("Digite o local: \n");
    scanf(" %[^\n]", ingressos->local);
    printf("Digite a atracao: \n");
    scanf(" %[^\n]", ingressos->atracao);
}

void imprime(Ingresso *ingressos) {
    printf("Preco: %.2f \n", iingressos->preco);
    printf("Local: %s \n", ingressos->local);
    printf("Atracao:%s \n", ingressos->atracao);
}

void altera_preco(Ingresso *ingressos, float valor) {
    printf("Valor atual do ingresso: %.2f \n", ingressos->preco);
    ingressos->preco = valor; // i->preco recebeu o conteudo de valor
    printf("Novo valor atualizado: %.2f \n", ingressos->preco);
    imprime(ingressos);
}

void maior_e_menor_valor(int q, Ingresso *id) {
    int i;
    int menorPreco = 0;
    int maiorPreco = 0;
    
    for (i = 0; i < q; i++) {
        if (id[i].preco > id[maiorPreco].preco) {
            maiorPreco = i;
        }
        else if (id[i].preco < id[menorPreco].preco){
            menorPreco = i; 
        }
    }
    printf("Ingresso mais caro: \n");
    imprime(&id[maiorPreco]);
    printf("Ingresso mais barato: \n");
    imprime(&id[menorPreco]);
}
