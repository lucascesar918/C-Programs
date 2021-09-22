#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strSeparate(char *s,char ch){
    int i=strlen(s);
    s[2*i] = s[i];

    for (; i>=0 ; i--){
        s[i*2] = s[i];
        s[2*i+1] = ch;
    }

    return s;
}

void main(){
    char str[1000] = "ola", c = '_';

    printf("%s\n",strSeparate(str,c));
}