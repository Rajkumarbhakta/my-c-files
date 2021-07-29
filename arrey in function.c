#include <stdio.h>
int funk (int a [])
{
	for ( int i =0;i<4;i++)
	printf("the value at %d is %d\n",i,a [i]);
	return 0;
}
int main()
{
int a []={56,78,68,56};
funk (a);
}