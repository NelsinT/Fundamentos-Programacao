#include <stdio.h>


//@aid 3.4
int main (){
    //begin_inputs
    float graus_f ; // variavel numero real
    printf("Insira uma temperatura em graus Fahrenheit para converter para graus Celcius\n"); // printzinha classica
    scanf("%f",&graus_f); // dar valor real á variavel graus_f
    //end_inputs
     float graus_c ; //variavel numero real 
    graus_c=(graus_f - 32) / 1.8 ; //continhas que o sor deu 
    printf("%.2fº F = %.1fº C" ,graus_f , graus_c) ; //%.2f= indicar um variavel de numero real com 2 casas decimais e assim sucessivamente




}