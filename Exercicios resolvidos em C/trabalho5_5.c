#include <stdio.h>

//@aid 5.5
int main(int argc, char const *argv[])
{
    // begin_inputs
    int num_dias, primeiro;
    printf("Introduza quantos dias tem o mês:\n");
    scanf("%d", &num_dias);
    printf("Introduza o primeiro dia do mês sendo domingo-1 e sábado-7\n");
    scanf("%d", &primeiro);
    // end_inputs
    int mes_dia = 1;
    printf(" D  S  T  Q  Q  S  S\n");

    for (int x = 1; x < primeiro; x++)
    {
        printf("   ");
    }

    for (int x = primeiro; x <= 7 && mes_dia <= num_dias; x++)
    {
        printf("%2d ", mes_dia++);
    }

    printf("\n");

    while (mes_dia <= num_dias)
    {
        for (int x = 1; x <= 7 && mes_dia <= num_dias; x++)
        {
            printf("%2d ", mes_dia++);
        }
        printf("\n");
    }

    return 0;
}
