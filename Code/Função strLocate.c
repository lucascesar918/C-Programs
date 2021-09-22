#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strLength(char *string){
    int i;

    for (i = 0 ; string[i]!=0 ; i++){}

    return i;
}

int strLocate(char *string,char ch){
    int i,res;
    for (i=res=0 ; string[i]!=0 ; i++){
        if (string[i]==ch){
            res = i;
            break;
        }
    }
    return res;
}

void main(){
    char name[] = "b1n4ry c0d1ng 1f y0u d34l w17h 17", ch = 'z';

    strLocate(name,ch)==0 ? printf("'%c' was not found in \"%s\"\n",ch,name) : printf("First '%c' in %d index of \"%s\"\n",ch,strLocate(name,ch),name);
}