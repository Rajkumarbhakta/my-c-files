#include <stdio.h>
#include <conio.h>
int fib_recursive(int n)
{
	if (n == 1 || n == 2)
		return n - 1;
	else
		return fib_recursive(n - 1) + fib_recursive(n - 2);
}
int fib_itretive(int n)
{
	int a = 0, b = 1;
	for (int i = 1; i = n - 1; i++)
	{
		b = a + b;
		a = b - a;
	}
	return a;
}

int main()
{
	int a;
	printf(" enter a number: ");
	scanf("%d", &a);
	printf("%d\n", fib_itretive(a));
	printf("%d\n", fib_recursive(a));

	return 0;
}