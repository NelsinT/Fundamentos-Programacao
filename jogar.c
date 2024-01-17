#include <stdio.h>
#include <stdlib.h>
#include "structure.c"

int jogoscompletos = 0;



int jogada_correta(int sudoku[N][N], int linha, int coluna, int num)
{
    for (int x = 0; x < N; x++)
        if (sudoku[linha][x] == num || sudoku[x][coluna] == num)
            return 0;

    int startlinha = linha - linha % 2;
    int startcoluna = coluna - coluna % 2;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            if (sudoku[i + startlinha][j + startcoluna] == num)
                return 0;

    return 1;
}

void playSudoku(ProblemaSudoku sudokus[], int numSudokus)
{
    ProblemaSudoku *selectedSudoku = &sudokus[rand() % numSudokus];

    int sudoku[N][N];

    for (int i = 0; i < SUDOKU_SIZE; i++)
    {
        for (int j = 0; j < SUDOKU_SIZE; j++)
        {
            sudoku[i][j] = (*selectedSudoku).sudoku[i][j];
        }
    }

    printf("Bem-vindo ao Sudoku!\n");

    printf("Preencha com numeros de 1 a 4.\n\n");

    int linha, num, coluna;
    char cancelar;
    int entradasInvalidas = 0;
    int jogadaValida = 0;
    char comando;
    (*selectedSudoku).tentativas++;
    while (1)
    {
        printf("    1   2   3   4\n");
        printf("  +---+---+---+---+\n");

        for (int i = 0; i < N; i++)
        {
            printf("%d ", i + 1);
            for (int j = 0; j < N; j++)
            {
                printf("|");
                if (sudoku[i][j] == 0)
                {
                    printf("   ");
                }
                else
                {
                    printf(" %d ", sudoku[i][j]);
                }
            }
            printf("|\n");
            printf("  +---+---+---+---+\n");
        }

        printf("Insira linha (1 a 4), coluna (1 a 4), numero (1 a 4), R para remover o numero colocado ( coluna,linha) ou 'S' para sair: ");
        int resultado = scanf("%d %d %d", &linha, &coluna, &num);

        if (resultado != 3)
        {
            scanf(" %c", &comando);
            if (comando == 'S' || comando == 's')
            {
                printf("Saiste do sudoku!\n");
                break;
            }

            else if (comando == 'R' || comando == 'r')
            {
                printf("Para remover diga a linha e a coluna ");
                int linha_remover, coluna_remover; // Adicione variáveis separadas para remover
                scanf("%d %d", &linha_remover, &coluna_remover);

                if (linha_remover >= 1 && linha_remover <= N && coluna_remover >= 1 && coluna_remover <= N)
                {
                    if (sudoku[linha_remover - 1][coluna_remover - 1] != 0)
                    {
                        
                        if ((*selectedSudoku).sudoku[linha_remover - 1][coluna_remover - 1] == 0)
                        {
                            sudoku[linha_remover - 1][coluna_remover - 1] = 0;
                            printf("Numero removido com sucesso!\n");
                        }
                        else
                        {
                            printf("Nao é possível remover este numero! Tente novamente.\n");
                        }
                    }
                    else
                    {
                        printf("Espaço vazia! Tente novamente.\n");
                    }
                }
                else
                {
                    printf("Tente novamente.\n");
                }
            }

            else
            {
                printf("Entrada invalida! Tente novamente.\n");
                entradasInvalidas++;
                if (entradasInvalidas == 2)
                {
                    printf("Nao conseguiste realizar o Sudoku. Tente novamente mais tarde.\n");
                    (*selectedSudoku).completoSudoku = 1;
                    (*selectedSudoku).sucesso = 0;
                    break;
                }
                continue;
            }
        }

        coluna--;
        jogadaValida = jogada_correta(sudoku, linha - 1, coluna, num);
        if (coluna < 0 || coluna >= N || linha < 1 || linha > N || num < 1 || num > N || jogadaValida == 0)
        {
            printf("Jogada invalida! Tente novamente.\n");
            entradasInvalidas++;
            if (entradasInvalidas == 2)
            {
                printf("Nao conseguiste realizar o Sudoku. Tente novamente mais tarde.\n");
                break;
            }
        }
        else
        {
            if (sudoku[linha - 1][coluna] == 0)
            {
                sudoku[linha - 1][coluna] = num;
                printf("Numero inserido com sucesso!\n");
            }
            else
            {
                printf("Lugar ocupado! Tente novamente.\n");
            }
        }

        int completo = 1;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (sudoku[i][j] == 0)
                {
                    completo = 0;
                    break;
                }
            }
            if (!completo)
            {
                break;
            }
        }
        if (completo)
        {
            printf("\nConcluiste o Sudoku, parabens!\n");
            (*selectedSudoku).completoSudoku = 1;
            (*selectedSudoku).sucesso = 1;
            break;
        }
    }
}