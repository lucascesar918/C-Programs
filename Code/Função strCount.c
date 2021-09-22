#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strLength(char *string){
    int i;

    for (i = 0 ; string[i]!=0 ; i++){}

    return i;
}

int strCount(char *string,char ch){
    int i,res;
    for (i=res=0 ; string[i]!=0 ; i++){
        if (string[i]==ch)
            res++;
    }
    return res;
}

void main(){
    char name[] = "Lucas César Freitas", ch = 'a';

    printf("%d times in %s\n",strCount(name,ch),name);
}