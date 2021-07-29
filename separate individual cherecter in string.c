#include <stdio.h>

int main()
{
	char a[100];
	int i=0;
	printf("enter a string:");
	gets(a);
	printf("the cherecter in the string are:\n");
	while (a[i] !='\0')
	{
	printf("%c  ",a[i]);
	i++;
	}
	return 0; 
}