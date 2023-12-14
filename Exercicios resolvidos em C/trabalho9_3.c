#include <stdio.h>

int main() {
    int alunos, nota;
    char nome[100];
    char ficheiro[20];
    FILE * fp;
    printf("Introduza o numero de alunos:\n");
    scanf("%d", &alunos);
    printf("Introduza o nome do ficheiro: \n"); // teste2.txt
    scanf("%s",ficheiro);
    fp= fopen(ficheiro,"w");
    int i = 0;
    while (i < alunos) {
        printf("Introduza o nome do aluno: ");
        scanf("%s", nome);

        printf("Introduza a nota do aluno: ");
        scanf("%d", &nota);

        fprintf(fp, "%s %d\n", nome, nota);

        i++;
    }

    return 0;
}
