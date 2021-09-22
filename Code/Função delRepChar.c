#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int strCountChar(char *s,char ch){
    int i=0,c=0;

    while(s[i]!=0){
        if(s[i]==ch)
            c++;
        i++;
    }

    return c;
}

char *strDelChar(char *s,char ch){
    int i,j;

    for (i = 0, j = 0;s[i]!=0;i++){
        if (s[i]!=ch)
            s[j++] = s[i];
    }

    s[j] = 0;
    return s;
}

char *delRepChar(char *s){
    int i=0;

    while(s[i]!=0){
        if(strCountChar(s,s[i])==1){
            strDelChar(s,s[i]);
            i--;
        }
        i++;
    }

    return s;
}

void main(){
    char str[]="SOMEBODY TO LOVE";

    printf("%s\n",delRepChar(str));
}