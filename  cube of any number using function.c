#include <stdio.h>
int cube(int a)
{
	return a * a * a;
}
int main()
{
	int x;
	printf("Enter a number:");
	scanf("%d", &x);
	printf("\n Cube of %d is %d", x, cube(x));

	return 0;
}