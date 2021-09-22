#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strLength(char *string){
    int i;

    for (i = 0 ; string[i]!=0 ; i++){}

    return i;
}

char *strSum(char *dest,char *orig){
    int i=0,len = strLength(dest);

    while(dest[len] = orig[i]){
        i++;len++;
    }

    return dest;
}

void main(){
    char v[50] = "ola \0",x[50] = "mundo\0";

    printf("%s\n", strSum(v,x));
}