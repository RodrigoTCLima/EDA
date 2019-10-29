#include "FilaCirRend.h"
#include <stdio.h>
#include <stdlib.h>

int N = 5, p, u;
int *fila;

int cria_fila(){
    p=0;
    u=0;
    fila =  malloc(N*sizeof(int));
    if(fila == NULL) return 0;
    return 1;
}

int redimenciona(){
    int i,j;
    fila = realloc(fila, 2*N*sizeof(int));
    if(fila == NULL) return 0;
    if(p > u){
        if(N-p>u){
            for(int i=0, j=N; i<u; i++,j++)
                fila[j]=fila[i];
            u = N+u;
        }
        else{
            for (i = N-1, j=2*N-1; i >=p; i--, j--)
                fila[j]=fila[i];
            p = j+1;
        }
    }
    N = 2*N;
    return 1;
}

int enfileira(int x){
    if(((u+1)%N) == p){
        if(redimenciona()){
            fila[u]=x;
            u=(u+1)%N;
            return 1;
        }
        return 0;
    }
    else{
        fila[u]=x;
        u=(u+1)%N;
        return 1;
    }
}

int desenfileira(int *x){
    if(p==u) return 0;
    *x = fila[p];
    p=(p+1)%N;
    return 1;
}

int fila_vazia(){
    if(p==u) return 1;
    return 0;
}
int fila_tam(){
    if(p>u) return (u+N-p);
    return u-p;
}
int destroi_fila(){
    for(int i=N-1; i>=0; i--)
        free(fila[i]);
    return 1;
}
void imprime_fila(){
    int j = 0;
    for(;j < N; j++){
        if(j==0) printf(" ------");
        else if(j+1==N) printf("------ \n");
        else printf("------");
    }
    for (j = p; j != u; j=(j+1)%N){
        printf("| %03d ", fila[j]);
    }if(fila_vazia()){
        for(j = 0; j<N; j++){
            printf("|     ");
        }
    }
    else{
        for(;j!=p && j!=N; j++){
            printf("|     ");
        }      
    }
    printf(" |\n");
    for(j=0;j < N; j++){
        if(j==0) printf(" ------");
        else if(j+1==N) printf("------ \n");
        else printf("------");
    }
    if(p!=u){
        for(j = 0; j<N;j++){
            if(j==0) printf("   ");
            if(p==j) printf("p  ");
            if(u==j) printf("   u");
            if(j!= u && j!=p) printf("      ");
        }
        printf("\n");
    }
    else{
        for(j = 0; j<N;j++){
            if(p==j) printf("  p u ");
            if(j!= u && j!=p) printf("      ");
        }
        printf("\n");
    }
    
    
}
