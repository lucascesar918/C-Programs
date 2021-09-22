#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char strCopy(char *string,char *dest){
    int i = 0;

    while (dest[i] = string[i])
        i++;

    return *dest;
}

void main(){
    char v[50];

    strCopy("Hello, world!\0",v);
    printf("%s\n",v);
}