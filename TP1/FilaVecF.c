#include <stdlib.h>
#include "FilaVecF.h"

#define N 1100

int *filaVecF;
int p, u;
int cria_fila(){
    filaVecF = malloc(N*sizeof(int));
    if(filaVecF == NULL) return 0;
    p = 0;
    u = 0;
    return 1;
}
int enfileira(int x){
    if(u==N) return 0;
    filaVecF[u] = x;
    u++;
    return 1;
}
int desenfileira(int *x){
    if(p==u) return 0;
    *x = filaVecF[p];
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
    if(filaVecF==NULL) return 0;
    for(int i=N-1; i>=0;i--){
        free(filaVecF[i]);
    }
    return 1;
}
void imprime_fila(){
    
}