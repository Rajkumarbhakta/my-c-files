#include <stdio.h>
#include <conio.h>
int main()
{
	int a[5], b = 0;
	for (int i = 0; i < 5; i++)
		scanf("%d", &a[i]);
	printf("___________________________\n");
	for (int i = 0; i < 5; i++)
	{
		b = b + a[i];
	}
	printf("%d\n", b);

	return 0;
}