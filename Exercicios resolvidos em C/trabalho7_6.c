#include <stdio.h>

//@aid 7.6
#define NUM_ALUNOS 5
#define NUM_TRABALHOS 3
void imprime(int a[][NUM_TRABALHOS]);
float mediaTurma(int a[][NUM_TRABALHOS]);
void mediaTrabalhos(int a[][NUM_TRABALHOS], float medias[]);

int main() {
    	//begin_inputs
    int num_alunos, num_trabalhos;
    printf("Digite o número de alunos: ");
    scanf("%d", & num_alunos);
    printf("Digite o número de trabalhos: ");
    scanf("%d", & num_trabalhos);
    int notas[num_alunos][num_trabalhos];
    //end_inputs
    for (int k = 0; k < NUM_TRABALHOS; k++) {
    printf("T%d ", k + 1);
    }
    printf("\n");
    imprime(notas);
    printf("Media da turma:%.1f\n", mediaTurma(notas));
    float medias[NUM_TRABALHOS];
    mediaTrabalhos(notas, medias);
    printf("Media dos trabalhos: ");
    for (int i = 0; i < NUM_TRABALHOS; i++) {
        printf("%.1f ", medias[i]);
    }

    return 0;
}

void imprime(int a[][NUM_TRABALHOS]) {
    for (int i = 0; i < NUM_ALUNOS; i++) {
        for (int k = 0; k < NUM_TRABALHOS; k++) {
            printf("%2d ", a[i][k]);
        }
        printf("\n");
    }
}

float mediaTurma(int a[][NUM_TRABALHOS]) {
    float soma = 0;
    for (int i = 0; i < NUM_ALUNOS; i++) {
        for (int k = 0; k < NUM_TRABALHOS; k++) {
            soma += a[i][k];
        }
    }
    return soma / (NUM_ALUNOS * NUM_TRABALHOS);
}

void mediaTrabalhos(int a[][NUM_TRABALHOS], float medias[]) {
    for (int k = 0; k < NUM_TRABALHOS; k++) {
        float soma = 0;
        for (int i = 0; i < NUM_ALUNOS; i++) {
            soma += a[i][k];
        }
        medias[k] = soma / NUM_ALUNOS;
    }
}
