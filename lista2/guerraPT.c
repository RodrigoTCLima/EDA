#include <stdio.h>
#include <stdlib.h>
int main(){
    int N[100001], a, b=0, c;
    scanf("%d", &a);
    for(int i=0; i<a; i++){
        scanf("%d", &N[i]);
        b=b+N[i];
    }
    for(int i=0; i<a; i++){
        if(c == b/2) {
            printf("%d\n", i);
            break;
        }
        else{
            c = c + N[i];
        }
    }
    return 0;
}