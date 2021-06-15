#include <stdio.h>
main()
{
	int i, j, k, l, m, t = 1;
	printf("Input number of rows : ");
	scanf("%d", &l);
	k = l + 4 - 1;
	for (i = 1; i <= l; i++)
	{
		for (m = k; m >= 1; m--)
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++)
			printf("%d ", t++);
		printf("\n");
		k--;
	}
}
