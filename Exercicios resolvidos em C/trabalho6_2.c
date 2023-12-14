#include <stdio.h>

//@aid 6.2

int testaTriangulo(float a, float b, float c)
{
    if (a < b + c && b < a + c && c < a + b)
        return 1;
    else 
        return 0;
}
int main()
{
    // begin_inputs
    float ladoA, ladoB, ladoC;
    printf("Coloque um valor para o a b e c ");
    scanf("%f %f %f", &ladoA, &ladoB, &ladoC);

    // end_inputs
    int teste1 = testaTriangulo(ladoA,ladoB,ladoC);


    printf("Com os lados %.1f, %.1f e %.1f ",ladoA , ladoB , ladoC);
    
  if (teste1 == 1)
        printf("podemos formar um triangulo.");
    else
        printf("nao podemos formar um triangulo.");
    return 0;
}