#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pessoa{
    char nome[50];
    int numDocumento;
    int idade;
} Pessoa;

void preenche(Pessoa *pessoa){
    printf("Informe o nome da pessoa: ");
    scanf(" %s", pessoa->nome);

    printf("Informe o numero do documento: ");
    scanf("%d", &pessoa->numDocumento);

    printf("Informe a idade da pessoa: ");
    scanf("%d", &pessoa->idade);
}

void imprime(Pessoa * pessoa){
    printf("===Dados da Pessoa===");
    printf("Nome: %s\n", pessoa->nome);
    printf("Numero do documento: %d\n", pessoa->numDocumento);
    printf("Idade: %d\n", pessoa->idade);
} 

void alteraIdade(Pessoa * pessoa, int novaIdade){
    pessoa->idade = novaIdade;
}

void comparaIdade(Pessoa *pessoa, int quantidade) {
    int i;
    int maiorIdade=0;
    int menorIdade=110;
    int iMaior,iMenor;

    for (i = 1; i < q; i++) {
        if (pessoa[i].idade > maiorIdade) {
           maiorIdade= f[i].idade;
           iMaior=i;
        }
        if (pessoa[i].idade< menorIdade) {
            menorIdade= p[i].idade;
            iMenor=i;
        }
    }
	printf("A pessoa com a maior idade (mais velha) eh %s tem %d anos. \n", pessoa[iMaior].nome, maiorIdade );
    	printf("A pessoa com a menor idade (mais nova) eh %s tem %d anos. \n", pessoa[iMenor].nome, menorIdade );
}
