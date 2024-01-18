#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct funcionario {
  char nome[20];
  float salario;
  int identificador;
  char cargo[20];
  } Funcionario;

void preencher (struct Funcionario *func, int q) {
  int i;
  for (i = 0; i < q; i++) {
    printf("Informe os seguintes dados: ");
    printf("Nome do funcionario: ");
    scanf("%[^\n]s", func[i].nome);
      
    printf("Salario do funcionario: : ");
    scanf("%f", &func[i].salario);
      
    printf("Identificador do funcionario: : ");
    scanf("%d", &func[i].identificador);
      
    printf("Cargo do funcionario: : ");
    scanf("%[^\n]s", func[i].cargo);
    }
}

void imprimir (struct Funcionario *func, int q) {
  int i;
  for (i = 0; i < q; i++) {
    printf("Nome: %s\n Salario: %f\n Identificador: %d\n Cargo: %s\n", func[i].nome, func[i].salario, func[i].identificador, func[i].cargo);
  }
}

void maiormenorsalario (struct Funcionario *func, int q) {
  int i;
  float maiorsalario=0
  int imaior,imenor;
  
  for (i = 1; i < q; i++) {
    if (func[i].salario > maiorsalario) {
      maiorsalario = func[i].salario;
      imaior=i;           
    }
    if (f[i].salario < menorsalario) {
      menorsalario = f[i].salario;
      imenor=i;
    }
  }
    printf("O cargo com maior salario corresponde a : %s .", func[imaior].cargo);
    printf("Sendo o salario equivalente a: %f\n .", func[imaior].salario);
  
    printf("O cargo com menor salario corresponde a : %s .", func[imenor].cargo);
    printf("Sendo o salario equivalente a: %f\n .", func[imenor].salario);
}

void alterasalario (struct Funcionario *func, int q){

  int i;
  char novonome[20];
  float outrosalario;

  printf("Informe o nome do funcionario para alterar: ")
  scanf("%[^\n]s", novonome);

  for(i=0;i<q;i++){
    if (strcmp(novonome, func[i].nome==0){
    printf("Digite o salario para modificar");
    scanf("%f",&outrosalario);
      
    salario[i]=outrosalario;
    }
  }
}

int main() {
  int q;
  printf("Informe a quantidade de funcionarios: ");
  scanf("%d", &q);
  
  struct Funcionario *func=malloc(q*sizeof(struct Funcionario));
  if (func == NULL) {
    printf("Erro na alocacao! ");
    exit(1);
  }
  
  preencher (func, q);
  imprimir (func, q);
  alterasalario (func,q);
  
  maiormenorsalario (func, q);
  
  free(func);
  return 0;
}
