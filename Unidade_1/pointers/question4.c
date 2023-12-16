#include <stdio.h>
#include <math.h>

void calcula_hexagono(float l, float *area, float *perimetro){
    (*area)=(3*pow(l, 2)*sqrt(3))/2;
    (*perimetro)=6*l;
}

int main(void){
    float l, area, perimetro; // declara variaveis
    float *a = &area;// declara ponteiro
    float *p = &perimetro;//declara  ponteiro
  
    printf("Qual o lado do seu hexagono? ");
    scanf("%f", &l);
  
    calcula_hexagono(l, a, p);
    printf("\nLado: %.2f \nPerimetro: %.2f \nArea: %.2f",l,perimetro,area);
    return 0;
}
