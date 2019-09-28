#include <stdio.h>
int main(){
    int a;
    scanf ("%d", &a);
    for(int i=1; i<=a; i++){
        for(int j=1; j<=i; j++){
            if(j == 1) printf("%02d", i);
            else printf(" %02d", i);
        }
        printf("\n");
    }
    printf("\n");
    
    for(int i=1; i<=a; i++){
        for(int j=1; j<=i; j++){
            if (j == 1) printf("%02d", j);
            else printf(" %02d", j);
        }
        printf("\n");
    }
    return 0;
}