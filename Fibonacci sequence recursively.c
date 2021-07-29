#include <stdio.h>
void fiv(int n)
{
static int base1=0,base2=1,fivnum;
	if(n>0)
	{
		fivnum=base1+base2;
		base1=base2;
		base2=fivnum;
		printf("%d ",fivnum);
		fiv(n-1);
	}
}

int main()
{
	int num;
	printf("enter how many elements you want in Fibonacci sequence: ");
	scanf("%d",&num);
	fiv(num);
	return 0;
}