#include <stdio.h>
int function(int *a, int *b)
{
	int temp = *a;
	*a = *a + *b;
	*b = temp - *b;
}
int main()
{
	int a = 20, b = 5;

	function(&a, &b);

	printf(" %d ", a);

	printf("%d", b);
}