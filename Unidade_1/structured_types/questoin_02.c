#include <stdio.h>
#include <stdlib.h>

#define MAX_VAGAS 10

typedef struct aluno{
    int matricula;
    char nome[80];
    char turma;
    float notas[3];
    char disciplina[15];
    float media;
}Aluno;

void cadastro_dados(int n, Aluno **alunos){
    printf(" === CADASTRO DE ALUNOS === \n");
    for(int i = 0; i < n; i++){
        printf("Dados aluno #%d\n", i+1);
        printf("Informe a matricula: ");
        scanf("%d", &alunos[i]->matricula);
        getchar(); 
        printf("Informe o nome do aluno: ");
        scanf("%[^\n]", alunos[i]->nome);
        getchar();
        printf("Informe a disciplina: ");
        scanf("%[^\n]", alunos[i]->disciplina);
        getchar();
        printf("Informe a turma: ");
        scanf("%c", &alunos[i]->turma); 
        getchar(); 
    }
}

void lanca_notas(int n, Aluno **alunos){
    float soma;
    printf(" === LANÇAR NOTAS ===\n");
    for(int i = 0; i < n; i++){
        printf("Informe as notas do aluno #%d: \n", i+1);
        for(int j = 0; j < 3; j++){
            printf("Nota #%d: ", j+1);
            scanf("%f", &alunos[i]->notas[j]);
            getchar();
        }
    }

    //Cálculo das médias
    for(int t = 0; t < n; t++){
        soma = 0;
        for(int k = 0; k < 3; k++){
            soma += alunos[t]->notas[k];
        }
        alunos[t]->media = soma / 3;
    }

}

void imprime_tudo(int n, Aluno **alunos){
    printf(" === DADOS CADASTRADOS === \n");
    for(int i = 0; i < n; i++){
        printf("Alunos #%d:\n ", i+1);
        printf("Matricula: %d\n Nome do aluno: %s\n Disciplina: %s\n Turma: %c\n", alunos[i]->matricula, alunos[i]->nome,
        alunos[i]->disciplina, alunos[i]->turma); 
    }
    for(int i = 0; i < n; i++){
        printf("Notas do aluno #%d\n", i+1);
        for(int j = 0; j < 3; j++){
            printf("Nota #%d: %.2f \n", j+1, alunos[i]->notas[j]);
        }
        printf("Media do aluno: %.2f\n", alunos[i]->media);
    }
}

void imprime_turma(int n, Aluno **alunos, char turma){
    printf("=== Alunos da turma %c ===\n", turma);
    for(int i = 0; i < n; i++){
        if(alunos[i]->turma == turma){
            printf("Aluno #%d:\n", i+1);
            printf("Matricula: %d\n", alunos[i]->matricula);
            printf("Nome do aluno: %s\n", alunos[i]->nome);
            printf("Disciplina: %s\n", alunos[i]->disciplina);
            printf("Turma: %c\n", alunos[i]->turma);
            printf("Notas: ");
            for(int j = 0; j < 3; j++){
                printf("%.2f ", alunos[i]->notas[j]);
            }
            printf("\nMedia do aluno: %.2f\n", alunos[i]->media);
        }
    }
}

void imprime_turma_aprovados(int n, Aluno**alunos, char turma){
    printf("=== Alunos aprovados da turma %c ===\n");
    for(int i = 0; i < n; i++){
        if(alunos[i]->turma == turma){
            if(alunos[i]->media >= 7.0){
            printf("Aluno #%d:\n", i+1);
            printf("Matricula: %d\n", alunos[i]->matricula);
            printf("Nome do aluno: %s\n", alunos[i]->nome);
            printf("Disciplina: %s\n", alunos[i]->disciplina);
            printf("Turma: %c\n", alunos[i]->turma);
            printf("\nMedia do aluno: %.2f\n", alunos[i]->media);
            }
        }
    }
}

int main(void){
    int n; 
    char turma;
    printf("Quantos alunos deseja cadastrar? ");
    scanf("%d", &n);
    getchar(); 

    Aluno **aluno = malloc(n * sizeof(Aluno*));
    if(aluno == NULL){
        printf("Infelizmente tivemos um erro de alocação!");
        exit(1);
    }

    for(int i = 0; i < n; i++){
        aluno[i] = malloc(sizeof(Aluno));
        if(aluno[i] == NULL){
            printf("Infelizmente tivemos um erro de alocação!");
            exit(1);
        }
    }

    cadastro_dados(n, aluno);
    lanca_notas(n, aluno);
    imprime_tudo(n, aluno);

    printf("Deseja imprimir os dados de qual turma? \n");
    scanf("%c", &turma);

    imprime_turma(n, aluno, turma);
    imprime_turma_aprovados(n, aluno, turma);

    for(int i = 0; i < n; i++){
        free(aluno[i]);
    }
    free(aluno);

    return 0;
}
