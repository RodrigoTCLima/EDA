#include <stdio.h>
int main(){
    int N[1001] = {0};
    int K, L, J, M;
    scanf("%d %d", &K, &M);
    for(int i=1; i<=K; i++){
        scanf("%d", &J);
        N[J]++;
    }
    L=N[1];
    for(int i=1; i<=M; i++){
        if (N[i] < L) L = N[i];
    }
    printf("%d\n", L);
    return 0;
}