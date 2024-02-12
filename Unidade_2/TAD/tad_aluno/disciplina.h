/*Renomeacao do tipo estruturado disciplina*/
typedef struct disciplina Disciplina;

/*Funcao que aloca dinamicamente uma estrutura do tipo Disciplina e retorna o seu endereco,
  Recebe como paramentros o nome e o codigo do tipo inteiro*/
Disciplina *cria_disciplina(char nome[], int codigo);

/*Funcao que libera o espaco alocado dinamicamente para a estrutura da disciplina, 
  Recebe como paramentros o ponteiro de Disciplina*/
void exclui_disciplina(Disciplina *disciplina);

/*Funcao que exibe os dados armazenados das disciplinas, 
  Recebe como paramentro o ponteiro de Disciplina*/
void imprime_disciplina(Disciplina *disciplina);
