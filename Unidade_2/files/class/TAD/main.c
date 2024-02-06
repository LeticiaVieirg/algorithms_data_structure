#include "aluno.h"
#include <stdio.h>
#include <stdlib.h>

int main(void){
    Aluno *aluno;
  
    aluno = recebe_dados();
    imprime_dados(aluno);
    libera(aluno);
    
    return 0;
}
