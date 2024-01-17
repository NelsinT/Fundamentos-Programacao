#include <stdio.h>

int** lerFicheiro(char* name)
{
    int z = 4;
    int i = 0;
    int k = 0;
    int c;


//reserva de memoria z numero de posicoes sizeof(int*) tamanho do type a guardar
    int** sudoku = (int**)malloc(z * sizeof(int*));

    for (int i = 0; i < z; ++i) {
        sudoku[i] = (int*)malloc(z * sizeof(int));
    }

    FILE *file;
    file = fopen(name, "r");
    if (file)
    {
        while ((c = getc(file)) != EOF)
        {
            if ((c - '0') != -38 )
            {
                sudoku[i][k] = c - '0';
                if (k < 3)
                {
                    k = k + 1;
                }
                else
                {
                    i = i + 1;
                    k = 0;
                }
            }
        }
    }
    fclose(file);
    return sudoku;
}
