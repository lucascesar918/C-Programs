#include <stdio.h>
#include <stdlib.h>

#define NUMQUANT 50

void readTable(int table[]){
    int i;

    for (i=1;i<=NUMQUANT;i++){
        table[i-1] = i;
    }
}

void writeTable(int table[]){
    int i,j,s = 0;

    for (i=0;i<NUMQUANT/10;i++){

        for (j=0;j<10;j++,s++){
            printf("%3d ",table[s]);
        }
        puts("");
    }
}

void main () {
    int tabela[NUMQUANT];

    readTable(tabela);
    writeTable(tabela);
}