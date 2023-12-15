//importar bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    //declaracao das variaveis
    int n, cont, vetor_final;

    printf("Informe o tamanho do vetor:\n");
    scanf("%d", &n);

    //alocar
    //tipo vetor de ponteiro recebe tipo  do ponteiro malloc o tamanho*sizeof forcado tipo inteiro
    int * vetor = (int*) malloc(n*sizeof(int));

    //verifica espaço da memoria
    if(vetor == NULL){
        printf("Erro na alocação da memória!");
        exit(1);
    }

    //contador
    printf("Informe os valores do vetor: \n");
    for(cont = 0; cont < n; cont++){
        scanf("%d", &vetor[cont]);
    }

    //atribuição dos tipos de vetores
    for(cont = 0; cont < n/2; cont++){
        vetor_final = vetor[cont];
        vetor[cont] = vetor[n - cont - 1];
        vetor[n - cont - 1] = vetor_final;
    }

    //inverter os vetores de posicao
    printf("Vetor invertido: \n");
    for(cont = 0; cont<n; cont++){
        printf("%d ", vetor[cont]);
    }

    //liberar espaço da memoria
    free(vetor);

    return 0;
}
