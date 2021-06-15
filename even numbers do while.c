#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j;
	printf("enter your number:");
	scanf("%d",&j);
	i=2;
	do
	{
		
		printf("\n %d",i);
		i+=2;
		}while(i<=j);
    return 0;
	}