#include <stdio.h>

//@aid 4.6
int main()
{
	//begin_inputs
	int dia_semana,idade;
	printf("Introduza o dia da semana (1 = domingo)\n");
	scanf("%d",&dia_semana);
	printf("Introduza a idade \n");
	scanf("%d",&idade);
	//end_inputs
	int d;
    float precodia,descontoidade,precofinal,desconto;
    if (idade>=0 || idade)
        if (idade>=65 )
		    d=1;  
	    else if(idade>=13 && idade <=20)
		    d=2;
        else if (idade<=12)
            d=3;
        else;
	else
        d=4;
	switch(d){
		case 1:
		descontoidade = 0.40 ;
		break;
		case 2:
		descontoidade = 0.25 ;
		break;
        case 3:
        descontoidade = 0.40 ;
        break;
        case 4:
        descontoidade = 0;
	}
	    
        switch(dia_semana){
        	case 1:
                printf("dia da semana: domingo");
                precodia= 10*0.5;
                desconto= precodia * descontoidade ;
            break;
            case 2:
                printf("dia da semana: segunda-feira");
                precodia = 10 ;
                    desconto = descontoidade  ;
            break;   
            case 3:
                printf("dia da semana: terca-feira");
                precodia = 10 ;
                desconto = descontoidade  ;
            break;
            case 4:
                printf("dia da semana: quarta-feira");
                precodia = 10 ;
                desconto = descontoidade  ;
            break;
            case 5:
                printf("dia da semana: quinta-feira");
                precodia= 10*0.5;
                desconto= precodia * descontoidade;
            break;
               case 6:
                printf("dia da semana: sexta-feira");
                precodia = 10 ;
                desconto = descontoidade  ;
            break;
            case 7:
                printf("dia da semana: sabado");
                precodia = 10 ;
                desconto = precodia*descontoidade  ;
            break;




    }
    precofinal = precodia - desconto;
	printf(" -idade: %d - preco do ingresso: %.2f euros",idade,precofinal);
	return 0;
}