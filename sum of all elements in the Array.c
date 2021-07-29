#include <stdio.h>

int sum (int a [],int n)
{
	int b=0;
	for(int i=0;i<n;++i)
	{
		b+=a[i];
	}
	return b;
}

int main()
{
	int x [1000];
	int p;
	printf("enter n:");
	scanf ("%d",&p);
	
	for(int i=0;i<p;i++)
	{
		printf ("enter element no %d :",i);
			scanf("%d",&x[i]);
	}

printf("sum of all elements %d",sum(x,p));

}