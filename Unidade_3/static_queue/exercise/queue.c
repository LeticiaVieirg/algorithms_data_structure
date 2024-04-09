#include <stdio.h>
#include<stdlib.h>
#include "fila.h"

struct fila {
    int ini;
    int fim;
    int qtd;
    int MAX_SIZE;
    int *val;
};

Fila *CriaFila(int MAX_SIZE){
    Fila *Q = (Fila*) calloc(1,sizeof(Fila));
    Q->val = (int*) calloc(MAX_SIZE,sizeof(int));
    Q->MAX_SIZE = MAX_SIZE;
    Q->qtd = 0;
    Q->ini = Q->fim = 0;
    return Q;
}

void DestruirFila(Fila **Q){
    Fila *Qaux = *Q;
    free(Qaux->val);
    free(Qaux);
    *Q = NULL;
}

int FilaVazia(Fila *Q){
    return (Q->qtd == 0);
}

int FilaCheia(Fila *Q){
    return(Q->qtd == Q->MAX_SIZE);
}

int InsereFila(Fila *Q, int elem){
    if(FilaCheia(Q)){
        printf("Fila cheia");
        return 0;
    }else{
        Q->val[Q->fim] = elem;
        Q->fim = (Q->fim+1)%Q->MAX_SIZE;
        Q->qtd++;
        return 1;
    }
}

int RemoveFila(Fila *Q){
    if (FilaVazia(Q)) {
        printf("Fila vazia");
        return 0;
    }else{
        Q->ini = (Q->ini+1) % Q->MAX_SIZE;
        Q->qtd--;
        return 1;
    }
    
}

int ConsultarFila(Fila *Q, int *elem){
    if(FilaVazia(Q)){
        printf("Fila vazia");
        return 0;
    }else{
        *elem = Q->val[Q->ini];
        return 1;
    }
}
