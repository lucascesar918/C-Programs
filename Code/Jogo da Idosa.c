#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char velha[3][3] = {{' ',' ',' '},
                    {' ',' ',' '},
                    {' ',' ',' '}};

void printArray(char array[3][3]){
    int i,c;

    for (i = 0 ; i<3 ; i++){
        for (c = 0 ; c<3 ; c++){
            printf("%c ", array[i][c]);
        }
        puts("");
    }
}

int checkWin(char array[3][3]){
    int i,c = 0;

    for (i = 0 ; i<3 ; i++){
        if (array[i][0] == array[i][1] & array[i][1] == array[i][2] & array[i][0] != ' ')
            return 1;
        else
            c += 1;
    }

    for (i = 0 ; i<3 ; i++){
        if (array[0][i] == array[1][i] & array[0][i] == array[2][i] & array[0][i] != ' ')
            return 1;
        else
            c += 1;
    }

    if (array[0][0] == array[1][1] & array[2][2] == array[0][0] & array[0][0] != ' ')
        return 1;
    else
        c += 1;

    if (array[0][2] == array[1][1] & array[2][0] == array[0][2] & array[0][2] != ' ')
        return 1;
    else
        c += 1;
    
    if (c==4)
        return 0;

}

int checkDraw(char array[3][3]){
    int i,c;

    for (i = 0 ; i<3 ; i++){
        for (c = 0 ; c<3 ; c++){
            if (array[i][c]==' ')
                return 0;
        }
        puts("");
    }

    return 1;
}

int checkPos(char array[3][3],int pos){

    switch(pos){
            case 1 : 
                if (array[0][0] == ' ')
                    return 0;
                
                else
                    return 1;
                
            case 2 : 
                if (array[0][1] == ' ')
                    return 0;
                
                else
                    return 1;
            
            case 3 : 
                if (array[0][2] == ' ')
                    return 0;
                
                else
                    return 1;
            
            case 4 : 
                if (array[1][0] == ' ')
                    return 0;
                
                else
                    return 1;
            
            case 5 : 
                if (array[1][1] == ' ')
                    return 0;
                
                else
                    return 1;

            case 6 : 
                if (array[1][2] == ' ')
                    return 0;
                
                else
                    return 1;
            
            case 7 : 
                if (array[2][0] == ' ')
                    return 0;
                
                else
                    return 1;

            case 8 : 
                if (array[2][1] == ' ')
                    return 0;
                
                else
                    return 1;

            case 9 : 
                if (array[2][2] == ' ')
                    return 0;
                
                else
                    return 1;
    }
}

void readPos(char array[3][3],int pos,char ch){
    switch(pos){
            case 1 : 
                if (checkPos(array,pos) == 0)
                    array[0][0] = ch;
                
            case 2 : 
                if (checkPos(array,pos) == 0)
                    array[0][1] = ch;
            
            case 3 : 
                if (checkPos(array,pos) == 0)
                    array[0][2] = ch;
    
            
            case 4 : 
                if (checkPos(array,pos) == 0)
                    array[1][0] = ch;

            
            case 5 : 
                if (checkPos(array,pos) == 0)
                    array[1][1] = ch;


            case 6 : 
                if (checkPos(array,pos) == 0)
                    array[1][2] = ch;

            
            case 7 : 
                if (checkPos(array,pos) == 0)
                    array[2][0] = ch;


            case 8 : 
                if (checkPos(array,pos) == 0)
                    array[2][1] = ch;


            case 9 : 
                if (checkPos(array,pos) == 0)
                    array[2][2] = ch;
                

    }
}

void main(){
    int pos;
    char player;

    srand(time(NULL));

    if (rand()%2==0)
        player = 'X';

    else
        player = 'O';

    while(checkWin(velha)==0 & checkDraw(velha)==0){
        if (player=='X')
            player = 'O';
        
        else
            player = 'X';

        printf("Jogador %c faça sua jogada: ", player); scanf(" %d",&pos);
        while (pos<1 | pos>9 | checkPos(velha,pos)==1){
            printf("Jogada inválida!!!\n");
            printf("Jogador %c faça sua jogada: ", player); scanf(" %d",&pos);
        }
        readPos(velha,pos,player);
        printArray(velha);
    }

    if (checkDraw(velha)==1)
        printf("DEU VELHA!!!\n");

    else
        printf("JOGADOR '%c' GANHOU!!!\n",player);
}