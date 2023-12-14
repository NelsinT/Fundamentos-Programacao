#include <stdio.h>


//@aid 3.3

    int main(){
        //begin_inputs
        int total_segundos;
        printf("Introduza os segundos \n");
        scanf("%d", &total_segundos); // scan do total segundos e atribuir variavel
        //end_inputs
        int horas,minutos,segundos; // definir variaveis
        horas= total_segundos /3600 ; // horas = seg/3600
        minutos = (total_segundos % 3600) /60 ; // vou arranjar o resto dos segundos da conta do total / 3600 e vou dividir por 60
        segundos= total_segundos % 60 ; // vou ao resto do total segundos e divido por 60 para me dar os segundos

        printf("%d segundos = %d:%d:%d",total_segundos,horas,minutos,segundos); //printar td 


    }