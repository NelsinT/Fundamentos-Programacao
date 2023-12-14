#include <stdio.h>

//@aid 3.2
 
 int main (){
    //begin_inputs
     int horas,minutos,segundos; // declarar variaveis
     printf("Introduza as horas no formato hh:mm:ss \n"); // print á mensagem das horas 
     scanf("%d %d %d",&horas, &minutos , &segundos); // dar valor ás variaveis horas , minutos segundos ( é preciso do & antes)
    //end_inputs
     int total_horas; // declarar variaveis
     total_horas = 3600 * horas + 60 * minutos + segundos; // dar  valor a uma variavel choras para facilitar no print fazendo as contas todas certinhas
     printf("%d:%d:%d = %d segundos",horas,minutos,segundos,total_horas); // dar print aos valores por ordem como foi pedido %d é para associar á primeira variavel apos as "" 

 }