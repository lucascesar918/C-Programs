#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *strLower(char *s){
    int i=0;

    while(s[i]!='\0'){
        s[i] = tolower(s[i]);
        i++;
    }
    s[i]='\0';

    return s;
}

void main(){
    char str[]="Kavinsky - Nightcall";

    printf("%s %ld\n",strLower(str),strlen(str));

}