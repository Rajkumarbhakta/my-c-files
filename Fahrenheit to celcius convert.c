#include <stdio.h>

int main()
{
	float c, f;
	printf("Enter temperature in Fahrenheit:");
	scanf("%f", &f);
	c = (f - 32) * 5 / 9;
	printf("%.2f °F = %.2f °C", f, c);
	return 0;
}