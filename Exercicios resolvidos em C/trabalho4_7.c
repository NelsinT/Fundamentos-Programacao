#include <stdio.h>

//@aid 4.7
int main(){
	//begin_inputs
	float valor_imovel;
	printf("Quanto custa o imovel ?\n");
	scanf("%f",&valor_imovel);
	//end_inputs
	float valor_final;
	if (valor_imovel<97064)
		valor_final = valor_imovel;
		else if (valor_imovel>97064 && valor_imovel<132774)
			valor_final = valor_imovel * 0.02 - 1941.28;
		else if	 (valor_imovel>132774 && valor_imovel<181034)
			valor_final = valor_imovel * 0.05 - 5924.50;
		else if	 (valor_imovel>181034 && valor_imovel<301688)
			valor_final = valor_imovel * 0.07 - 9545.18;
		else if (valor_imovel>301688 && valor_imovel<603289)
			valor_final = valor_imovel * 0.08 - 12562.06;
        else if (valor_imovel>603289 && valor_imovel<1050400)
            valor_final = valor_imovel * 0.06;
		else if (valor_imovel>1050400)
			valor_final = valor_imovel * 0.075;
    
    else;
    
	printf("valor do imovel: %.2f - IMT: %.2f",valor_imovel,valor_final);
	
	
	return 0;
}