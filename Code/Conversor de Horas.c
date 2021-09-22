#include <stdio.h>

char tipo;
int h;
unsigned long res;

void main(){
     
    printf("Horas: "); scanf("%d", &h);
    printf("Converter para? ('d' Décimos de Segundo / 'm' Minutos / 's' Segundos): ");
    scanf(" %c", &tipo);

    res = h;

    switch(tipo){

        case 'D' :

        case 'd' : 
            res = res * 10;
        
        case 's' :

        case 'S' :
            res = res * 60;

        case 'm' :

        case 'M' :
            res = res * 60;
        
        default :
            printf("Tipo Inválido!\n");
    }

    printf("%d Hora(s) equivalem a %ld %c\n", h, res, tipo);

}