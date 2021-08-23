#include <stdio.h>

int main()
{
	int a, b;
	printf("Enter two numbers:");
	scanf("%d %d", &a, &b);
	int max;
	max = (a > b) ? a : b;
	while (1)
	{
		if (max % a == 0 && max % b == 0)
		{
			printf("\nLMC of %d and %d is %d.", a, b, max);
			break;
		}
		++max;
	}

	return 0;
}