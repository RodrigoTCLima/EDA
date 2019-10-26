#include <stdlib.h>
#include "FilaVecF.h"

#define N 1100

int *fila;
int p, u;
int cria_fila(){
    fila = malloc(N*sizeof(int));
    if(fila == NULL) return 0;
    p = 0;
    u = 0;
    return 1;
}
int enfileira(int x){
    if(u==N) return 0;
    fila[u] = x;
    u++;
    return 1;
}
int desenfileira(int *x){
    if(p==u) return 0;
    *x = fila[p];
    p++;
    if(p==u){
        p = 0;
        u = 0;
    }
    return 1;
}
int fila_cheia(){
    if(u == N) return 1;
    return 0;
}
int fila_vazia(){
    if(u==0) return 1;
    return 0;
}
int fila_tam(){
    return u-p;
}
int destroi_fila(){
    if(fila==NULL) return 0;
    for(int i=N-1; i>=0;i--){
        free(fila[i]);
    }
    return 1;
}
void imprime_fila(){
    
}