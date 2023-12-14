#include <stdio.h>

//@aid 8.2
int main()
{
	//begin_inputs
	char str[20];
	printf("Introduza uma string \n");
	scanf("%s",str);
	//end_inputs
    printf("antes : %s\n",str);
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] >= 97 && str[i] <= 122) {
            str[i] = str[i] - 32    ;
        }
    }

	printf("depois: %s",str);
	return 0;
}