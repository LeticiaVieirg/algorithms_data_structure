#include <stdio.h>

int main(void)
{
    int a, b, c, d; //declara variaveis
    int *p1; // declara um ponteiro
    int *p2 = &a; //declara o ponteiro p2 e aponta pra "a"
    int *p3 = &c; //declara o ponteiro p3 e aponta ele pra "c"
    p1 = p2; // aponta p1 para o mesmo que p2, no caso "a"
    *p2 = 10; // atualiza o valor de "a" para 10
    b = 20; // "b" recebe 20
    int **pp; // declara um ponteiro de ponteiro
    pp = &p1; // o ponteiro de ponteiro esta apontando pra p1 que esta apontando pra "a"
    *p3 = **pp; // "c" recebe o valor de "a", que é 10
    int *p4 = &d; // declara o ponteiro p4 que aponta ele pra "d"
    *p4 = b + (*p1)++; // "d" recebe "b" + "a", e depois o valor de a é atualizado, com a=a+1
    
    //saida: a=11, b=20, c=10, d=30
    printf("%d\t%d\t%d\t%d\n", a, b, c, d);
    return 0;
}
