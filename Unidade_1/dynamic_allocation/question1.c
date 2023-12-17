#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
  //declaração das variaveis
  int interviewed, female_cont, male_cont;
  float female, male, female_perc, male_perc, female_like, male_dislike;
  
  printf("Enter the number of interviewed: ");
  scanf("%d",&interviewed);

  //alocação de memoria de um vetor e uma matriz
  char *sex =(char *)malloc(interviewed*sizeof(char));
  char *opinion =(char *)malloc(interviewed*sizeof(char));

  //verificação da memoria disponivel
  if (opinion==NULL || sex==NULL) { 
      printf("Erro"); 
      exit(1);
  }

  //preencher vetor e matriz
  int i=0;
  for(int i=0; i<interviewed;i++) {
      printf("\n Inform your gender F-female or M-male: "); //tolower(sex)); //verificar se foi digitado maiusculo ou minusculo e nao da erro
      scanf("%c", &sex[i]);

      printf("\n Let us know your opinion! \nDid you L-like or D-dislike the product?"); //verificar da mesma forma
      scanf("%c",&opinion[i]);
  }

  //verificacao de respostas
  for (i=0; i<interviewed;i++) {
      if (sex[i] == "f" || sex[i]=="F") {
          female_cont++; 

          if (opinion[i]=="l" || opinion[i]=="L") {
              female_like++;
          }
        
      } else {
          male_cont++;
          if (opinion[i]=="d" || opinion[i]="D") {
              male_dislike++;
          }
      }

  }
    
//calculos
  if (male==0) {
      male_perc = male_dislike/1*100;
  } else if (female == 0) {
      female_perc = female_like/1*100;
  } else {
      male_perc = (female_like/male)*100;
      female_perc = (female_like/female)*100;
  }

//exibir resultados
  printf("\nTotal de entrevistados masculino: %.0f \n %.2f %% nao gostaram do produto.", male, male_perc);
  printf("\n Total de entrevistados feminino: %.0f \n %.2f %% gostaram do produto.", female, female_perc);

//liberando memoria alocada.
  free(sex);
  for (i = 0; i < interviewed; i++) {
      free(opinion[i]);
  }
    
  free(opinion);
  return 0;

}
