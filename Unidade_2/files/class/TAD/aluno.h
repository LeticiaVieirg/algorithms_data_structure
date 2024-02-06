/*Renomeacao de um novo tipo: Aluno*/
typedef struct aluno Aluno;

/*Função que aloca memória para um struct aluno, os dados sao recebidos via teclado e retorna um ponteiro*/
Aluno *recebe_dados(void);

/*Função que imprime os dados de um aluno, recebe um ponteiro de Aluno como parâmetro*/
void imprime_dados(Aluno * estudante);

/*Função que libera a memória, como parametro recebe um ponteiro de Aluno*/
void libera(Aluno * estudante);
