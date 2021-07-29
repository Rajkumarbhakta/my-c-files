#include <stdio.h>
int number (int n)
{
	if(n<=50)
	{
		printf("%d ",n);
		number(n+1);
	}
}

int main()
{
	number(1);
}