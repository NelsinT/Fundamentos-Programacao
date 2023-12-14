#include <stdio.h>

// Tamanho do Sudoku
#define N 4

// Função para imprimir o tabuleiro do Sudoku
void printSudoku(int sudoku[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%2d ", sudoku[i][j]);
        }
        printf("\n");
    }
}

// Função para verificar se é seguro colocar o número em uma determinada célula
int isSafe(int sudoku[N][N], int row, int col, int num) {
    // Verifica se o número não está na mesma linha ou coluna
    for (int x = 0; x < N; x++)
        if (sudoku[row][x] == num || sudoku[x][col] == num)
            return 0;

    // Verifica se o número não está no mesmo bloco 2x2
    int startRow = row - row % 2;
    int startCol = col - col % 2;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            if (sudoku[i + startRow][j + startCol] == num)
                return 0;

    return 1;
}

// Função para resolver o Sudoku usando backtracking
int solveSudoku(int sudoku[N][N]) {
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            if (sudoku[row][col] == 0) {
                for (int num = 1; num <= N; num++) {
                    if (isSafe(sudoku, row, col, num)) {
                        sudoku[row][col] = num;
                        if (solveSudoku(sudoku))
                            return 1;
                        sudoku[row][col] = 0; // Se a atribuição não levar à solução, backtrack
                    }
                }
                return 0; // Não há número válido para esta célula, backtrack
            }
        }
    }
    return 1; // Tabuleiro resolvido
}

int main() {
    int sudoku[N][N] = {
        {1, 0, 3, 0},
        {0, 0, 0, 2},
        {0, 1, 0, 0},
        {4, 0, 0, 0}
    };

    printf("Sudoku inicial:\n");
    printSudoku(sudoku);
    
    if (solveSudoku(sudoku)) {
        printf("\nSudoku resolvido:\n");
        printSudoku(sudoku);
    } else {
        printf("\nNão foi possível resolver o Sudoku.\n");
    }

    return 0;
}
