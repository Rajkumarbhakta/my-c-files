#include<stdio.h>
int main()
{
	int a=1,b=0,c;
	printf("enter a number=");
	scanf("%d",&c);
	printf("\n \t\tThe numbers are");
	while(a<=c)
	{
		b+=a;
//		printf("\n The numbers are");
		printf("\n%d",a);
		a++;
		}
		printf("\n\tsum of the numbers=%d",b);
	
	}
	