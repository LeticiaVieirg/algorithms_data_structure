#include <stdio.h>

int main(void) {
  int x, *p;
  x = 100;
  p = x;
  printf(“Valor de p = %p\t Valor de *p = %d”, p, *p);
}
//para que o codigo acima fique correto, basta colocar o & ao lado do x
//p=&x
