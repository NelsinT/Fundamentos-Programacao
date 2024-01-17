#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "jogar.c"
#include "adicionarsudoku.c"
#include "alterarnome.c"

int main()
{
    int escolhamenu;
    ProblemaSudoku sudokus[MAX_SUDOKUS];
    int numSudokus = 0;
    int totalGames;
    float percentagemteste;
    lerFicheiro("sudokus.txt", sudokus, &numSudokus);

    srand(time(NULL));

    do
    {
        printf("\nMENU:\n");
        printf("1. Adicionar Problema\n");
        printf("2. Alterar Nome do Problema\n");
        printf("3. Jogar Sudoku\n");
        printf("4. Consultas e Estatisticas\n");
        printf("5. Sair\n");
        printf("Escolha: ");
        scanf("%d", &escolhamenu);

        switch (escolhamenu)
        {
        case 1:
            adicionarNovoSudoku(sudokus, &numSudokus);
            break;
        case 2:
            alterarNomeSudoku(sudokus, numSudokus);
            break;
        case 3:
            playSudoku(sudokus, numSudokus);
            break;
        case 4:
            totalGames = 0;
            int j = 0;
            for (int i = 0; i < numSudokus; i++)
            {
                printf("Problema %d: Numero de vezes completo : %d tentativas: %d\n", j = j + 1, sudokus[i].completoSudoku, sudokus[i].tentativas);
                if (sudokus[i].completoSudoku == 1)
                {
                    totalGames++;
                }
            }
            printf("Numero de jogos %d", totalGames);
            break;
        case 5:
            printf("Programa encerrado\n");
            break;
        default:
            printf("Escolha invalida. Tente novamente.\n");
        }
    } while (escolhamenu != 5);
    return 0;
}   