#include <stdio.h>

#define N 4

 void printSudoku(int sudoku[N][N]) {
    printf("+---+---+---+---+\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("|");
            if (sudoku[i][j] == 0) {
                printf("   ");
            } else {
                printf(" %d ", sudoku[i][j]);
            }
        }
        printf("|\n");
        printf("+---+---+---+---+\n");
    }
}

int jogada_correta(int sudoku[N][N], int linha, int coluna, int num) {
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

int main() {
    int sudoku[N][N] = {
        {1, 0, 3, 0},
        {0, 0, 0, 2},
        {0, 1, 0, 0},
        {4, 0, 0, 0}
    };

    printf("Bem-vindo ao Sudoku!\n");
    printf("Preencha com numeros de 1 a 4.\n\n");

    int linha, coluna, num;
    while (1) {
        printSudoku(sudoku);
        printf("Insira linha (1 a 4), coluna (1 a 4) e numero (1 a 4): ");
        scanf("%d %d %d", &linha, &coluna, &num);

        if (linha < 1 || linha > N || coluna < 1 || coluna > N || num < 1 || num > N) {
            printf("Entrada inválida! Tente novamente.\n");
        } else {
            if (sudoku[linha - 1][coluna - 1] == 0 && jogada_correta(sudoku, linha - 1, coluna - 1, num)) {
                sudoku[linha - 1][coluna - 1] = num;
                printf("Numero inserido com sucesso!\n");
            } else {
                printf("Lugar ocupado ou número inválido! Tente novamente.\n");
            }
        }

        int completo = 1;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (sudoku[i][j] == 0) {
                    completo = 0;
                    break;
                }
            }
            if (!completo) {
                break;
            }
        }

        if (completo) {
            printf("\nConcluiste o Sudoku parabens!\n");
            break;
        }
    }

    return 0;
}
