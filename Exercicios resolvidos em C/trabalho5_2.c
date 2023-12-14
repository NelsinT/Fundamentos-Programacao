#include <stdio.h>
 
//@aid 5.2


int main() {
    //begin_inputs
    int inicio, fim;

    printf("Introduza dois numeros inteiros \n");
    scanf("%d%d", & inicio, & fim);
    //end_inputs
    int produto, i, bool;
    printf("de %d a %d - ", inicio, fim);
    bool = 0;
    produto = 1;

    if (inicio > fim) {
        printf("intervalo invalido");
    } else {
        printf("impares: ");

        for (int i = inicio; i <= fim; i++) {
            if (i % 2 != 0) {
                produto *= i;
                printf("%d ", i);
                bool = 1;
            }
        }

        if (bool == 0) {
            printf("sem impares");
        } else {
            printf("produto: %d", produto);
        }
    }

    return 0;
}