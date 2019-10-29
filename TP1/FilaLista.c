#include "FilaLista.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct celula{
    int dado;
    struct celula *prox;    
}celula;

celula *fila;

int cria_fila(){
    fila = malloc(sizeof(celula));
    if(fila == NULL) return 0;
    fila -> prox = fila;
    return 1;
}

int enfileira(int x){
    celula *novo = malloc (sizeof(celula));
    if(novo == NULL) return 0;
    novo -> prox = fila -> prox;
    fila ->prox = novo;
    fila->dado = x;
    fila = novo;
    return 1;
}

int desenfileira(int *x){
    if(fila->prox == fila) return 0;
    celula *lixo = fila->prox;
    *x = lixo->dado;
    fila -> prox = lixo -> prox;
    free(lixo);
    return 1;  
}

int fila_vazia(){
    if(fila->prox = fila) return 1;
    return 0;
}
int fila_tam(){
    int i=0;
    celula *j = fila;
    for(; j->prox!=fila; j=j->prox, i++);
    return i;
}
int destroi_fila(){
    int elem;
    while(desenfileira(&elem));
    free(fila);
    return 1;
}
void imprime_fila(){
    int N = fila_tam();
    celula *i = fila->prox;
    int j = 0 ;
    if(N != 0){
        for(;j < N; j++){
            if(j==0) printf(" ------");
            else if(j+1==N) printf("----- \n");
            else printf("------");
        }
        for (; i != fila; i = i->prox){
            printf("| %03d ", i->dado);
        }
        printf("|\n");
        for(j=0;j < N; j++){
            if(j==0) printf(" ------");
            else if(j+1==N) printf("----- \n");
            else printf("------");
        }
        int p=0;
        int u = N;
        if(p!=u){

            for(j = 0; j<=N;j++){
                if(j==0) printf("   ");
                if(p==j) printf("p  ");
                if(u==j+1) printf("   u");
                if(j!= u && j!=p) printf("      ");
            }
            printf("\n");
        }
        printf("\n");
    }
    else{
        printf(" ------\n|      |\n ------\n  p u \n");
    }
}