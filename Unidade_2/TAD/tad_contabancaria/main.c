#include <stdio.h>
#include <stdlib.h>
#include "contabancaria.h"

int main(){

    char nome[40];
    float valor = 0;
    int numero, op, i = 0;

    Contabancaria *clientes = (Contabancaria*)malloc(sizeof(Contabancaria));
    if(clientes == NULL){
        printf("Erro na alocacao da memoria!");
        exit(1);
    }

    do{
      printf("MENU CONTA BANCARIA"\n);
      printf("[1] Criação da conta bancaria\n");
      printf("[2] Realizar Deposito\n");
      printf("[3] Realizar saque\n");
      printf("[4] Realizar transferencia\n");
      printf("[5] Ver saldo da conta bancaria\n");
      printf("[6] Sair\n>>> ");
      scanf("%d", &op);  
      
      switch (op){                
      case 1:
            printf("Informe o nome do titular: ");
            scanf(" %[^\n]", nome);
            printf("Informe o numero da conta: ");
            scanf(" %d", &numero);
            printf("Conta criada com sucesso!\n");
            system("pause");

            clientes[i] = *criaconta(nome, numero, valor);
            i++;

            clientes = (Contabancaria*)realloc(clientes, (i + 1) * sizeof(Contabancaria));
            break;
        
        case 2:
            deposito(clientes, i);
            break;
        
        case 3:
            saque(clientes, i);
            break;
        
        case 4:
            transferencia(clientes, i);
            break;
        
        case 5:
            saldo(clientes, i);
            break;
        
        case 6:
            excluiconta(clientes);
            break;
        
        case 13:
            verclientes(clientes, i);
            break;    
        
        default:
            printf("Opcao invalida!\n");
            break;
        }

    } while(op != 6);

    return 0;
}
