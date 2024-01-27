#include <stdio.h>
#include <stdlib.h>

typedef enum mes{
    JANEIRO = 1, 
    FEVEREIRO,
    MARCO,
    ABRIL,
    MAIO, 
    JUNHO, 
    JULHO, 
    AGOSTO, 
    SETEMBRO, 
]   OUTUBRO, 
    NOVEMBRO, 
    DEZEMBRO
} Mes;

typedef struct data{
    int dia;
    Mes mes;
    int ano;
} Data;

void cadastro_data(Data *d){
    printf("***CADASTRO*** \n");
    printf("Informe o dia: ");
    scanf("%d", &d->dia);
  
    printf("Informe o mes: ");
    printf("[1]JANEIRO  [2]FEVEREIRO  [3]MARCO  [4] ABRIL  [5]MAIO  [6]JUNHO \n");
    printf("[7]JULHO  [8]AGOSTO  [9]SETEMBRO  [10]OUTUBRO  [11]NOVEMBRO  [12]DEZEMBRO \n");
    scanf("%d", (int*)&d->mes);
  
    printf("Informe o ano: ");
    scanf("%d", &d->ano);
}

int main(void){
    Data *data = malloc(sizeof(Data));
    cadastro_data(data);
    printf("Data %02d/%02d/%04d\n", data->dia, data->mes, data->ano);

    free(data);
    return 0;
}
