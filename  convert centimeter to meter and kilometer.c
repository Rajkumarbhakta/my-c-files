#include <stdio.h>

int main()
{
	float cm, km, m;
	printf("Enter the Length in Centimeter:");
	scanf("%f", &cm);
	km = cm / 100000;
	m = cm / 100;

	printf("%.2f cm = %.2f km\n", cm, km);
	printf("%.2f cm =%.2f m", cm, m);

	return 0;
}