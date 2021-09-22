#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NUMQUANT 50
#define NUMWIN 5
#define MINBET 6

int tabela[NUMQUANT], quantApostados, winNumbers[NUMWIN];

void setBets(){
    printf("Quantos números deseja apostar? (Mínimo seis): "); scanf(" %d",&quantApostados);
    while (quantApostados<MINBET | quantApostados>NUMQUANT-30){
        printf("Valor inválido!!!\n");
        printf("Quantos números deseja apostar? (Mínimo seis): "); scanf(" %d",&quantApostados);
    }
}

void readTable(int table[]){
    int i;

    for (i=1 ; i<=NUMQUANT ; i++){
        table[i-1] = i;
    }
}

void writeTable(int table[]){
  int j,s=0;

  for (; s<NUMQUANT ;){

    for (j=0 ; j<10 ; j++,s++){
      printf("%3d ",table[s]);
    }
    puts("");
  }
}

int checkValue(int x,int toCheck[]){
    int i;

    for (i=0 ; i<quantApostados ; i++){
      if (x==toCheck[i]){
        return 1;
      }
    }

    return 0;
}

void writeLine(char ch, int times){
    int i;
    puts("");
    for (i=0 ; i<times ; i++){
        printf("%c",ch);
    }
    puts("");
}

void writeArray(int array[]){
    int i;

    for (i = 0 ; i<quantApostados ; i++){
        printf("%3d ",array[i]);
    }
}

void randArray(int array[],int times){
    int i;

    for (i = 0 ; i<quantApostados ; i++){
        array[i] = rand() % NUMQUANT+1;
    }
}

void writeWins(int array0[],int array1[]){
    int i,c;

      for (c = 0 ; c<quantApostados ; c++, i++){
          if (checkValue(array0[c],array1)==1){
              printf("Você acertou o número %2d\n",array0[c]);
           }

            else{
               printf("O número %2d não foi escolhido\n",array0[c]);
           }
      }
}

void main(){
    

    srand(time(NULL));
    readTable(tabela);
    writeTable(tabela);
    setBets();
    
    int apostados[quantApostados];
    
    randArray(apostados,quantApostados);
    randArray(winNumbers,NUMWIN);

    writeLine('-',quantApostados*4);
    writeArray(apostados);
    writeLine('-',quantApostados*4);
    puts("");

    writeWins(apostados,winNumbers);

}