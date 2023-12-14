#include <stdio.h>

int main()
{

    FILE *fp;
    char nome[30];
    int cont;
    printf("Introduza o nome do ficheiro que pretende abrir \n");
    scanf("%s", nome);

    fp = fopen(nome, "r");

    if (fp == NULL)
    {
        printf("Ficheiro nao pode ser aberto ou nao existe");
    }
    else
    {
        int byte, cont = 0;
        while ((byte = fgetc(fp)) != EOF)
        {
            printf("%02X ", byte);
            cont++;
            if (cont == 10)
            {
                printf("\n");
                cont = 0;
            }
        }
        fclose(fp);
    }
}