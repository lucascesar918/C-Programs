#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strLength(char *string){
    int i = 0;

    while (string[i]!='\0'){
        i++;
    }

    return i;
}

void main(){
    char v[] = "i can't change";

    printf("%d\n",strLength(v));
}