#include <stdio.h>

long int x;

void main(){

    printf("Segundos: "); scanf("%ld", &x);
    printf("\nHoras: %ld\n", x/3600);
    printf("Minutos: %ld\n", (x%3600/60));
    printf("Segundos: %ld\n", x%60);

}