#include <stdio.h>

int main()
{
	int a, b, gdc;
	printf("Enter two positive integer:");
	scanf("%d %d", &a, &b);
	for (int i = 1; i <= a && i <= b; ++i)
	{
		if (a % i == 0 && b % i == 0)
		{
			gdc = i;
		}
	}
	printf("\nGDC of %d and %d is %d", a, b, gdc);
	return 0;
}