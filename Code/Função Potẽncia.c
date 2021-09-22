#include <stdio.h>

float root(float, int);

void main(){

    float b;
    int p;

    printf("Digite a base: "); scanf("%f",&b);
    printf("Digite a potência: "); scanf("%d",&p);

    printf("%f\n",root(b,p));


}

float root(float x,int n){

    float res;
    int i;

    for (i=1,res=1;i<=n;i++){
        res *= x;
    }

    return res;
}