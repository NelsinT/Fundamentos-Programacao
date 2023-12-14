    #include <stdio.h>
 //@cikey 881b2fef5aa168bc4407d29b62602a2d
    //@sid 2023142681
    //@aid 5.6
    int main() {
        // begin_inputs
        int desconto_dia, num_noites;
        float preco_normal;
        printf("Introduza o preco normal , o desconto do dia e o numero de noites \n");
        scanf("%f%d%d", & preco_normal, & desconto_dia, & num_noites);
        // end_inputs
        float preco_atual = preco_normal;
        float preco_total = 0;

        for (int i = 1; i <= num_noites; i++) {

            if (i > 1) {

                float desconto = desconto_dia * preco_normal / 100.0;

                if (preco_atual - desconto < preco_normal / 2.0) {
                    desconto = preco_atual - preco_normal / 2.0;
                }

                preco_atual -= desconto;
            }

            printf("noite %d: %.2f\n", i, preco_atual);

            preco_total += preco_atual;
        }

        printf("total: %.2f\n", preco_total);

        return 0;
	}