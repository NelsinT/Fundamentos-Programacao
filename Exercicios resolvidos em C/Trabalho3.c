#include <stdio.h>

//@aid 3.1
 
 
 int main (){
    //begin_inputs
     int numero1,numero2; //declarar as variaveis
printf("Introduza dois numeros \n"); // dar print á mensagem dos numeros
     scanf("%d%d", &numero1 , &numero2); // dar scan ao valor introduzindo anteriormente apenas se for inteiro e remeter o valor ás variaveis
    //end_inputs
   int soma,multiplicacao;
    soma = numero1 + numero2;
    multiplicacao = numero1 * numero2;

    printf("%d + %d = %d\n", numero1, numero2, soma); // %d significa printar um valor com a variavel que escolho primeiro 
    printf("%d * %d = %d", numero1, numero2, multiplicacao); //%d significa printar um valor com a variavel que escolho primeiro 
}



