#include <stdio.h>
 //@cikey 881b2fef5aa168bc4407d29b62602a2d
  //@sid 2023142681
  //@aid 5.1
int main() {
    //begin_inputs
    int num_final;
    printf("Introduza numeros inteiros positivos.\n");
    scanf("%d", &num_final);
 	//end_inputs
    int x;
    int soma =0;
    for (x=1 ; x <= num_final ; x++){
    soma = soma + x ;
    }
    printf("num_final: %d - soma: %d",num_final,soma);
}