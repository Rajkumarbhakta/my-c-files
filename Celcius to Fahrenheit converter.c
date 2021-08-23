#include <stdio.h>

int main()
{
	double c, f;
	printf("enter temperature in celcius:");
	scanf("%lf", &c);
	f = (c * 9 / 5) + 32;
	printf("%.2lf °C = %.2lf °F", c, f);
	return 0;
}