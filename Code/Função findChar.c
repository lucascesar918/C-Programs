#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strLength(char *string){
    int i = 0;

    for (i = 0 ; string[i]!='\0' ; i++){}

    return i;
}

int findChar(char *string, char ch){
    int i = 0;

    for (i = 0 ; i<strLength(string) ; i++){
        if (string[i] == ch)
            return 1;
    }

    return 0;
}

void main(){
    char v[] = "the strangest placeEes";

    printf("%d\n",findChar(v,'t'));
}