/*Renomeação do tipo estruturado fila*/
typedef struct fila Fila;

/*Funcao que cria fila, 
  Recebe como parametro o tamanho da fila*/
Fila *CriaFila(int MAX_SIZE);

/*Funcao que libera a fila,
  Recebe como parametro um ponteiro duplo*/
void DestruirFila(Fila **Q);

/*Funcao que verifica se a lista esta vazia,
  Recebe como parametro um ponteiro*/
int FilaVazia(Fila *Q);

/*Funcao que verifica a lista cheia,
  Recebe como parametro um ponteiro*/
int FilaCheia(Fila *Q);

/*Funcao que insere um novo elemento a lista,
  Recebe como parametros um ponteiro e um elemento*/
int InsereFila(Fila *Q, int elem);

/*Funcao remover da fila,
  Recebe como parametro um ponteiro*/
int RemoveFila(Fila *Q);

/*Funcao consultar fila, 
  Recebe como parametros dois ponteiros*/
int ConsultarFila(Fila *Q, int *elem);
