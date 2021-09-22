#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *strSetN(char *s,char ch, int n){
    int i=0;

    while(i!=n && s[i]!=0){
        s[i] = ch;
        i++;
    }
    i = strlen(s);
    s[i] = 0;

    return s;
}

void main(){
    char str[]="bucetal";

    printf("%s ",str);
    printf("%s\n",strSetN(str,'o',12));
}