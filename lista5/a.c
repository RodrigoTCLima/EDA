#include <stdio.h>
#include <stdlib.h>
typedef struct lista{
    char dado;
    struct lista *prox;    
}lista;
int inicializa(lista *l){
    for(int i=0;i<30;i++){
        l[i].prox = NULL;
    }
}
int colocar(lista *l, int tam, char lado){
    lista *k = malloc(sizeof(lista));
    k->prox = l[tam].prox;
    k->dado = lado;
    l[tam].prox = k;
    return 1;
}
int ver(lista *l, int tam, char lado){
    lista *j = l[tam].prox;
    lista *ant = &l[tam];
    while(j!=NULL){
        if(j->dado != lado){
            ant->prox = j->prox;
            free(j);
            return 1;
        }
        ant = j;
        j = j->prox;
    }
    if(colocar(l, tam, lado))
    return 0;
}

int main(){
    lista l[30];
    inicializa(l);
    int tam, qtd = 0;
    char lado;
    scanf("%*d");
    while(scanf("%d %c", &tam, &lado) != EOF){
        if(ver(l, tam-30, lado)) qtd++;
    }
    printf("%d\n", qtd);
    return 0;
}