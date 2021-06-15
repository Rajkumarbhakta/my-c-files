#include <stdio.h>
#include <conio.h>
int main()
{
	int a[5], b[5];
	printf("enter 5 number:");
	for (int i = 0; i < 5; i++)
		scanf("%d", &a[i]);
	printf("___________________________\n");
	for (int i = 0; i < 5; i++)
	{
		b[i] = a[i];
		printf("   %d", b[i]);
	}

	return 0;
}
