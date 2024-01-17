#include <stdio.h>

#define N=4;

 void printSudoku(int sudoku[N][N]) {
    printf("    A   B   C   D\n");
    printf("  +---+---+---+---+\n");
    for (int i = 0; i < N; i++) {
        printf("%d ",i+1);
        for (int j = 0; j < N; j++) {
            printf("|");
            if (sudoku[i][j] == 0) {
                printf("   ");
            } else {
                printf(" %d ", sudoku[i][j]);
            }
        }
        printf("|\n");
        printf("  +---+---+---+---+\n");
    }
}