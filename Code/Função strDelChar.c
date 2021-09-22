#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *strDelChar(char *s,char ch){
    int i,j;

    for (i = 0, j = 0;s[i]!=0;i++){
        if (s[i]!=ch)
            s[j++] = s[i];
    }

    s[j] = 0;
    return s;
}

void main(){
    char str[]="bucetol";

    puts(str);
    strDelChar(str,'c');
    puts(str);
}