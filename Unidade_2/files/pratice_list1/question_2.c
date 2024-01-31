#include <stdio.h> 
#include <stdlib.h> 

int main(void){
    char linha[100]; 
    int v[10]; 
    FILE *arquivo1, *arquivo2; 
    int n=0; 
    float media =0; 
    
    arquivo1 = fopen("entrada_pratica01.txt", "rt");
    if (arquivo == NULL) {
        printf("Arquivo nao encontrado!\n");
        exit(1);
    }

  arquivo2 = fopen("saida_pratica01.txt", "wt");
    if (arquivo2 == NULL) {
        printf("Erro! \n");
        exit(1);
    }

    while (fgets(linha,100,arquivo1) != NULL){
        sscanf(linha, "%d ", &v[n]);
        media+=v[n];
        n++;
    }

    int menor = v[0]; 
    int maior = v[0];  

    for(n=0; n<10; n++){
            if(v[n] < menor)
                menor =  v[n];
            if(v[n] > maior)
                maior =  v[n];
        }
    fprintf(arquivo2, "  menor elemento: %d\n maior elemento: %d \n media dos elementos %f ", menor, maior, media/10);
    fclose(arquivo);
    return 0;
}
