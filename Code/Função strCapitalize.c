#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *getString(char *s){
    int i=0;
    char ch;

    while((ch=getchar())!=10)
        s[i++] = ch;

    s[i]=0;

    return s;
}

char *strCapitalize(char *s){
    int i;

    if(s[0]>=97 && s[0]<=122)
        s[0] -= 32;
    for (i=0;s[i]!=0;i++){
        if(s[i]==32 && s[i+1]>=97 && s[i+1]<=122)
            s[i+1] -= 32;
    }

    return s;
}


void main(){
    char str[1000];
    
    getString(str);
    printf("%s\n",strCapitalize(str));
}