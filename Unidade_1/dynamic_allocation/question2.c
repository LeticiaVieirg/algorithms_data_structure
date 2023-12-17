#include <stdio.h>
#include <stdlib.h>

#define ALUNOS 10 

void preencheRespostas(int questoes, char **alunos){
    for (int i = 0; i < ALUNOS; i++){
        printf("Aluno %d.\n", i + 1);
      
        for (int j = 0; j < questoes; j++){
            printf("insira a resposta para questao %d: ", j + 1);
            getchar();//limpar buffer
            scanf("%c", &alunos[i][j]);
        }
    }
}

void corrijequestoes(int questoes, char *gabarito, char **alunos, float *notas){
    int corretas = 0;
    float aprovados = 0;
  
    for (int i = 0; i < ALUNOS; i++){
        corretas = 0;
        for (int j = 0; j < questoes; j++){
            if (alunos[i][j] == gabarito[j]){
                corretas++;
            }
        }
      
        notas[i] = ((float)corretas / questoes)*10;
        if (notas[i] >= 6){
            paprovados++;
        }
    }
    printf("-------------------------------------------");
    printf("\nPorcentagem de alunos aprovados: %% %.2f\n", (aprovados / ALUNOS) * 100); //exibindo porcentagem de aprovação
}

void exibirResultados(float *notas){
    printf("\n");
    for (int i = 0; i < ALUNOS; i++) {
        printf("Aluno %d nota: %.1f\n", i + 1, notas[i]);
    }
    printf("-------------------------------------------");
}

int main(void){
    int questoes;
    printf("Insira o total de questoes: ");
    scanf(" %d", &questoes);
    char *gabarito = (char *)malloc(questoes * sizeof(char));
    float *notas = (float *)malloc(ALUNOS * sizeof(float));
    for (int i = 0; i < questoes; i++){
        printf("insira o gabarito da questao %d: ", i + 1);
        scanf(" %c", &gabarito[i]);
    }
    // alocando matriz dinamicamente
    char **alunosreposta = (char **)malloc(ALUNOS * sizeof(char *));
    for (int i = 0; i < ALUNOS; i++) {
        alunosreposta[i] = (char *)malloc(questoes * sizeof(char));
    }
    // verificando espaço na memoria
    if (gabarito == NULL || alunosreposta == NULL || notas == NULL) {
        printf("ERRO");
        exit(1);
    }
    preencherespostas(questoes, alunosreposta);
    corrijequestoes(questoes, gabarito, alunosreposta, notas);
    exiberesultados(notas);
    //liberando memoria alocada
    free(gabarito);
    free(notas);
    for (int i = 0; i < ALUNOS; i++) {
        free(alunosreposta[i]);
    }
    free(alunosreposta);
    return 0;
}
