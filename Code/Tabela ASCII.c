#include <stdio.h>


int i;

void main(){

    printf("NÚMERO     ASCII\n");

    for (i=1;i<=255;i++)
        printf("%3d        %2c\n", i,(char)i);

}