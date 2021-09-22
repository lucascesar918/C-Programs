#include <stdio.h>

float salario[13];

void contagemMes();
void mostrarSalario();

void main(){
    contagemMes();
    mostrarSalario();
    printf("\nO salário anual do funcionário foi R$%.2f\n",salario[13]);
}

void contagemMes(){
    int i;

    for (i=1;i<sizeof(salario)/sizeof(float);i++){
        printf("Digite o salário do mês %d: ",i); scanf(" %f",&salario[i]);
        salario[sizeof(salario)/sizeof(float)] += salario[i];
    }
}

void mostrarSalario(){
    int i;

    for (i=1;i<sizeof(salario)/sizeof(float);i++){
        printf("O salário do mês %d foi de R$%.2f\n",i,salario[i]);
    }
}