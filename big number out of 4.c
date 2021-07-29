#include <stdio.h>

int big_number(int a, int b, int c, int d)
{
	int e;

	if (a > b && a > c && a > d)
		e = a;
	else if (b > a && b > c && b > d)
		e = b;
	else if (c > a && c > b && c > d)
		e = c;
	else
		e = d;
	return e;
}

int main()
{
	int m, n, o, p;
	printf("enter 1st number:");
	scanf("%d", &m);
	printf("enter 2nd number:");
	scanf("%d", &n);
	printf("enter 3rd number:");
	scanf("%d", &o);
	printf("enter 4th number:");
	scanf("%d", &p);

	printf("the biggest number is\n");
	printf("       %d", big_number(m, n, o, p));

	return 0;
}