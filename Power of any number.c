#include <stdio.h>
#include <math.h>
int main()
{
	double base,expo,power;
	
	printf("enter the base:");
	scanf("%lf",& base);
	printf("enter the exponent:");
	scanf("%lf",&expo);
	power=pow (base,expo);
	
	printf("%0.2lf ^ %0.2lf = %0.2lf",base,expo,power);
	return 0; 
}