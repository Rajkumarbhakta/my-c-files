#include <stdio.h>
#define R 3
#define C 3

void spiralprint(int m, int n, int a[R][C])
{
	int i, k = 0, l = 0;

	while (k < m && l < n)
	{
		for (i = l; i < n; ++i)
		{
			printf("%d", a[k][i]);
		}
		k++;
		for (i = k; i < m; ++i)
		{
			printf("%d", a[i][n - 1]);
		}

		n--;

		if (k < m)
		{
			for (i = n - 1; i >= l; --i)
			{
				printf("%d", a[m - 1][i]);
			}

			m--;
		}
		if (l < n)
		{
			for (i = m - 1; i >= k; --i)
			{
				printf("%d", a[i][l]);
			}

			l++;
		}
	}
}
int main()
{
	int a[R][C];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("enter element %d , %d=", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	printf("    \n          you enter:");

	printf("\n");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d", a[i][j]);
		}
		printf("\n");
	}

	printf("the spiral result\n");

	spiralprint(R, C, a);

	return 0;
}