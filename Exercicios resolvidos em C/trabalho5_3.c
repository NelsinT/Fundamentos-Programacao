    #include <stdio.h>
    //@cikey 881b2fef5aa168bc4407d29b62602a2d
    //@sid 2023142681
    //@aid 5.3
    int main() {
        //begin_inputs
        int numero;
        printf("Digite um teste inteiro positivo:");
        scanf("%d", & numero);
        //end_inputs
        int num_meio, num = 0;
        int temp_numero = numero;
        while (temp_numero > 0) {
            num_meio = temp_numero % 10;
            num = num * 10 + num_meio;
            temp_numero = temp_numero / 10;
        }
        printf("numero: %d - numero invertido: %d", numero, num);

        return 0;
    }