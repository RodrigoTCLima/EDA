#include <stdio.h>
void UM(int v[], int ini, int fim, int max){
	int k = 0;
	for(int i=ini; i<fim; i++){
		k = k + v[i];
		if(k>max){
			UM(v, i+1, fim, max);
			printf("%d\n", v[i]);
			break;
		}
	}
}
int main(){
	int v[1002], i=0, j;
	while(scanf("%d", &j), j){
		v[i]=j;
		i++;
	}
	scanf("%d", &j);
	UM(v, 0, i, j);
	return 0;
}