#include "FilaLista.h"
#include <stdlib.h>

typedef struct celula{
    int dado;
    struct celula *prox;    
}celula;

celula *filaLista;

int cria_fila(){
    filaLista = malloc(sizeof(celula));
    if(filaLista == NULL) return 0;
    filaLista -> prox = filaLista;
    return 1;
}

int enfileira(int x){
    celula *novo = malloc (sizeof(celula));
    if(novo == NULL) return 0;
    novo -> prox = filaLista -> prox;
    filaLista ->prox = novo;
    filaLista->dado = x;
    filaLista = novo;
    return 1;
}

int desenfileira(int *x){
    if(filaLista->prox = filaLista) return 0;
    celula *lixo = filaLista->prox;
    *x = lixo->dado;
    filaLista -> prox = lixo -> prox;
    free(lixo);
    return 1;  
}

int fila_vazia(){
    if(filaLista->prox = filaLista) return 1;
    return 0;
}
int fila_tam(){
    int i;
    celula *j = filaLista;
    for(int i=0; j->prox!=filaLista; j=j->prox, i++);
    return i;
}
int destroi_fila(){
    int elem;
    while(desenfileira(&elem));
    free(filaLista);
    return 1;
}