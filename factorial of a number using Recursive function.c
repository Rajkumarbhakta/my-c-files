#include <stdio.h>
#include <conio.h>
int factorial(int number)
{
	if (number == 1 || number == 0)
	{
		return 1;
	}
	else
	{
		return (number * factorial(number - 1));
	}
}
int main()
{
	int a;
	printf(" enter a number: ");
	scanf("%d", &a);
	printf("factorial of %d is %d", a, factorial(a));
	return 0;
}