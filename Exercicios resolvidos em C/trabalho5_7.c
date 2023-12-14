#include <stdio.h>

//@aid 5.7
int main()
{
    // begin_inputs
    int limite;
    printf("Introduza o limite: ");
    scanf("%d", &limite);
    // end_inputs
    int i, x, soma;

    if (limite > 10000)
    {
        printf("limite: %d - limite invalido", limite);
        return 1; // Saída com código de erro
    }

    printf("limite: %d\n", limite);
    for (i = 2; i <= limite; i++)
    {
        soma = 1;
        for (x = 2; x <= i / 2; x++)
        {
            if (i % x == 0)
            {
                soma += x;
            }
        }

        if (soma == i)
        {
            printf("numero perfeito: %d - soma divisores: %d\n", i, soma);
        }
    }
    printf("fim de procura");
    return 0;
}