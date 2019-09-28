#include <stdio.h>
int main(){
    int vert, hori, PAvert = 1, PAhori = 1, PBvert, PBhori, rodadas;
    int passo = -1, enconVert = -1, enconHori = -1;
    int PAsaiu = -1, PAsaiuV = -1, PAsaiuH = -1, PBsaiu = -1, PBsaiuV = -1, PBsaiuH = -1;
    int PAM, PBM;
    scanf("%d %d %d",  &hori, &vert, &rodadas);
    PBvert = vert;
    PBhori = hori;
    for(int i=1; i<=rodadas; i++){
        if ((PAhori == PBhori) && (PAvert == PBvert)){
            passo = i;
            enconHori = PAhori;
            enconVert = PBvert;
            printf("Encontraram-se na posicao (%d,%d) no passo %d\n", enconHori, enconVert, passo);
            return 0;
        }
        scanf("%d %d",&PAM, &PBM);
        //PA
        if(PAM == 1){
            PAvert+=1;
        }
        else if (PAM == 2){
            PAvert-=1;
        }
        else if (PAM == 3){
            PAhori+=1;
        }
        else if (PAM ==4){
            PAhori-=1;
        }
        //PB
        if(PBM == 1){
            PBvert+=1;
        }
        else if (PBM == 2){
            PBvert-=1;
        }
        else if (PBM == 3){
            PBhori+=1;
        }
        else if (PBM ==4){
            PBhori-=1;
        }
        //Comparações
        if((PAhori > hori || PAhori <= 0 || PAvert > vert || PAvert <= 0) && (PAsaiu == -1)){
            PAsaiu = i;
            PAsaiuH = PAhori;
            PAsaiuV = PAvert;
            printf("PA saiu na posicao (%d,%d) no passo %d\n", PAsaiuH, PAsaiuV, PAsaiu);
            return 0;
        }
        else if((PBhori > hori || PBhori <= 0 || PBvert > vert || PBvert <= 0) && (PBsaiu == -1)){
            PBsaiu = i;
            PBsaiuH = PBhori;
            PBsaiuV = PBvert;
            printf("PB saiu na posicao (%d,%d) no passo %d\n", PBsaiuH, PBsaiuV, PBsaiu);
            return 0;
        }
        if ((PAhori == PBhori) && (PAvert == PBvert)){
            passo = i;
            enconHori = PAhori;
            enconVert = PBvert;
            printf("Encontraram-se na posicao (%d,%d) no passo %d\n", enconHori, enconVert, passo);
            return 0;
        }
    }
    if((passo==-1) && ((PAsaiu == -1 ) && (PBsaiu == -1))){
        printf("Nao se encontraram\n");
    }
    return 0;
}