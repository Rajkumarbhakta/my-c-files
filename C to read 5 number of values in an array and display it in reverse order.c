#include <stdio.h>
#include <conio.h>
int main()
{
	int a[5];
	for (int i=0;i<5;i++)
	scanf("%d",&a[i]);
	printf("___________________________\n");
	for (int i=4;i>=0;i--)
	printf("%d\n",a[i]);
	return 0; 
}