#include <stdio.h>
#include <stdlib.h>
//criação da fila
typedef struct lista {
    int x;
    int y;
    struct lista *prox;   
}lista;

int tab[8][8]; // tabuleiro
lista j;

// inicialzação do tabuleiro;
void inicia(){
    for(int i=0; i<8;i++)
        for(int j=0; j<8;j++)
            tab[i][j] = 500;
    j.prox = &j;
}

int vamos(char p1, int y1, char p2, int y2){
    int x1, x2, x[]={-2, -2, 2, 2, 1, -1, 1, -1}, y[]={1, -1, 1, -1, -2, -2, 2, 2};
    x1 = p1 - 'a';
    x2 = p2 - 'a';
    while(tab[x2][y2]==500){
        for(int i=0; i<8; i++){
            if((x1+x[i] < 8) && (x1+x[i] >= 0) && (x1+y[i] >= 0) && (x1+y[i] < 8)){
                lista *k = malloc(sizeof(lista));
            }
        }
    }
    return tab[x2][y2];
}

int main(){
    int y1, y2, resultado;
    char x1, x2;
    while(scanf("%c%d %c%d", &x1, &y1, &x2, &y2) != EOF){
        inicia();
        resultado = vamos(x1, y1, x2, y2);
        printf("To get from %c%d to %c%d takes %d knight moves.\n", saidac, saida, chegadac, chegada, resultado);

    }
    return 0;
}