#include <stdio.h>
#include <string.h>

void removeEspacosExtras(char *str) {
    int i, j;
    int tam = strlen(str);

    for (i = 0, j = 0; i < tam; i++) {
        if (str[i] != ' ' || (i > 0 && str[i - 1] != ' ')) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; 
}

int main() {
    char frase[1000]; 
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    // Remover espaços extras da string
    removeEspacosExtras(frase);

    // Mostrar a string resultante
    printf("Frase sem espacos extras: %s\n", frase);

    return 0;
}
