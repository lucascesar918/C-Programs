#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *getString(char *s){
    int i=0,ch;
    while ((ch=getchar())!=10)
        s[i++]=ch;
    s[i]='\0';
    return s;
}

void main(){
    char str[1000];

    getString(str);
    printf("%s\n",str);
}