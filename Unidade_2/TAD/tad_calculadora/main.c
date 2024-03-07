#include <stdio.h>
#include "calculadora.h"

// Protótipo da função para adição
float adicao(float, float);

// Protótipo da função para subtração
float subtracao(float, float);

// Protótipo da função para multiplicação
float multiplicacao(float, float);

// Protótipo da função para divisão
float divisao(float, float);

// Protótipo da função para potenciação
float potenciacao(float, float);

// Protótipo da função para exibir o menu
void exibirMenu();

// Array de ponteiros para função
float (*operacoes[5])(float, float) = {adicao, subtracao, multiplicacao, divisao, potenciacao};

void menu() {
    int opcao = 0;
    float primeiro_numero, segundo_numero;

    while (opcao != 6) {
        exibirMenu();
        printf("Digite o primeiro numero: ");
        scanf("%f", &primeiro_numero);
        printf("Digite o segundo numero: ");
        scanf("%f", &segundo_numero);

        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 5) {
            printf("Resultado: %.2f\n", operacoes[opcao - 1](primeiro_numero, segundo_numero));
        } else if (opcao == 6) {
            printf("Saindo...\n");
        } else {
            printf("Opcao invalida!\n");
        }
    }
}

void exibirMenu() {
    printf("=====================================\n");
    printf("\t\tCalculadora\n");
    printf("=====================================\n");
    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("5 - Potenciacao\n");
    printf("6 - Sair\n");
    printf("=====================================\n");
}

float adicao(float a, float b) {
    return a + b;
}

float subtracao(float a, float b) {
    return a - b;
}

float multiplicacao(float a, float b) {
    return a * b;
}

float divisao(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Erro: Divisao por zero!\n");
        return 0;
    }
}

float potenciacao(float a, float b) {
    float result = 1;
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}

int main() {
    menu();
    return 0;
}
