#include <stdio.h>

int c,i,max;

void main(){

    max = 10;

    for (c=1;c<=max;c++){
        for (i=1;i<=c;i++){
            printf("%d ",i);
        }
        puts("");
    }

    printf("Pressione <ENTER> para fazer o inverso");
    getchar();
    for (c=max;c!=0;c--){
        for (i=1;i<=c;i++){
            printf("%d ",i);
        }
        puts("");
    }
}