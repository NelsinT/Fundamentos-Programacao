#include <stdio.h>

#define N 4
#define SUDOKU_SIZE 4
#define MAX_SUDOKUS 100
#define MAX_NAME_LENGTH 50
typedef struct
{
    char nome[MAX_NAME_LENGTH];
    int sudoku[SUDOKU_SIZE][SUDOKU_SIZE];
    int completoSudoku; // Acabou em sucesso ou nao
    int sucesso;        // Acabou com sucesso
    int tentativas;     // Numero de tentativas
} ProblemaSudoku;