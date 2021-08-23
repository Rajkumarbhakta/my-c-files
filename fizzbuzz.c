#include <stdio.h>

void fizzbuzz(int r)
{
	for (int i = 1; i <= r; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("%d = fizzbuzz", i);
		else if (i % 3 == 0)
			printf("%d = fizz", i);
		else if (i % 5 == 0)
			printf("%d = buzz", i);
		else
			printf("%d", i);
		printf("\n");
	}
}
int main()
{
	int range;
	printf("enter the range:");
	scanf("%d", &range);
	printf("\n");
	fizzbuzz(range);

	return 0;
}