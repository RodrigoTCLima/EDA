#include <stdlib.h>
#include <stdio.h>
#include "FilaVecF.h"

#define N 5

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
    if(p==u) {return 0;}
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
    free(fila);
    return 1;
}
void imprime_fila(){
    int j = 0;
    for(;j < N; j++){
        if(j==0) printf(" ------");
        else if(j+1==N) printf("----- \n");
        else printf("------");
    }
    for (j = 0; j < N; j++){
        if(p>j || j>=u || p==u){
            printf("|     ");
        }
        else printf("| %03d ", fila[j]);
    }
    printf("|\n");
    for(j=0;j < N; j++){
        if(j==0) printf(" ------");
        else if(j+1==N) printf("----- \n");
        else printf("------");
    }
    if(p!=u){
        for(j = 0; j<=N;j++){
            if(j==0) printf("   ");
            if(p==j) printf("p  ");
            if(u==j) printf("   u");
            if(j!= u && j!=p) printf("      ");
        }
        printf("\n");
    }
    else{
        for(j = 0; j<=N;j++){
            if(p==j) printf("  p u ");
            if(j!= u && j!=p) printf("      ");
        }
        printf("\n");
    }
}
