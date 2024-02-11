#include <stdio.h>
#include <stdlib.h>
#include "ingresso.c"

int main(void){
    int quantidade;
    printf("Quantos ingressos deseja cadastrar: ");
    scanf("%d", &quantidade);
    Ingresso *ingressos = malloc(n * sizeof(Ingresso));
    if(ingressos == NULL){
        printf("Erro de alocação!");
        exit(1);
    }

    for(int i = 0; i < quantidade; i++){
        preenche(&ingressos[i]);
    }

    imprima(ingressos, quantidade);
    altera_preco(quantidade, ingressos);
    menor_e_maior_valor(quantidade, ingressos);
    free(ingressos);

    return 0;
}
