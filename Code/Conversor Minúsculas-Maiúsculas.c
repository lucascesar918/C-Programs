#include <stdio.h>

int convertUpper(char);

void main(){
    char ch;
    
    while (1){
        printf("Digite um caractere: "); scanf(" %c", &ch);

        while (ch<=96 || ch>=123){
            printf("Caractere inválido\n");
            printf("Digite um caractere: "); scanf(" %c", &ch);
        }

        printf("%c\n",convertUpper(ch));
    }
}

int convertUpper(char c){
    return c-32;
}