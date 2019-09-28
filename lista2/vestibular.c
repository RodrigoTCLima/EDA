#include <stdio.h>
#include <stdlib.h>
int main(){
    int a, b=0;
    char *v, w;
    scanf("%d", &a);
    v = malloc(a*sizeof(char));
    scanf("%s%*c", v);
    for(int i=0; i<a; i++){
        scanf("%c", &w);
        if(v[i] == w) b++;
    }
    free(v);
    printf("%d\n", b);
    return 0;
}