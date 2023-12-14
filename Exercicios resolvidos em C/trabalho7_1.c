#include <stdio.h>


//@aid 7.1
int main()
{
	//begin_inputs
	const int tamanho = 10;	 
	int dados [tamanho];
		
	for (int i = 0; i < tamanho; i++) {	
		printf("Digite 10 numeros: ");
		scanf("%d",&dados[i]);
    }
	//end_inputs
	float media=0;
	printf("numeros introduzidos: ");
	for (int i=0;i<tamanho;i++) {	
		media += dados[i];		
		printf("%d ",dados[i]);
	}	
	printf(" - media: %.1f",media/tamanho);
	return 0;
}