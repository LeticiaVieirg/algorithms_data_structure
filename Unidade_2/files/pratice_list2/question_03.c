#include <stdio.h>
#include <stdlib.h>

typedef struct fruta{
    char nome[15];
    float preco;
} Fruta;

void preencher_arquivo(){
    FILE *entrada = fopen("frutas.txt", "a");
    
    if(entrada == NULL){
        printf("Erro ao tentar abrir o arquivo.\n");
        exit(1);
    }
    Fruta fruta;

    printf("Informe o nome da fruta: ");
    scanf(" %[^\n]", fruta.nome);
  
    printf("Informe o preco da fruta: ");
    scanf("%f", &fruta.preco);

    fprintf(entrada, "%s,\t%.2f\n", fruta.nome, fruta.preco);

    fclose(entrada);
}

int main(){
    int quantidade;

    printf("Informe a quantidade de frutas que deseja adicionar: ");
    scanf("%d", &quantidade);

    if (quantidade <= 0){
        printf("Finalizando.\n");
        exit(1);
    } else{
        for (int i = 0; i < quantidade; i++){
            preenche_arquivo();
        }
        printf("Fim do cadastro de frutas!\n");
    }

    
    return 0;
}
