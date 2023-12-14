#include <stdio.h>


//@aid 7.3

int main()
{
    //begin_inputs
    int num_alunos = 10;
    int notas[10] = {7, 5, 8, 6, 9, 7, 4, 8, 10, 6};
    //end_inputs

    int histograma[21] = {0};
    
    for (int i = 0; i < num_alunos; ++i) {
        if (notas[i] >= 0 && notas[i] <= 20) {
            histograma[notas[i]]++;
        }
    }

    for (int i = 20; i >= 0; --i) {
        printf("nota: %2d - alunos: %d\n", i, histograma[i]);
    }

    return 0;
}