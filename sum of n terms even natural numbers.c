#include <stdio.h>
int main()
{
	int a = 1, b, c = 0;

	printf("input number of terms:");
	scanf("%d", &b);
	printf("even numbers are\n");
	for (; a <= b; a++)
	{

		printf("%d\n", (a * 2));

		c += (a * 2);
	}
	printf("\nsum of even natural numbers upto %d terms : %d", b, c);
	return 0;
}
