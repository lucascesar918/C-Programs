#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strSet(char *s,char ch){
    int i=0;
    while(s[i]!=0){
        s[i] = ch;
        i++;
    }
    s[i] = '\0';

    return s;
}

void main(){
    char str[]="cinco",c='s';

    printf("%s\n",strSet(str,c));
}