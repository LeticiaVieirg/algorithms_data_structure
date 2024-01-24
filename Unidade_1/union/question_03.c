/*Escreva um programa que implementa uma struct Data com os campos dia, mês e ano. O mês deve
ser armazenado como um enum com os valores JANEIRO, FEVEREIRO, MARÇO, ABRIL, MAIO,
JUNHO, JULHO, AGOSTO, SETEMBRO, OUTUBRO, NOVEMBRO e DEZEMBRO. O programa
deve ler a data e imprimir a data no formato dd/mm/aaaa.*/

#include <stdio.h>
#include <stdlib.h>

typedef enum mes{
    JANEIRO = 1, FEVEREIRO, MARCO, ABRIL, MAIO, JUNHO, JULHO, AGOSTO, SETEMBRO, OUTUBRO, NOVEMBRO, DEZEMBRO
}Mes;

typedef struct data{
    int day;
    Mes month;
    int year;
}Data;

void cadastro_dados(Data *d){
    printf(" === Cadastro dos dados ===\n");
    printf("Informe o dia: ");
    scanf("%d", &d->day);
    printf("Informe o mês (1 para Janeiro, 2 para fevereiro, etc...): ");
    scanf("%d", (int*)&d->month);
    printf("Informe o ano: ");
    scanf("%d", &d->year);
}

int main(void){
    Data *data = malloc(sizeof(Data));
    cadastro_dados(data);

    printf("Data %02d/%02d/%04d\n", data->day, data->month, data->year);

    free(data);

    return 0;
}
