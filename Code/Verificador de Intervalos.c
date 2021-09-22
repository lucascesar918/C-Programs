#include <stdio.h>

int Entre(int,int,int);

void main(){
    int x,min,max;

    printf("Insira o número, o início e o fim do intervalo\n"); scanf("%d %d %d", &x, &min, &max);

    Entre(x,min,max)==1 ? printf("O número %d está no intervalo [%d,%d]\n",x,min,max) : printf("O número %d não está no intervalo [%d,%d]\n",x,min,max);

}

int Entre(int x, int lim_inf, int lim_sup){

    if (lim_inf <= x && x <= lim_sup)
        return 1;

    else
        return 0;
}