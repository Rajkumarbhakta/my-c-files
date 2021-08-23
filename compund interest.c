#include <stdio.h>
#include <math.h>
int main()
{
	float ci,r,p,t;
	printf("Enter Principal:");
	scanf("%f",&p);
	printf("Enter time period (in year):");
	scanf("%f",&r);
	printf("Enter interest rate (in year):");
	scanf ("%f",&t);
	ci=(p*(pow((1+r/100),t)));
	
	printf("compound interest=%.5f",ci);
	return 0;
}