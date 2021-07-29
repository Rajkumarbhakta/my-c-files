#include <stdio.h>

int main()
{
	char str [1000];
	printf("enter a string:");
	scanf("%[^\n]*c",&str);
	printf("______________________________\n");
	puts(str);
	return 0;
}