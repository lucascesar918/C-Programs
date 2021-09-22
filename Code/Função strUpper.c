#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *strUpper(char *s){
    int i=0;

    while(s[i]!='\0'){
        s[i] = toupper(s[i]);
        i++;
    }
    s[i]='\0';

    return s;
}

void main(){
    char str[]="pearl jam - black";

    printf("%s %ld\n",strUpper(str),strlen(str));

}