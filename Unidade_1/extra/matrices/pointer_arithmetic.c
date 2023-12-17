//Alocacao unica com aritmetica de ponteiros
//Elementos da matriz são alocados em um único vetor, linearmente(em uma linha). 
//Os elementos da matrizsão acessados explicitamente através de aritmética de ponteiros.

#include <stdio.h>

#define LIN 4
#define COL 3

int i,j,*mat

//alocar um vetor com todos os elementos da matriz
mat=malloc(LIN*COL*sizeof(int));

//percorrer a matriz
for(i=0;i<LIN;i++){
  for(j=0;j<COL;j++){
    mat[i*COL)+j]=0;
  }
}

//liberar memoria
free(mat);
