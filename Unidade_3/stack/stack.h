/*Renomeação da estrutura*/
typedef struct pilha Pilha;

/*Funcao que cria a pilha*/
Pilha *pilha_cria(void);

/*Funcao que insere elementos na pilha*/
void pilha_push(Pilha *p, float v);

/*Funcao que retira elementos da pilha*/
float pilha_pop(Pilha *p);

/*Funcao para verificar se a pilha esta vazia*/
int pilha_vazia(Pilha *p);

/*Funcao para liberar a pilha*/
void pilha_libera(Pilha *p);

/*Funcao para imprimir os valores da pilha*/
void pilha_imprime(Pilha *p);
