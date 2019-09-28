#include <stdio.h>
int f91(int N){
	if(N<=100) return(f91(f91(N+11)));
	if(N>=101) return (N-10);
}
int main(){
	int l;
	while(scanf("%d", &l), l){
		printf("f91(%d) = %d\n", l, f91(l));
	}
	return 0;
}