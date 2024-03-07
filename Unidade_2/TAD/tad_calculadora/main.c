#include <stdio.h>
#include "calculadora.h"

// Array de ponteiros para função
float (*operacoes[5])(float, float) = {adicao, subtracao, multiplicacao, divisao, potenciacao};

void menu() {
    int opcao = 0;
    float n1, n2;

    while (opcao != 6) {
        exibirMenu();
        printf("Digite o primeiro numero: ");
        scanf("%f", &n1);
        printf("Digite o segundo numero: ");
        scanf("%f", &n2);

        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 5) {
            printf("Resultado: %.2f\n", operacoes[opcao - 1](n1, n2));
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

float adicao(float n1, float n2) {
    return n1 + n2;
}

float subtracao(float n1, float n2) {
    return n1 - n2;
}

float multiplicacao(float n1, float n2) {
    return n1 * n2;
}

float divisao(float n1, float n2) {
    if (n2 != 0) {
        return n1 / n2;
    } else {
        printf("Erro: Divisao por zero!\n");
        return 0;
    }
}

float potenciacao(float base, float expoente) {
    float result = 1;
    for (int i = 0; i < expoente; i++) {
        result *= base;
    }
    return result;
}

int main() {
    menu();
    return 0;
}
