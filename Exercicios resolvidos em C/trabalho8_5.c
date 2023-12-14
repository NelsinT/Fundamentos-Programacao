#include <stdio.h>
#include <string.h>

//@aid 8.5
int binarioParaDecimal(char binario[]) {
    int tamanho = strlen(binario);
    int decimal = 0;
    int potencia = 1;

    for (int i = tamanho - 1; i >= 0; i--) {
        if (binario[i] == '0' || binario[i] == '1') {
            decimal += (binario[i] - '0') * potencia;
            potencia *= 2;
        } else {
            return -1;  // Caractere inválido encontrado
        }
    }

    return decimal;
}
int main()
{
	//begin_inputs
    char str[100];
    printf("Digite um número binário: ");
    scanf("%s", str);
	//end_inputs
	 for (int i = 0; i < strlen(str); i++) {
        if (str[i] != '0' && str[i] != '1') {
            printf("binario: %s - entrada invalida\n" ,str);
            return 1;  
        }
    }
    printf("binario: %s - " ,str);
    int resultado = binarioParaDecimal(str);

    if (resultado != -1) {
        printf("decimal: %d\n", resultado);
    } else {
        printf("binario: %s - entrada invalida " ,str);
    }

    return 0;
}