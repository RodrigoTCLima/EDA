#include <stdio.h>

int main(){
    char op;
    int qtdElem, i, elem;

    while(1){
        printf("\033[2J\033[1;1H");
        printf("Tabela de comandos:\n1 - Inserir n elementos na fila\n2 - Remover n elementos da fila\n"
        "3 - Imprimir a fila\n4 - Reiniciar a fila\n5 - Instruções básicas de como"
        " usar os comandos\n6 - Sair\n");
        scanf("%c%*c", &op);
        if(op=='1'){
            scanf("%d", &qtdElem);
            for(int i=0; i<qtdElem; i++){
                scanf("%d", elem);
                
            }
        }
        else if(op == '2'){}
        else if(op == '3'){}
        else if(op == '4'){}
        else if(op == '5'){}
        else if(op == '6')
            break;
    }
    return 0;
}