#include <stdio.h>

int main(){
  int height=5,new_height;

  //alocar
  //tipo(*vetor)=(tipo_do_vetor*)malloc(tamanho*sizeof(tipo))
  int (*vector)=(int*)malloc(height*sizeof(int));

  printf("\ enter the value of vector:  ");
  scanf("%d", new_height);

  //realocar
  vector=(int*)realloc(vector,new_height*sizeof(int));

  //verificaçao do espaço na memoria
  if(vetor==NULL)
    printf("erro");
    exit(1);

  //liberar
  free(vector);

  return 0;
  
}
