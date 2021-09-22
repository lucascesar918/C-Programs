#include <stdio.h>

void organizador(char);

void main(){
    char e;

    printf("Digite o fim\n"); scanf("%c",&e);
    puts("");
    organizador(e);

}

void organizador(char f){
    int i;

    for (i='a';i<=f;i++){
        printf("%c)\n",i);
    }
}