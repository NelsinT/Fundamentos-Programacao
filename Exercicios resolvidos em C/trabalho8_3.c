#include <stdio.h>
#include <string.h>

//@aid 8.3
int meu_strlen(char string[]) {
    int tamanho = 0;
    while (string[tamanho] != '\0') {
        tamanho++;
    }

    return tamanho;
}
int main()
{
	//begin_inputs
	char str[100];	
    printf("Insira uma string\n");
    scanf("%s",str);
	//end_inputs
    int tamanhoS,tamanho;
    printf("string: %s",str);
    printf("tamanho(strlen): %d\n",strlen(str));
    printf("tamanho(minha funcao): %d",meu_strlen(str));
	
	return 0;
	
}