#include <stdio.h>

//@aid 4.4
int main(){
	//begin_inputs
	int nota;
	printf("Introduza a nota do aluno \n");
	scanf("%d",&nota);
	//end_inputs
    int x;

    if (nota>=10 && nota <=20)
            if (nota>=10 && nota <=12)
                x=1;
            else if (nota>=13 && nota <=15)
                x=2;
            else if (nota>=16 && nota <=18)
                x=3;
            else if (nota>=19 && nota <=20)
                x=4;
            else;
                        
    else                     
        x=5;
    switch(x){
        case 1:
            printf("nota: %d - Regular",nota);
            break;
        case 2:
            printf("nota: %d - Bom",nota);
            break;
        case 3:
            printf("nota: %d - Muito bom",nota);
            break;
        case 4:
            printf("nota: %d - Excelente",nota);
            break;
        case 5:
            printf("nota: %d - Nota invalida",nota);
            break;      
    }
	return 0;
}            