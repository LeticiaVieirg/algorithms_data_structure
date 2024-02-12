#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"
#include "disciplina.h"

int main() {
    //Criacao de um ponteiro para aluno
    Aluno *aluno;
    char nome[100];
    int matricula;
  
    printf("===Cadastro aluno===");
    printf("Informe o nome do aluno: \n");
    scanf(" %[^\n]s",nome);
    printf("Informe a matricula: \n");
    scanf("%d",matricula);
  
    aluno = cria_aluno(char nome, int matricula);

    int num_disciplinas;
    printf("Informe o numero de disciplinas que deseja matricular: ");
    scanf("%d", &num_disciplinas);

    for (int i = 0; i < num_disciplinas; i++)    {
        char nome[100];
        int codigo;
        printf("Informe o nome da disciplina %d: ", i + 1);
        scanf("%s", nome);
        printf("Informe o codigo da disciplina %d: ", i + 1);
        scanf("%d", &codigo);

        Disciplina *disciplina = cria_disciplina(nome, codigo);
        matricula_disciplina(aluno, disciplina);
    }

    imprime_aluno(aluno);
    exclui_aluno(aluno);

    return 0;
}
