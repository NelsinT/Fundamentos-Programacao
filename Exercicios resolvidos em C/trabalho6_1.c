#include <stdio.h>

//@aid 6.1

int menor(int a, int b, int c)
{
    if (a <= b && a <= c)
    {
        return a;
    }
    else if (b <= a && b <= c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    // begin_inputs
    int A, B, C;
    printf("Introduza 3 numeros inteiros \n");
    scanf("%d%d%d", &A, &B, &C);
    // end_inputs
    int conta;
    conta = menor(A, B, C);
    printf("A: %d - B: %d - C: %d - menor: %d", A, B, C, conta);
    return 0;
}