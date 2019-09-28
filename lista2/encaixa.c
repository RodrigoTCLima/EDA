#include <stdio.h>
int encaixa(int a, int b){
    if(a == b) return 1;
    else{
        if(a%10 != b%10){
            return 0;
        }
        else{
            if(b/10 == 0){
                return 1;
            }
            else{
                return encaixa(a/10, b/10);
            }
        }
    }
}

int segmento(int a, int b){
    int c = 0;
    if(a == b){
        return 1;
    }
    else if(a>b){
        while(a>=b && c==0){
            if((a%10) != (b%10)){
                a=a/10;
            }
            else{
                c = encaixa(a, b);
                a=a/10;
            }
        }
    }
    else{
        while(a<=b && c==0){
            if((a%10) != (b%10)){
                b=b/10;
            }
            else{
                c = encaixa(b, a);
                b=b/10;
            }
        }
    }
    return c;
}
