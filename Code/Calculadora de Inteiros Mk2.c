#include <stdio.h>

char op;
int x,y;

void main(){

    printf("Qual operação deseja realizar? (+,-,/,%%,*) "); scanf("%d %c %d", &x,&op,&y);
    
    /*op = getchar();
    printf("Digite os dois inteiros\n"); scanf("%d %d", &x,&y);*/

    switch(op){

        case '+' : 
            printf("%d + %d = %d\n", x, y,x+y);
            break;

        case '-' :
            printf("%d - %d = %d\n%d - %d = %d\n", x,y,x-y,y,x,y-x);
            break;

        case '/' :
            printf("%d / %d = %d\n%d / %d = %d\n", x,y,x/y,y,x,y/x);
            break;

        case '%' :
            printf("%d %% %d = %d\n%d %% %d = %d\n", x,y,x%y,y,x,y%x);
            break;
        case '*' :
            printf("%d * %d = %d\n", x,y,x*y);
            break;

        default :
            printf("Operação inválida!\n");           
    }

}