#include <stdio.h>

//@aid 4.2
 
 
int main (){
    //begin_inputs
    int A,B,C;
    printf("Digite 3 números inteiros \n ");
    scanf("%d %d %d ", &A,&B,&C);
    //end_inputs
    int maior=A;


if (B>maior){
    maior=B;
    }
   if (C>maior){
    maior=C;
    }


printf("A: %d - B: %d - C: %d - maior: %d",A,B,C,maior);
return 0;




    




}