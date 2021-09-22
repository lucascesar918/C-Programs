#include <stdio.h>

void main(){

    forma(20,'@');
}

void forma(int n, char ch){

    int i,j;

    if (n%2!=0){
        for (i=3+1;i<=n;i+=2){
            for (j=1;j<=i;j++){
                printf("%c",ch);
            }
            puts("");
        }
    }

    else{
        for (i=3;i<=n;i+=2){
            for (j=1;j<=i;j++){
                printf("%c",ch);
            }
            puts("");
        }
    }

    for (i=n-1;i>=3;i-=2){
        for (j=1;j<=i;j++){
            printf("%c",ch);
        }
        puts("");
    }

}