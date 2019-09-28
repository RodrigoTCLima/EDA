#include <stdio.h>
int rumo(char l[]){
	int vetor[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, i = 0, qtd = 0, k=0;
	while(l[i]!='\0'){
		vetor[(l[i]-'0')]++;
		i++;
	}
	for(i=0;i<10;i++){
		k = k + (i*vetor[i]);
	}
	if(k==9) return 1;
	if(k%9!=0){
		return 0;
	}
	if(k!=9){
		i = 0;
		int resto;
		char p[11];
		while(k/10!=0 || k%10!=0){
			resto = k%10;
			p[i] = resto+'0';
			k=k/10;
			i++;
		}
		return (1 + rumo(p));
	}
}
int main(){
	char l[1010];
	while(scanf("%s", l), l[0]!='0' || l[1]!='\0'){
		int j = rumo(l);
		if(j!=0){
			printf("%s is a multiple of 9 and has 9-degree %d.\n", l, j);	
		}
		else
			printf("%s is not a multiple of 9.\n", l);
	}
	return 0;
}