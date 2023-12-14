#include <stdio.h>
 
//@aid 4.5

int main(int argc, char
    const * argv[]) {
    //begin_inputs
    int A, B, C;
    printf("Introduza os três números inteiros!\n");
    scanf("%d%d%d", & A, & B, & C);
    //end_inputs
    int maior;
    maior = (((A >= B) && (A >= C)) ? A : ((B >= A) && (B >= C) ? B : C));
    printf("A: %d - B: %d - C: %d - maior: %d", A, B, C, maior);
}