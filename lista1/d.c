#include <stdio.h>
int main(){
    int a, valor = 0;
    scanf("%d", &a);
    if(a <= 10) valor = 7;
    else if (a <= 30){
        a-=10;
        valor = 7 + a;
    }
    else if (a <= 100){
        a-= 30;
        valor = 27 + a*2;
    }
    else{
        a-= 100;
        valor = 167 + a*5;
    }
    printf("%d\n", valor);
    
    return 0;
}