#include <stdio.h>

//@aid 5.4
int main() {
    //begin_inputs
    int A, B;
    printf("Introduza dois numeros inteiros \n ");
    scanf("%d%d", & A, & B);
    //end_inputs
    int MDC, armazem;
    printf("A: %d - B: %d - ",A,B);
    while (B != 0) {
            armazem = A % B;
            A = B;
            B = armazem;
    }
        MDC = A;
    
    printf("MDC: %d",MDC);
    return 0;
}