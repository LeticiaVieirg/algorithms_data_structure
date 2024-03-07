#include "lista.h"
#include <stdio.h>

int main(){
    Lista * lista = cria_lista();

    lista = insere_elemento(lista, 20);
    lista = insere_elemento(lista, 30);
    lista = insere_elemento(lista, 50);
    lista = insere_elemento(lista, 60);
    lista = insere_elemento(lista, 70);
    
    ultimo(lista);

}
