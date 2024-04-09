#define N 50//numero maximo de elementos da pilha
#include "pilha.h"
#include <stdlib.h>
#include <stdio.h>

struct pilha{
    int n;//quantidade de elementos
    float vet[N];//o vetor vai armazenar os dados da pilha
};

Pilha *pilha_cria(void){
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));
    if (p == NULL) {
        printf("Erro na alocacao de memoria");
        exit(1);
    }
    p->n = 0;
    return p;
}

void pilha_push(Pilha *p, float v){
    if (p->n == N) {
        printf("Numero maximo da pilha alcancado");
        exit(1);
    }

    p->vet[p->n] = v;
    p->n++;
}

int pilha_vazia(Pilha *p){
    return(p->n == 0);
}

float pilha_pop(Pilha *p){
    float v;
    if (pilha_vazia(p)) {
        printf("Pilha vazia\n");
        exit(1);
    }

    v = p->vet[p->n-1];
    p->n--;
    return v;
}

void pilha_libera(Pilha *p){
    free(p);
}

void pilha_imprime(Pilha *p){
    for (int i = p->n-1; i >= 0; i--) {
        printf("%.2f ", p->vet[i]);
    }
    printf("\n");
}
