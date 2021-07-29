#include <stdio.h>

int main()
{
	int base1 = 0, base2 = 1, fivnum, i, num;
	printf(" enter the number how many fiv number you want: ");
	scanf("%d", &num);
	printf("Fibonacci sequence upto %d is:\n", num);
	for (i = 0; i < num; ++i)
	{
		fivnum = base1 + base2;
		printf("%d ", fivnum);
		base1 = base2;
		base2 = fivnum;
	}
	return 0;
}