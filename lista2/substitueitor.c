#include <stdio.h>
int size(char v[]){
    int d = 0;
    for(int i=0; v[i]!='\0'; i++){
        d++;
    }
    return d;
}
int main(){
    char ori[10010], orip[50], mud[50];
    int v, w, x=0;
    scanf("%[^\n]", ori);
    scanf("%s", orip);
    scanf("%s", mud);
    v = size(ori);
    w = size(orip);
    int i=0;
    do{
	x=0;
        if(ori[i]=='\0' || i>v){
            break;
        }
        else if((ori[i])==(orip[0])){
                for(int j=0; orip[j]!='\0'; j++){
                    if(ori[i+j]==orip[j]) x++;
                }
                if(x == w){ 
                    printf("%s", mud);
                    i = i+w-1;
                }
		else{x=0;}
        }
      if(x == 0) printf("%c", ori[i]);
      else continue;
        
    }while(++i);
    printf("\n");
    return 0;
}
