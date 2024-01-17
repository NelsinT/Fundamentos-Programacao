#include <stdio.h>

#define N 4
#define SUDOKU_SIZE 4
#define MAX_SUDOKUS 100
#define MAX_NAME_LENGTH 50



void lerFicheiro(char *nomeFicheiro, ProblemaSudoku sudokus[], int *numSudokus)
{
    FILE *ficheiro;
    ficheiro = fopen(nomeFicheiro, "r");

    if (ficheiro)
    {
        while (*numSudokus < MAX_SUDOKUS && fscanf(ficheiro, "%s", sudokus[*numSudokus].nome) != EOF)
        {
            for (int i = 0; i < SUDOKU_SIZE; i++)
            {
                for (int j = 0; j < SUDOKU_SIZE; j++)
                {
                    fscanf(ficheiro, "%d", &sudokus[*numSudokus].sudoku[i][j]);
                }
            }
            sudokus[*numSudokus].completoSudoku = 0 ;
            sudokus[*numSudokus].sucesso = 0 ;
            sudokus[*numSudokus].tentativas = 0 ;
            (*numSudokus)++;
        }
        fclose(ficheiro);
    }
}


void escreverFicheiro(char *nomeFicheiro, ProblemaSudoku sudokus[], int numSudokus)
{
    FILE *ficheiro;
    ficheiro = fopen(nomeFicheiro, "w");

    if (ficheiro)
    {
        for (int s = 0; s < numSudokus; s++)
        {
            fprintf(ficheiro, "%s\n", sudokus[s].nome);
            for (int i = 0; i < SUDOKU_SIZE; i++)
            {
                for (int j = 0; j < SUDOKU_SIZE; j++)
                {
                    fprintf(ficheiro, "%d ", sudokus[s].sudoku[i][j]);
                }
                fprintf(ficheiro, "\n");
            }
        }
        fclose(ficheiro);
    }
}



void adicionarNovoSudoku(ProblemaSudoku sudokus[], int *numSudokus)
{
    if (*numSudokus < MAX_SUDOKUS)
    {
        printf("Adicionando um novo sudoku:\n");
        printf("Digite o nome do sudoku: ");
        scanf("%s", sudokus[*numSudokus].nome);

        printf("Digite o sudoku no formato %dx%d (0 para espacos em branco):\n", SUDOKU_SIZE, SUDOKU_SIZE);
        for (int i = 0; i < SUDOKU_SIZE; i++)
        {
            for (int j = 0; j < SUDOKU_SIZE; j++)
            {
                scanf("%d", &sudokus[*numSudokus].sudoku[i][j]);
            }
        }

        (*numSudokus)++;

        // Write the new Sudoku to the file
        escreverFicheiro("sudokus.txt", sudokus, *numSudokus);
        printf("Problema adicionado com sucesso ! \n");
    }
    else
    {
        printf("Limite máximo de sudokus atingido.\n");
    }
}

