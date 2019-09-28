
#include <stdio.h>
#include <string.h>
struct tipoBanda{
	char nome[80];
	int ano;
};
struct tipoShow{
	char nome[80];
	int qtd;
	struct tipoBanda bandas[100];
};

void pesquisarNomeBanda(char pesquisa[80], struct tipoShow shows[50], int n){
	int flag = 0, igualdade;
	for(int i=0;i<n;i++){
		for(int j=0; j<shows[i].qtd; j++){
			igualdade = strcmp(shows[i].bandas[j].nome, pesquisa);
			if(igualdade == 0){ 
				printf("%s - ano %d\n", shows[i].nome, shows[i].bandas[j].ano);
				flag = 1;
				break;
			}
		}
	}
	if(flag == 0){
		printf("Banda nao cadastrada\n");
	}
}
