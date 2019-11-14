#include <stdio.h>
#include <stdlib.h>

typedef struct pilha{
  char dado;
  struct pilha *prox;
}pilha;

int inserir(char a, pilha *p){
  pilha *novo = malloc(sizeof(pilha));
  novo->prox = p->prox;
  novo->dado = a;
  p->prox = novo;
  return 1;
}
int remover(pilha *p){
  pilha *j = p->prox;
  p->prox = j->prox;
  free(j);
  return 1;
}

int main(){
  int k,i=0, l = 1;
  char c, j;
  pilha p;
  p.prox = NULL;
  scanf("%d%*c", &k);
  for(; i<k/2;i++){
    scanf("%c", &c);
    inserir(c, &p);
  }
  if(k%2!=0){
    scanf("%c", &c);
    i++;
  }
  pilha *nova; 
  for(;i<k;i++){
    nova = p.prox;
    scanf("%c", &c);
    j = nova->dado;
    if(j!=c) l = 0;
    remover(&p);
  }
  printf("%d\n", l);
  
  return 0;
}