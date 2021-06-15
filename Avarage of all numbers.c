#include<stdio.h>
int main()
{
	int a=1,c;
	
	float d,b=0.0;
	printf("enter a number=");
	scanf("%d",&c);
	printf("\n \t\tThe numbers are");
	while(a<=c)
	{
		b+=a;

		printf("\n%d",a);
		a++;
		}
		printf("\n\tsum of the numbers=%8.2f",b);
	 
	  d=b/10.0;
	   printf("\n\t avarage of the numbers=%8.2f",d);
	}
	