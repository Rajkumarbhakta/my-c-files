#include <stdio.h>

int main()
{
	printf("Print Alphabet \n");
	printf("\n");
	char i = 'a';
	char j = 'A';

	printf("Upper case\n");
	while (j <= 'Z')
	{
		printf("%c  ", j);
		j++;
	}
	printf("\n");
	printf("Lower case\n");
	for (; i <= 'z'; i++)
	{
		printf("%c  ", i);
	}
	return 0;
}