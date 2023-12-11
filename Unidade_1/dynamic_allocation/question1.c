#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
  //declaração das variaveis
  int interviewed, female_liked, male_liked;
  
  printf("Enter the number of interviewed: ");
  scanf("%d",&interviewed);

  //alocação de memoria de um vetor e uma matriz
  char *sex =(char *)malloc(interviewed*sizeof(char));
  char *opinion =(char *)malloc(interviewed*sizeof(char));

  //verificação da memoria disponivel
  if (opinion==NULL || sex==NULL){
    printf("Erro");
    exit(1);
  }

  //preencher vetor e matriz
  for (i=0; i<interwed;i++){
    printf("\n Inform your gender F-female or M-male: " tolower(sex)); //verificar se foi digitado maiusculo ou minusculo e nao da erro
    scanf("%c", &sex[i]);

    printf("\n Let us know your opinion! \nDid you L-like or D-dislike the product?"); //verificar da mesma forma
    scanf("%c",&opinion[i]);
  }


//calculos



  
//terminar
  
}
