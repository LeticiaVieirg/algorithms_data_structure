
/*Renomeacao de um tipo estruturado aluno para Aluno*/
typedef struct aluno Aluno;

/*Funcao que aloca dinamicamente uma estrutura do tipo Aluno, 
  Recebe como parametros o nome do tipo caracter e a matricula do tipo inteiro*/
Aluno *cria_aluno(char nome[], int matricula);

/*Funcao que matricula o aluno em uma disciplina, 
  Recebe como parametros o ponteiro de aluno e o ponteiro da disciplina ao array de disciplinas do aluno*/
void matricula_disciplina(Aluno *aluno, Disciplina *disciplina);

/*Funcao que libera o espaco alocado dinaicamente para a estrutura do aluno, 
  Recebe como parametro o ponteiro de aluno*/
void exclui_aluno(Aluno *aluno);

/*Funcao que exibe os dados armazenados,
  Recebe como paramentro o ponteiro de aluno*/
void imprime_alunos(Aluno *aluno);
