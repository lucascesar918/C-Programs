#include <stdio.h>
#include <stdlib.h>


int strCompare(char *string,char *compare){
    int i=0;

    while (string[i]==compare[i] && compare[i]!=0){
        i++;
    }

    return string[i] - compare[i];
    
}

void main(){
    char str[] = "Oi", scnd[] = "oi";

    if (strCompare(str,scnd)>0)
        puts(">0");
    
    if (strCompare(str,scnd)<0)
        puts("<0");

    if (strCompare(str,scnd)==0)
        puts("0");
}