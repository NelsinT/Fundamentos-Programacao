#include <stdio.h>
#include <string.h>

//@aid 8.1
int main()
{
	//begin_inputs
	char str1[20],str2[20];
	printf("Introduza dois strings \n");
	scanf("%s%s",str1,str2);
	//end_inputs
    printf("primeiro string: %s - segundo string: %s \n",str1,str2);
	char mid[20];
	strcpy(mid,str1);
	strcpy(str1,str2);
	strcpy(str2,mid);
    printf("apos a troca:\n");
	printf("primeiro string: %s - segundo string: %s",str1,str2);
	return 0;
}