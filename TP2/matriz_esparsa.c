#include <stdio.h>
#include <stdlib.h>

typedef struct no{
  int coluna;
  int valor;
  struct no *prox;
}no;
typedef struct matriz{
  int linhas;
  int colunas;
  no **valores;
}matriz;

void inicia(int linhas, int colunas, matriz *m){
  m->linhas = linhas;
  m->colunas = colunas;
  m->valores = malloc(linhas*sizeof(no*));
  for(int i=0; i<linhas; i++){
    m->valores[i]=malloc(sizeof(no));
    m->valores[i]->prox=NULL;
  }
}
void inserir(int linha, int coluna, int valor, matriz *m){
  no *anterior = m->valores[linha];
  no *atual = anterior->prox;
  no *novo = malloc(sizeof(no));
  novo->coluna = coluna;
  novo->valor = valor;
  novo->prox = atual;
  anterior->prox=novo;
}

int main(void) {
  int m, n;
  int *vetor;
  scanf("%d %d", &m, &n);
  vetor = malloc(n*sizeof(int));
  for(int i=0; i<n; i++){
    scanf("%d", &vetor[i]);
  }
  matriz esparsa;
  inicia(m, n, &esparsa);
  int elem, linha, coluna;
  while(scanf("%d %d %d", &linha, &coluna, &elem) != EOF){
    inserir(linha, coluna, elem, &esparsa);
  }
  int *saida;
  saida = malloc(m*sizeof(int));
  for(int i=0; i<m; i++){
    int soma = 0, j;
    no *aqui = esparsa.valores[i];
    while(aqui!=NULL){
    	j = aqui->coluna;
    	soma = soma + aqui->valor*vetor[j];
    	aqui = aqui->prox;
    }
    saida[i] = soma;  
  }
  for(int i=0; i<m;i++){
    printf("%d\n", saida[i]);
  }
  return 0;
}
