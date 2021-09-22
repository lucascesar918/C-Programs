#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strLength(char *string){
    int i;

    for (i = 0 ; string[i]!=0 ; i++){}

    return i;
}

int strPalindrome(char *string){
    int i;

    for (i = 0 ; i<strLength(string)-1 ; i++){
        if (string[i]!=string[strLength(string)-1])
            return 0;
        
        return 1;
    }
}

void main(){
    char str[] = "assa";

    strPalindrome(str)==1 ? printf("\"%s\" é palíndromo\n",str) : printf("\"%s\" não é palíndromo\n",str);
}