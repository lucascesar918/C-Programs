#include <stdio.h>


int n,i,j;
char t;

void main(){

    printf("Digite um número: "); scanf("%d", &n);
    printf("Digite um caractere: "); scanf(" %c", &t);

    for (i=1;i<=n;i++){
        for (j=1;j<=n;j++){
            printf("%c",t);

        }
        puts("");
    }

}