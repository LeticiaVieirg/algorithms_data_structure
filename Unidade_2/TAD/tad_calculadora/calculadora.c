#include <math.h>
#include <stdio.h>
#include "calculadora.h"

// Definição da função para adição
float adicao(float n1, float n2){
    return n1 + n2;
}

// Definição da função para subtração
float subtracao(float n1, float n2){
    return n1 - n2;
}

// Definição da função para multiplicação
float multiplicacao(float n1, float n2){
    return n1 * n2;
}

// Definição da função para divisão
float divisao(float n1, float n2){
    if (n2 == 0){
        printf("Nao e possivel dividir por zero!\n");
        return 0;
    }
    else {
        return n1 / n2;
    }
}
