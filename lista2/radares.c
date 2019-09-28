#include <stdio.h>
double calculaVelocidadeMedia(int tA, int tB, double distancia){
    double t = tB-tA;
    t=t/3600;
    double VM = distancia/t;
    return VM;
}
int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima){
    double velocidadeMedia = calculaVelocidadeMedia(tA, tB, distancia);
    if(velocidadeMaxima >= velocidadeMedia) return 0;
    else{
        return 1;
    }
}