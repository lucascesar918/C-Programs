#include <stdio.h>

int x, y;

void main(){

    printf("CALCULADORA DE INTEIROS\n");
    printf("Digite dois inteiros:\n"); scanf("%d %d",&x,&y); printf("\n");
    printf("%d + %d = %d\n", x,y,x+y);
    printf("%d - %d = %d\n", x,y,x-y);
    printf("%d - %d = %d\n", y,x,y-x);
    printf("%d * %d = %d\n", x,y,x*y);
    printf("%d / %d = %d\n", x,y,x/y);
    printf("%d %% %d = %d\n",x,y,(int)x%y);
}