#include <stdio.h>

int main()
{
	char str [1000];
	int i=0;
	
	printf(" Find the string length\n ");
	printf("____________________________________\n");
	printf("enter the string:\n");
	gets(str);
	
	while ( str[i]!='\0')
	i++;
	printf("the length of string is %d",i);
	
	return 0;
	
}