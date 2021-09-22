#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lastCharPos(char *s,char ch){
    int i=0,pos=0;

    while(s[i]!=0){
        if (s[i]==ch)
            pos=i;
        
        i++;
    }

    if(pos==0)
        return -1;
    
    else
        return pos;
}

void main(){
    char str[]="acerto miseravi",ch = 'a';

    printf("%s '%c' %d\n",str,ch,lastCharPos(str,ch));
}