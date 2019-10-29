#include <stdio.h>
#include "FilaLista.h"

int main(){
    char op;
    int qtdElem, i, elem, resultado = 1;
    cria_fila();

    while(1){
        resultado = 1;
        printf("\033[2J\033[1;1H");
        printf("Tabela de comandos:\n1 - Inserir n elementos na fila\n2 - Remover n elementos da fila\n"
        "3 - Imprimir a fila\n4 - Reiniciar a fila\n5 - Sair\n");
        scanf("%c%*c", &op);
        if(op=='1'){
            printf("Digite quantos elementos você deseja inserir: ");
            scanf("%d", &qtdElem);
            for(i=1; i <= qtdElem && resultado == 1; i++){
                printf("SE VOCÊ PEDIU ISSO, VOCÊ É UM FRESCO. AGORA DIGITE A MERDA DO NÚMERO QUE VOCÊ QUER:");
                scanf("%d", &elem);
                resultado = enfileira(elem);
            }
            if(resultado == 0){
                printf("%d elementos foram inseridos na fila, mas %d não coube/couberam.\n", i-2, qtdElem-i+2);
                scanf("%*c");
            }
        }
        else if(op == '2'){
            printf("Digite quantos elementos você deseja remover: ");
            scanf("%d%*c", &qtdElem);
            for(i=0; i<qtdElem && resultado == 1; i++){
                resultado = desenfileira(&elem);
                if(resultado == 1){
                    printf("Elemento %d foi removido da fila.", elem);
                    scanf("%*c");
                }    
            }
            if(resultado == 0){
                printf("Fila Vazia.");
                scanf("%*c");  
            }
        }
        else if(op == '3'){
            imprime_fila();
        }
        else if(op == '4'){
            if(destroi_fila())
                if(cria_fila())
                    printf("Fila reiniciada.\n");
        }
        else if(op == '5'){
            destroi_fila();
    	    break;
        }
        else{
            printf("Opção inválida\n");
        }
        printf("Pressione enter.\n");
        scanf("%*c");
    }
    return 0;
}
