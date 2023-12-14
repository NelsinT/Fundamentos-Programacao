#include <stdio.h>

//@aid 7.2
int main()
{
    // begin_inputs
    const int num_alunos = 7;
    int notas[] = {18, 10, 11, 8, 7, 19};
    // end_inputs

    float media = 0;
    int maior_nota = notas[0];
    int menor_nota = notas[0];

    printf("notas: ");
    for (int i = 0; i < num_alunos; ++i)
    {
        media += notas[i];
        printf("%d ", notas[i]);
        if (notas[i] > maior_nota)
        {
            maior_nota = notas[i];
        }

        if (notas[i] < menor_nota)
        {
            menor_nota = notas[i];
        }
    }
    media /= num_alunos;
    printf("\n");
    printf("media: %.1f - maior: %d - menor: %d", media, maior_nota, menor_nota);
    return 0;
}
