//Converte valores em  graus celsius para fahrenheit

#include <stdio.h>

#include <stdio.h>

int main() {
  //espaço para armazenar temperatura em celsius e fahrenheit
  float celsius,fahrenheit;

  //capturar valor informado pelo usuario
  printf("enter a value of celsius:");
  scanf("%f",&celsius);

  //realizar conversao
  fahrenheit=(1.8*celsius)+32;
  printf(" Temperatura em Fahrenheit: %f \n",fahrenheit);

return 0;
}
