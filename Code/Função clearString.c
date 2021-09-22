#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *clearString(char *s){
    s[0] = 0;

    return s;
}

void main(){
    char str[]="acerto miseravi";

    puts(str);
    printf("%s\n",clearString(str));
}