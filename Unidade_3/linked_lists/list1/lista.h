/* Estrutura renomeada para Lista da lista encadeada*/
typedef struct lista Lista;

/* Função que inicializa a lista atribuindo NULL, 
tem como retorno a inicializacao da Lista*/
Lista* cria_lista(void);

/* Função que insere um elemento na lista, 
Recebe como argumentos a lista e o valor inserido*/
Lista* insere_elemento(Lista* lista, int valor);

/* Função que imprime a lista, 
  Recebe como argumento um ponteiro de Lista*/
void imprime_lista(Lista* lista);

/* Função que retira o elemento da lista
  Recebe como argumetnos um ponteiro de Lista e valor inteiro*/
Lista * retira_elemento(Lista * lista, int valor);

/* Função que realiza a contagem de elementos superiores a outros valores, 
  Recebe como argumentos Lista e um valor inteiro*/
int maiores(Lista* lista, int valor);

/* Função que retorna o último elemento da lista,
  Recebe como argumento Lista*/
Lista * ultimo(Lista* lista);

/* Função que realiza a concatenacao de duas listas,
  Recebe como agumentos duas listas*/
Lista * concatena(Lista* lista1, Lista* lista2);
