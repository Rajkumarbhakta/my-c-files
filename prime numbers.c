#include<stdio.h>
int main()
{
	int i, j;
	i = 2;
	while (i <= 100)
	{
		for (j = 2; j <= i - 1; j++)
			if (i % j == 0)
			{
				break;
			}
		if (i == j)
			printf("\n%d", i);
		i++;
	}
}
