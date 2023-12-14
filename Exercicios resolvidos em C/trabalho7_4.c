#include <stdio.h>


//@aid 7.4

void inverte(int x[], int tam) {
    int i, temp;
    for (i = 0; i < tam / 2; i++) {
        temp = x[i];
        x[i] = x[tam - i - 1];
        x[tam - i - 1] = temp;
    }
}

void imprime(int x[], int tam) {
    int i;
    for (i = 0; i < tam; i++) {
        printf("%2d ", x[i]);
    }
}

int main() {
    //begin_inputs
    int tamanho;
    printf("Introduza o tamanho da array ");
    scanf("%d", &tamanho);
    int meuVector[tamanho];
    for (int i = 0; i < tamanho; i++) {
        printf("Introduza um elemento %d: ", i + 1);
        scanf("%d", &meuVector[i]);
    }
    //end_inputs

    printf("antes : ");
    imprime(meuVector, tamanho);
    printf("\n");
    inverte(meuVector, tamanho);

    printf("depois: ");
    imprime(meuVector, tamanho);

    return 0;
}
