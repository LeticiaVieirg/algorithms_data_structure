//Converte valores em  graus celsius para fahrenheit

#include <stdio.h>

#include <stdio.h>

int main() {
  float celsius,fahrenheit;

  printf("enter a value of celsius:");
  scanf("%f",&celsius);

  fahrenheit=(1.8*celsius)+32;
  printf("the value of fahrenheit is: " "%f.2", fahrenheit);

return 0;
}
