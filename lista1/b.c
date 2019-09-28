#include <stdio.h>
int main(){
    int a, b = 0;
    while(scanf("%d", &a) != EOF) b++;
    printf("%d\n", b);
    return 0;
}