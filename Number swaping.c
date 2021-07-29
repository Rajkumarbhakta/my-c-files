#include <stdio.h>
void swap (int*x,int*y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int main()
{
	int a,b;
	printf("enter a=");
	scanf("%d",&a);
	printf("enter b=");
	scanf("%d",&b);
	
	int *m=&a;
	int *n=&b;
	swap(m,n);
	printf("after swaping\n");
	printf(" a=%d ",a);
	printf("b=%d",b);
	return 0; 
}