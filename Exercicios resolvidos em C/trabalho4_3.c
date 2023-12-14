#include <stdio.h>

//@aid 4.3
int main(){
	//begin_inputs
	int horas ,minutos , segundos ;
	printf("Introduza uma hora no formado hh:mm:ss\n");
	scanf("%d:%d:%d",&horas, &minutos, &segundos);
	//end_inputs

    if (horas >=24 || horas < 0)  
        printf("%.2d:%d:%d : hora invalida",horas,minutos,segundos);
             else if (minutos>=60 || minutos < 0)  
                    printf("%.2d:%d:%d : hora invalida",horas,minutos,segundos);
                          else if (segundos>=60 || segundos < 0)  
                                  printf("%.2d:%d:%d : hora invalida",horas,minutos,segundos); 
    else 
    printf("%.2d:%d:%d : hora valida",horas,minutos,segundos);
    


	return 0;
}            