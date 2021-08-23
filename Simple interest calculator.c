#include <stdio.h>

int main()
{
	int option;
	double i, p, r, t;
	printf("What you want to calculate.\n");
	printf("press 1 for principal.\n press 2 for interest rate.\n press 3 for time period.\n press 4 for simple interest.\n");
	scanf("%d", &option);
	if (option == 1)
	{
		printf("Enter interest:");
		scanf("%lf", &i);
		printf("Enter interest rate(in year):");
		scanf("%lf", &r);
		printf("Enter time period(in year):");
		scanf("%lf", &t);
		p = (i * 100) / (r * t);
		printf("Principal=%.5lf", p);
	}
	else if (option == 2)
	{
		printf("Enter Principal=");
		scanf("%lf", &p);
		printf("Enter interest:");
		scanf("%lf", &i);
		printf("Enter time period(in year):");
		scanf("%lf", &t);
		r = (i * 100) / (p * t);
		printf("Interest rate(in year)=%.5lf", r);
	}
	else if (option == 3)
	{
		printf("Enter Principal=");
		scanf("%lf", &p);
		printf("Enter interest:");
		scanf("%lf", &i);
		printf("Enter interest rate(in year):");
		scanf("%lf", &r);
		t = (i * 100) / (p * r);
		printf("Time period (in year)=%.5lf", t);
	}
	else if (option == 4)
	{
		printf("Enter Principal=");
		scanf("%lf", &p);
		printf("Enter interest rate(in year):");
		scanf("%lf", &r);
		printf("Enter time period(in year):");
		scanf("%lf", &t);
		i = (p * r * t) / 100;

		printf("Simple interest = %.5lf", i);
	}

	return 0;
}