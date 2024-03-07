#include <stdio.h>
#include "lista.h"

int main(){
    Lista * lista1 = cria_lista();
    lista1 = insere_elemento(lista1, 20);
    lista1 = insere_elemento(lista1, 30);
    lista1 = insere_elemento(lista1, 40);
    Lista * lista2 = cria_lista();
    lista2 = insere_elemento(lista2, 60);
    lista2 = insere_elemento(lista2, 70);
    lista2 = insere_elemento(lista2, 80);
    lista1 = concatenacao(lista1, lista2);

    printf("Lista concatenada: \n");
    imprime_lista(lista1);

}
