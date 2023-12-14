#include <stdio.h>
#include <string.h>

//@aid 8.4
int main()
{
	//begin_inputs
    char str[100];
	printf("Introduza uma string \n");
	fgets(str, sizeof(str), stdin);
	//end_inputs
    int i=0,letras=0,numeros=0,outros=0;
    if (str[strlen(str)-1]== '\n'){
        str[strlen(str)-1] = '\0';
    }
    for (int i = 0; i < strlen(str); i++) {
        if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90)) {
            letras++;
        } else if (str[i] >= 48 && str[i] <= 57) {
            numeros++;
        } else {
            outros++;
        }
    }
    printf("string: %s\n",str);
    printf("letras: %d - numeros: %d - outros: %d",letras,numeros,outros);
	return 0;
}