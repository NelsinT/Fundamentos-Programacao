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
        printf("Nome do ficheiro: %s\n",nome); //teste1.txt
        char linha[1000];
        int k = 1;
        while (fgets(linha, sizeof(linha), fp) != NULL)
        {   
            printf("%02d: %s", k, linha);
            k = k + 1;
        }
        fclose(fp);
    }
    return 0;
}