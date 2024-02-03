#include <stdio.h>  // Biblioteca que define as funções de entrada e saída fopen, fclose, fprintf, fscanf, etc. 
#include <stdlib.h> // exit()
#include <string.h> // Biblioteca que define funções para manipulação de strings

int main(void){

    //Declaracao das variaveis
    char linha[100], nome[100];
    float media=0, notas[3];
    
    //Abrir o arquivo de entrada apenas para leitura (r)
    FILE *arquivo_entrada=fopen("entrada_q1.txt", "r");
    if(arquivo_entrada == NULL){
        printf("Erro ao abrir o arquivo");
        exit(1);
    }

    //Abrir/criar o arquivo de saida para escrita (w)
    FILE *arquivo_saida= fopen("saida_q1.txt", "w");
    if(arquivo_saida == NULL){
        printf("Erro ao abrir o arquivo");
        exit(1);
    }

    //Ler os dados do arquivo de entrada
    while (fgets(linha, 100, arquivo_entrada)!=NULL) {
        sscanf(linha, "%20[^\t]\t%f\t%f\t%f", nome, &notas[0], &notas[1], &notas[2]);
        media=(notas[0]+notas[1]+notas[2])/3;
        
        //Escreve no arquivo de saida os dados de nome, media e aprovado/reprovado
        fprintf(arquivo_saida, "%s\t%.1f\t %s\n", nome, media, (media>=7.0)?"aprovado":"reprovado");
    }

    //Fecha os arquivos abertos
    fclose(entrada);
    fclose(saida);

    //Retorna 0 para o sistema operacional
    return 0;
}
