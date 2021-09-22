#include <stdio.h>

void org(int,int);

void main()
{
    int ex,end;
    printf("Ex\n"); scanf("%d %d",&ex,&end);
    
    org(ex,end);
}

void org(ex,end){
    int i;
    
    for (i=1;i<=end;i++){
        printf("%d.%d\n",ex,i);
    }

}