#include <stdio.h>

int main()
{
	int a,b;
	printf("enter a number upto which number you want the cubes:");
	scanf("%d",&b);
	
	for(a=1;a<=b;a++)
	{
		printf("\nthe number is %d and the cube is %d",a,a*a*a);
		}
	
	}