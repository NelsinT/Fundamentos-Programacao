#include <stdio.h>

//@aid 3.1
 
int main (){
    //begin_inputs
     int numero1, numero2;
     printf("Introduza dois numeros: \n");
     scanf ("%d%d", &numero1, &numero2);
     //end_inputs
     int soma, multiplicacao;
     soma = numero1 + numero2;
     multiplicacao = numero1 * numero2;
     printf("%d + %d = %d\n", numero1, numero2, soma);
     printf("%d * %d = %d", numero1, numero2, multiplicacao);

 }

