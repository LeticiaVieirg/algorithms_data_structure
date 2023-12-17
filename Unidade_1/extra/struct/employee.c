#include <stdio.h>
#include <stdlib.h>

typedef struct funcionario {
    char nome[20];
    float salario;
    int ident;
    char cargo[20];
} Funcionarios;

void preenche(Funcionarios *func1) {
    printf("Enter a name: \n");
    scanf(" %[^\n]", func1->nome);

    printf("Enter a salary: \n");
    scanf("%f", &func1->salario);

    printf("Enter an identifier: \n");
    scanf("%d", &func1->ident);

    printf("Enter a job title: \n");
    scanf(" %[^\n]", func1->cargo);
}

void imprime(Funcionarios *funcionario) {
    printf("\nNome: %s  \nSalario: %.2f \nIdentificador: %d  \nCargo: %s  \n",funcionario->nome, funcionario->salario, funcionario->ident, funcionario->cargo);
}

int main() {
    Funcionarios func1;

    preenche(&func1);
    imprime(&func1);

    return 0;
}
