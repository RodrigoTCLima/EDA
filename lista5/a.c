#include <stdio.h>
#include <stdlib.h>
typedef struct lista{
    char dado;
    struct lista *prox;
}lista;

void inicializa(lista *l){
    for(int i=0; i<32; i++)
        l[i].prox = NULL;
}

int ver(lista *l, int tam, char lado, lista *k){
    lista *j = l[tam].prox;
    if(j!=NULL && j->dado!=lado){
        l[tam].prox = j->prox;
        free(j);
        return 1;
    }
    else{
        lista *p = malloc(sizeof(lista));
        p->prox = k[tam].prox;
        p->dado = lado;
        k[tam].prox = p;
        return 0;
    }
}

int main(){
    lista e[32], d[32];
    inicializa(e);
    inicializa(d);
    int tam, qtd = 0;
    char lado;
    while(scanf("%d %c", &tam, &lado) != EOF){
        if(lado == 'E'){
            if(ver(d, tam-30, lado, e)) {
                qtd++;
            }
        }
        else{
            if(ver(e, tam-30, lado, d)) {
                qtd++;
            }
        }
            
    }
    printf("%d\n", qtd);
    return 0;
}