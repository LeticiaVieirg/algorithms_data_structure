#include <stdio.h>
#include <stdlib.h>

int main(){
  int linhas=2,colunas=2;

  //tipo(local que vai alocar)=(tipo do vetor)malloc(variavel*sizeof(forçar a ser do tipo desejado))
  int(**matriz)=(int**)malloc(linhas*sizeof(int*));

  //indice  para alocar na memoria enquanto a condiçao for verdadeira
  //local que vai alocar[indice]=(tipo*)malloc(variavel*sizeof(tipo forcado))
  for(i=0;i<linhas;i++){
    matriz[i]=(int*)malloc(colunas*sizeof(int));
  }

  //leberação  da memoria alocada
  for(i=0; i<linhas;i++){
    free=matriz[i];
  }

  free(matriz);
  return 0;
}
