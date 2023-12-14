#include <stdio.h>

int main (){

//@aid 3.5
//begin_inputs
    float raio,altura; //variavel numero real
    printf("Insira o raio\n"); //printzinha normal
    scanf("%f",&raio);  //dar valor real á variavel raio
    printf("Insira a altura\n"); //mais uma printzinha
    scanf("%f",&altura); // dar valor real á variavel altura

//end_inputs
    
    float volume,pi; //variavel numero rea
    pi= 3.14159; // dar valor a pi
    volume=pi*raio*raio*altura; // conta do volume com o pi
    printf("Volume (r = %.2f, a = %.2f) = %.3f m3",raio,altura,volume); //%.2f= indicar um variavel de numero real com 2 casas decimais e assim sucessivamente
}