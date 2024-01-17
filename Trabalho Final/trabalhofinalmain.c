#include <stdio.h>
#include "teste_sudoku.c"


int main()
{
    int escolhamenu;   
    
    do
    {
        printf("\nMENU:\n");
        printf("1. Adicionar Problema\n");
        printf("2. Alterar Nome do Problema\n");
        printf("3. Jogar Sudoku\n");
        printf("4. Consultas e Estatísticas\n");
        printf("5. Sair\n");
        printf("Escolha: ");
        scanf("%d", &escolhamenu);

        switch (escolhamenu)
        {
            case 1:
                //  Adicionar Problema
                break;
            case 2:
                //  Alterar Nome do Problema
                break;
            case 3:
                play();
                break;
            case 4:
                // Consultas e Estatísticas
                break;
            case 5:
                printf("Programa encerrado\n");
                break;
            default:
                printf("Escolha inválida. Tente novamente.\n");
        }
    } while (escolhamenu != 5);

    return 0;
}
