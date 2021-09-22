#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countAlpha(char *s){
    int i=0,c=0;

    while (s[i]!='\0'){
        if (s[i]>=65 && s[i]<=90 | s[i]>=97 && s[i]<=122)
            c++;
        i++;
    }

    return c;
}

void main(){
    char str[]="acerto miseravi";

    printf("%s %d\n",str,countAlpha(str));
}