#include <stdio.h>

int main()
{
	double i, p, r, t;
	printf("Enter Principal=");
	scanf("%lf", &p);
	printf("Enter interest rate(in year):");
	scanf("%lf", &r);
	printf("Enter time period:");
	scanf("%lf", &t);
	i = (p * r * t) / 100;

	printf("Simple interest = %.5lf", i);

	return 0;
}