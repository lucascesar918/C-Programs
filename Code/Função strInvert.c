#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strLength(char *string){
    int i;

    for (i = 0 ; string[i]!=0 ; i++){}

    return i;
}

char *strInvert(char *string,char *store){
    int i;

    for (i = 0 ; i<strLength(string) ; i++){
        store[i] = string[strLength(string)-i-1];
    }

    return store;
}

void main(){
    char str[1000] = "ichi ni san yon 5 roku nana 8 9",scnd[1000];

    printf("%s\n%s\n",str,strInvert(str,scnd));

}