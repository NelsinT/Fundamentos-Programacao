#include <stdio.h>

#define N 4
#define SUDOKU_SIZE 4
#define MAX_SUDOKUS 100
#define MAX_NAME_LENGTH 50

void alterarNomeSudoku(ProblemaSudoku sudokus[], int numSudokus)
{
    char nomeAntigo[MAX_NAME_LENGTH];
    char novoNome[MAX_NAME_LENGTH];

    printf("Digite o nome atual do sudoku que deseja alterar: ");
    scanf("%s", nomeAntigo);

    int encontrado = 0;
    for (int s = 0; s < numSudokus; s++)
    {
        if (strcmp(sudokus[s].nome, nomeAntigo) == 0)
        {
            printf("Digite o novo nome para o sudoku: ");
            scanf("%s", novoNome);

            // Update the name
            strncpy(sudokus[s].nome, novoNome, MAX_NAME_LENGTH - 1);
            sudokus[s].nome[MAX_NAME_LENGTH - 1] = '\0'; 

            printf("Nome alterado com sucesso!\n");

            encontrado = 1;
            break;
        }
    }

    if (encontrado)
    {

        escreverFicheiro("sudokus.txt", sudokus, numSudokus);
    }
    else
    {
        printf("Sudoku com o nome '%s' nao encontrado.\n", nomeAntigo);
    }
}