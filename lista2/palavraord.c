#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    char b[50];
    for(int i=0; i<a; i++){
        int flag=0, antes;
        scanf("%s", b);
        printf("%s: ", b);
        if(b[0]>90) b[0]=b[0]-32;
        antes = b[0];
        for(int j=1; b[j]!='\0'; j++){
            if(b[j]>90){
                b[j] = b[j] - 32;
            }
            if(b[j]<=antes){
                flag = 1;
                break;
            }
            antes = b[j];
        }
        if(flag == 1) printf("N\n");
        else printf("O\n");
    }
    return 0;
}