#include <stdio.h>

int checkNumber(char);
int checkLower(char);
int checkUpper(char);
int checkAlphabet(char);
int checkSpace(char);
int checkOdd(char);
int checkEven(char);

char toLower(char);
char toUpper(char);

void checkAll(char);

void main(){
    char c;

    printf(": "); scanf("%c",&c);
    checkAll(c);
}

int checkNumber(char c){
    if (c>=48 && c<=57)
        return 1;

    else
        return 0;
}

int checkLower(char c){
    if (c>=97 && c<=122)
        return 1;

    else
        return 0;
}

int checkUpper(char c){
    if (c>=65 && c<=90)
        return 1;
    
    else
        return 0;
}

int checkAlphabet(char c){
    if (c>=65 && c<=90 || c>=97 && c<=122)
        return 1;

    else
        return 0;
}

int checkSpace(char c){
    if (c==32)
        return 1;
    
    else
        return 0;
}

int checkOdd(char c){
    if (c%2!=0)
        return 1;
    
    else
        return 0;

}

int checkEven(char c){
    if (c%2==0)
        return 1;
    
    else
        return 0;
}

char toLower(char c){
    return c+32;
}

char toUpper(char c){
    return c-32;
}

void checkAll(char c){

    checkNumber(c)==1 ? printf("'%c' é um número\n",c) : printf("'%c' não é um número\n",c);
    if (checkNumber(c)==1 && checkOdd(c)==1)
        printf("'%c' é um número ímpar\n",c);
    if (checkNumber(c)==1 && checkEven(c)==1)
        printf("'%c' é um número par\n",c);
    checkAlphabet(c)==1 ? printf("'%c' é uma letra do alfabeto\n",c) : printf("'%c' não é uma letra do alfabeto\n",c);
    if (checkLower(c)==1 && checkAlphabet(c)==1){
        printf("'%c' está em minúsculo\n",c);
        printf("'%c' em maiúsculo é '%c'\n",c,toUpper(c));
    }
    if (checkUpper(c)==1 && checkAlphabet(c)==1){
        printf("'%c' está em maiúsculo\n",c);
        printf("'%c' em minúsculo é '%c'\n",c,toLower(c));
    }
    checkSpace(c)==1 ? printf("'%c' é um espaço\n",c) : printf("'%c' não é um espaço\n",c);

}