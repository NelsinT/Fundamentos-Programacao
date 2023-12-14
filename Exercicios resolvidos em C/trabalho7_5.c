#include <stdio.h>

//@aid 7.5
int main()
{
    // begin_inputs
    int num_alunos, num_trabalhos;
    printf("Digite o número de alunos: ");
    scanf("%d", &num_alunos);
    printf("Digite o número de trabalhos: ");
    scanf("%d", &num_trabalhos);
    int notas[num_alunos][num_trabalhos];
    // end_inputs
    for (int k = 0; k < num_trabalhos; k++)
    {
        printf("T%d ", k + 1);
    }
    printf("Media");
    printf("\n");
    for (int i = 0; i < num_alunos; i++)
    {
        int soma = 0;
        for (int k = 0; k < num_trabalhos; k++)
        {
            printf("%2d ", notas[i][k]);
            soma += notas[i][k];
        }
        float media;
        media = (float)soma / num_trabalhos;
        printf("%.1f\n", media);
    }

    return 0;
}