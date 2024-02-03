#include <stdio.h>  //Biblioteca padrao de entrada e saida
#include <stdlib.h> // exit()

int main(void){
    
    char linha[100]; //Vetor para armazenar a linha de entrada do arquivo
    int v[10]; //Vetor para armazenar os valores lidos do arquivo
    FILE *arquivo1, *arquivo2; //Variaveis para armazenaar o ponteiro do arquivo
    int n=0; //Contador para acessar os dados do vetor v
    float media =0; //Variavel para armazenar a media dos valores do vetor v

    //Abrindo o arquivo de entrada para leitura
    arquivo1 = fopen("entrada_pratica01.txt", "rt");
    if (arquivo == NULL) {
        printf("Arquivo nao encontrado!\n");
        exit(1);
    }

    //Cria o arquivo de saida para escrita
    arquivo2 = fopen("saida_pratica01.txt", "wt");
    if (arquivo2 == NULL) {
        printf("Erro! \n");
        exit(1);
    }

    //Leitura dos dados do arquivo de entrada
    while (fgets(linha,100,arquivo1) != NULL){
        sscanf(linha, "%d ", &v[n]);
        media+=v[n];
        n++;
    }

    int menor = v[0]; 
    int maior = v[0];  

    // Laço de repetição for para encontrar o maior e menor elemento do vetor v 
    for(n=0; n<10; n++){
            if(v[n] < menor)
                menor =  v[n];
            if(v[n] > maior)
                maior =  v[n];
        }
    
    // Escrever no arquivo de saida
    fprintf(arquivo2, "  menor elemento: %d\n maior elemento: %d \n media dos elementos %f ", menor, maior, media/10);
    fclose(arquivo);
    return 0;
}
