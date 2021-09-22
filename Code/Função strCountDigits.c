#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strLength(char *string){
    int i;

    for (i = 0 ; string[i]!=0 ; i++){}

    return i;
}

int strCountDigits(char *string){
    int i,res;
    for (i=res=0 ; string[i]!=0 ; i++){
        if (string[i]>=48 & string[i]<=57)
            res++;
    }
    return res;
}

void main(){
    char name[] = "b1n4ry c0d1ng 1f y0u d34l w17h 17";

    printf("%d digits in \"%s\"\n",strCountDigits(name),name);
}