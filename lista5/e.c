#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
    int id;
    int pista;
    int seguinte;
    struct lista *prox; 
}lista;

void inicia(lista *l){
    l->prox = l;
}
void aloca(lista *l, int id, int pista, int seguinte){
    lista *novo = malloc(sizeof(lista));
    novo->id = id;
    novo->pista = pista;
    novo->seguinte = seguinte;
    novo->prox = l->prox;
    l->prox = novo;
}

int main(){
    int k, id, pista, seguinte, primeira;
    lista j, *z, *ant;
    inicia(&j);
    scanf("%d", &k);

    for(int i=0; i<k; i++){
        scanf("%d %d %d", &id, &pista, &seguinte);
        if(i==0) primeira = id;
        aloca(&j, id, pista, seguinte);
    }
    seguinte = primeira;
    ant = j.prox;
    while(seguinte!=-1){
        z = ant->prox;
        if(z->id==seguinte){
            printf("%d\n", z->pista);
            ant->prox = z->prox;
            seguinte = z->seguinte;
            free(z);
        }
        ant = ant->prox;
    }
    return 0;
}