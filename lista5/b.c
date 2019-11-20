#include <stdio.h>
#include <stdlib.h>
//criação da fila
typedef struct lista {
    int x;
    int y;
    struct lista *prox;   
}lista;



// inicialzação do tabuleiro;
void inicia(lista *j, int tab[8][8]){
    for(int i=0; i<8;i++)
        for(int j=0; j<8;j++)
            tab[i][j] = 500;
    j->prox = j;
}

int vamos(char p1, int y1, char p2, int y2){
    int x1, x2, x[]={-2, -2, 2, 2, 1, -1, 1, -1}, y[]={1, -1, 1, -1, -2, -2, 2, 2};
    int tab[8][8]; // tabuleiro
    lista j;
    inicia(&j, tab);
    x1 = p1 - 'a';
    x2 = p2 - 'a';
    y1--;
    y2--;
    tab[x1][y1] = 0;
    lista *l = &j;
    l->x = x1;
    l->y = y1;
    while(tab[x2][y2]==500){
        x1 = l->x;
        y1 = l->y;
        for(int i=0; i<8; i++){
            if((x1+x[i] < 8) && (x1+x[i] >= 0) && (y1+y[i] >= 0) && (y1+y[i] < 8)){
                if(tab[x1+x[i]][y1+y[i]] == 500 && tab[x1][y1]!=500){
                    lista *k = malloc(sizeof(lista));
                    k->prox = l->prox;
                    l->prox = k;
                    l->x = x1+x[i];
                    l->y = y1+y[i];
                    l=k;
                    tab[x1+x[i]][y1+y[i]] = tab[x1][y1] + 1;
                }
                
            }
        }
        l = l->prox;
    }
    return tab[x2][y2];
}

int main(){
    int y1, y2, resultado;
    char x1, x2;
    while(scanf("%c%d %c%d\n", &x1, &y1, &x2, &y2) != EOF){
        
        resultado = vamos(x1, y1, x2, y2);
        printf("To get from %c%d to %c%d takes %d knight moves.\n", x1, y1, x2, y2, resultado);
    }
    return 0;
}