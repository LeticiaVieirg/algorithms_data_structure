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

//continuar

    return 0;
}
