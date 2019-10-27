#include <stdio.h>
#include "FilaCirRend.h"

int main(){
    char op;
    int qtdElem, i, elem, resultado = 1;
    cria_fila();

    while(1){
        printf("\033[2J\033[1;1H");
        printf("Tabela de comandos:\n1 - Inserir n elementos na fila\n2 - Remover n elementos da fila\n"
        "3 - Imprimir a fila\n4 - Reiniciar a fila\n5 - Instruções básicas de como"
        " usar os comandos\n6 - Sair\n");
        scanf("%c%*c", &op);
        if(op=='1'){
            printf("Digite quantos elementos você deseja inserir: ");
            scanf("%d", &qtdElem);
            for(i=0; i < qtdElem && resultado == 1; i++){
                scanf("%d", elem);
                resultado = enfileira(elem);
            }
            if(resultado == 0){
                printf("%d elementos foram inseridos na fila, mas %d não couberam.\n", i, qtdElem-i);
            }
        }
        else if(op == '2'){
            printf("Digite quantos elementos você deseja remover: ");
            scanf("%d", &qtdElem);
            for(i=0; i<qtdElem && resultado == 1; i++){
                resultado = desenfileira(&elem);
                printf("Elemento %d foi removido da fila", elem);
            }
            if(resultado == 0){
                printf("Fila Vazia.\n");
            }
        }
        else if(op == '3'){
            imprime_fila();
        }
        else if(op == '4'){}
        else if(op == '5'){}
        else if(op == '6')
            break;
    }
    return 0;
}