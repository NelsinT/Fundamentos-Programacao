#include <stdio.h>
#include <string.h>
//@cikey 881b2fef5aa168bc4407d29b62602a2d
//@sid 2023142681
//@aid 8.6
void removeString(char string[], int posicao, int num_chars)
{
    int comprimento = strlen(string);
    if (posicao < 0 || posicao >= comprimento || num_chars < 0)
    {
        printf("Posição ou número de caracteres inválidos.\n");
        return;
    }
    for (int i = posicao; i < comprimento - num_chars; ++i)
    {
        string[i] = string[i + num_chars];
    }

    string[comprimento - num_chars] = '\0';
}

int main()
{
    // begin_inputs
    char str[100];
    int pos, num;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    // end_inputs
    int comprimento = strlen(str);
    if (comprimento > 0 && str[comprimento - 1] == '\n')
    {
        str[comprimento - 1] = '\0';
    }
    printf("antes : %s\n", str);
    scanf("%d", &pos);

    scanf("%d", &num);

    removeString(str, pos, num);

    printf("depois: %s", str);

    return 0;
}
