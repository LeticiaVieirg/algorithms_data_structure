#include <stdio.h>
#include "calculadora.h"

void coleta_numeros(){
    float numero1, numero2;
  
    printf("Calculadora\n");
    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);
}

void operacao(){
int escolha;

while (1) {
        printf("\nEscolha uma opcao:\n");
        printf("1. Adicao\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Potenciacao\n");
        printf("6. Sair\n");
        scanf("%d", &escolha);

        if (escolha == 1) {
            printf("Resultado: %.2f\n", adicao(primeiro_numero, segundo_numero));
        } else if (escolha == 2) {
            printf("Resultado: %.2f\n", subtracao(primeiro_numero, segundo_numero));
        } else if (escolha == 3) {
            printf("Resultado: %.2f\n", multiplicacao(primeiro_numero, segundo_numero));
        } else if (escolha == 4) {
            printf("Resultado: %.2f\n", divisao(primeiro_numero, segundo_numero));
        } else if (escolha == 5) {
            printf("Resultado: %.2f\n", potenciacao(primeiro_numero, segundo_numero));
        } else if (escolha == 6) {
            printf("Saindo...\n");
            break; // Sai do loop
        } else {
            printf("Opcao invalida!\n");
        }
    }

int main(){
  coleta_numeros();
  operacoes();
  return 0;
}
