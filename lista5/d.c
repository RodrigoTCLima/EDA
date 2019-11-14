#include <stdio.h>
#include <stdlib.h>
typedef struct fila{
	int dado;
	struct fila *prox;
}fila;

fila *f; 
void inicia(){
	f = malloc(sizeof(fila));
	f->prox = f;
}
void enfileira(int i){
	fila *novo = malloc(sizeof(fila));
	novo->prox = f->prox;
	f->prox = novo;
	f->dado = i;
	f=novo;
}
int desenfileira(){
	if(f->prox==f) return 0;
	fila *lixo = f->prox;
	int l = lixo->dado;
	f->prox = lixo->prox;
	free(lixo);
	return l;
}
int main(){
	inicia();
	int k;
	
	scanf("%d", &k);
	for(int i=1; i<=k; i++) {
		enfileira(i);
	}
	int topo, segundo;
	printf("Cartas descartadas: ");
	while(k>1){
		topo = desenfileira(); k--;
		segundo = desenfileira(); k--;
		enfileira(segundo);
		k++;
		if(k>1){
			printf("%d, ", topo);
		}
		else{
			printf("%d\n", topo);
		}
	}
	topo = desenfileira();
	printf("Carta restante: %d\n", topo);
	return 0;
}
