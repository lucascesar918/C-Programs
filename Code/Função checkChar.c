#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int checkChar(char *s,char ch){
    int i=0;

    while (s[i]!=ch && s[i]!='\0'){
        i++;
    }

    if (i==strlen(s))
        return 0;

    else
        return 1;
}

void main(){
    char str[]="pearl jam - black",ch = 'a';

    printf("%s %d\n",str,checkChar(str,ch));
}