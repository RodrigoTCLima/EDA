#include <stdio.h>
int main(){
    int dia, dia2, mes, mes2, ano, ano2;
    scanf("%d %d %d %d %d %d", &dia, &mes, &ano, &dia2, &mes2, &ano2);
    if ((dia > 0) && (dia <= 31) && (dia2 > 0) && (dia2 <= 31) && (mes > 0 ) && (mes2 > 0 ) && (mes <= 12) && (mes2 <= 12) && (ano >= 0)  && (ano2 >= 0) && (ano <= 9999) && (ano2 <= 9999)){
        int dia3, mes3, ano3;
        dia3 = dia2 - dia;
        mes3 = mes2 - mes;
        ano3 = ano2 - ano;
        if(dia3 < 0){
            dia3 = dia3 + 31;
            mes3-=1;
        }
        if(mes3 < 0 ){
            mes3+=12;
            ano3-=1;
        }
        printf("%d\n%d\n%d\n", ano3, mes3, dia3);

    }
    else{
        printf("data invalida\n");
    }
    return 0;

}