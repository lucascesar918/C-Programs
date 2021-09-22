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

int strCompareLower(char *s1,char *s2){
    int i=0;

    s1 = strLower(s1);
    s2 = strLower(s2);

    while (s1[i]==s2[i] && s2[i]!=0){
        i++;
    }

    return s1[i] - s2[i];
    
}

void main(){
    char str[]="bucetol",str2[] = "bucetol";

    if (strCompareLower(str,str2)>0)
        puts(">0");
    
    if (strCompareLower(str,str2)<0)
        puts("<0");

    if (strCompareLower(str,str2)==0)
        puts("0");
}