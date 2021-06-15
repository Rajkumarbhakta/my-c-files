#include<stdio.h>
int main()
{
	int a,b;
	printf("Input the number (Table to be calculated) : ");
	scanf("%d",&b);
	a=1;
 
  while(a<=b)
	{
		printf("\n %d × %d = %d",b,a,b*a);
		a++;
		}
	
	}