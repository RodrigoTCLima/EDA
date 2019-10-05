#include <stdio.h>

int hanoi(int N, int Orig, int Dest, int Temp, int Cont){
	if(N <= 1) {
		Cont++;
		return Cont;
	}
	Cont = 2*hanoi(N-1, Orig, Temp, Dest, Cont);
	Cont++;
	return Cont;
}

int main(){
	int a, i=1;
		while(scanf("%d", &a), a){
			int l = hanoi(a, 1, 3, 2, 0);
			printf("Teste %d\n%d\n\n", i, l);
			i++;
		}
	return 0;
}
