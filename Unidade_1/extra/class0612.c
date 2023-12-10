//Alocaçao dinamica de vetores

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, cont, vetor_final;

    printf("Informe o tamanho do vetor:\n");
    scanf("%d", &n);

    int * vetor = (int*) malloc(n*sizeof(int));

    if(vetor == NULL){
        printf("Erro na alocação da memória!");
        exit(1);
    }

    printf("Informe os valores do vetor: \n");
    for(cont = 0; cont < n; cont++){
        scanf("%d", &vetor[cont]);
    }

    for(cont = 0; cont < n/2; cont++){
        vetor_final = vetor[cont];
        vetor[cont] = vetor[n - cont - 1];
        vetor[n - cont - 1] = vetor_final;
    }

    printf("Vetor invertido: \n");
    for(cont = 0; cont<n; cont++){
        printf("%d ", vetor[cont]);
    }

    free(vetor);

    return 0;
}
