/*Renomeacao de um tipo estruturado para Ingresso*/
typedef struct ingresso Ingresso;//mudando o nome da struct ingresso so para Ingresso

/*Funcao que armazena os dados inseridos pelo usuario, 
  Recebe como parametros um ponteiro de ingresso*/
void preenche(Ingresso *i);

/*Funcao que exibe na tela os dados armazenados, 
  Recebe como parametro um ponteiro de ingresso*/
void imprime(Ingresso *i);

/*Funcao que altera o preco do ingresso escolhido pelo usuario,
  Recebe como parametros um ponteiro de ingresso e um valor real*/
void altera_preco(Ingresso *i, float valor);

/*Funcao que exibe o menor e o maior valores dos ingressos armazenados, 
  Recebe como parametros um inteiro e um ponteiro de ingresso*/
void imprime_menor_maior_preco(int n, Ingresso *vet);
