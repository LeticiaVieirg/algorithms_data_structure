typedef struct contabancaria Contabancaria;

/* Alocação da memoria para uma conta bancaria
  Recebe como parametros onome, numero da conta e saldo*/
ContaBancaria *criaconta(char *nome, int num, float valor);

/* Função que realiza deposito em outra conta, 
  Recebe como parametros o ponteiro e um numero inteiro*/
void deposito(Contabancaria *p, int num);

/*Função que realiza saque em uma conta,
  Recebe como parametros um ponteiro cliente e um numero inteiro*/
void saque(Contabancaria *clientes, int tam);

/*Função que realiza uma transferencia entre contas
  Recebe como parametros um ponteiro cliente e um inteiro*/
void transferencia(Contabancaria *clientes, int tam);

/*Função que mostra o saldo de uma conta,[
  Recebe como parametrosum ponteiro cliente e um inteiro*/
void saldo(Contabancaria *clientes, int tam);

/*Função que libera a memoria alocada para uma conta,
  Recebe como paramentro um ponteiro cliente*/
void excluiconta(Contabancaria *clientes);

/Função que informa os dados de todas as contas,
  Recebe como paramentro um ponteiro cliente e um inteiro*/
void verclientes(Contabancaria *clientes, int tam); 
