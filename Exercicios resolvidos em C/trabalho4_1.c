#include <stdio.h>

//@aid 4.1

int main () {    

        //begin_inputs
    float salario;
    printf("Qual o seu salario? \n");
    scanf("%f" ,&salario);
    //end_inputs
    float imposto;
    
    if (salario <= 800)  {
        imposto = 0;
        printf("salario: %.2f - imposto: isento", salario);

    } else if (salario <2000)  {
        imposto = salario *0.20;
        printf("salario: %.2f - imposto: %.2f", salario , imposto);
    }else{
        imposto = salario *0.40;
        printf("salario: %.2f - imposto: %.2f", salario , imposto);
        }
    
    

    return 0;

}