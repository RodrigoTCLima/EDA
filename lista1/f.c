#include <stdio.h>
int main(){
    int a, b=1;
    scanf("%d", &a);
    int k = a - b; 
    for(int i=0; i<a; i++){
        if(i!=0){
            b = b + 2;
        }
        
        for(int j=0; j<k; j++) printf(" ");
        for(int j=0; j<b; j++) printf("*");
        k-=1;
        printf("\n");
    }
    return 0;
}