#include N 50 /*Numero maximo de elementos*/

struct pilha {
  int n;
  float vet[N];
}

Pilha * pilha_cria(void) {
  Pilha*p=(Pilha*) malloc(sizeof(Pilha));
  p->n=0; /*Inicializa com 0 elemento*/
  return p;
}

void pilha_push(Pilha*´p. float v){
  if (p->n==N) {
    printf("Capacidade esgotada. \n");
    exit(1);
  }
  p->vet[p->n]=v;
  p->n++;
}

int pilha_vazia(Pilha *p) {
  return (p->==0);
}

float pilha_pop(Pilha *p) {
  float v;
  if (pilha_vazia(p)) {
    printf("Pilha vazia. \n);
    exit(1);
  }

  v=p->vet[p->n-1]; /*Acessa o vetor na ultima posição e armazena em v*/
  p->n--;           /*O ultimo elemento nao existe mais, foi removido*/
  return v;
}

void pilha_libera(Pilha *p) {
  free(p);
}
