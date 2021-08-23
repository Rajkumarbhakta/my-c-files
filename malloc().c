#include <stdio.h>
#include <stdlib.h>
#define NULL 0

int main()
{
	int *p, *table;
	int size;
	printf("\n what is the size of table?");
	scanf("%d", &size);
	printf("\n");
	if ((table = (int *)malloc(size * sizeof(int))) == NULL)
	{
		printf("No space value available\n");
		exit(1);
	}
	printf("\n address of the first byte is %x\n", table);
	printf("Enter table values:");
	for (p = table; p < table + size; p++)
		scanf("%d", p);
	printf("\n");
	for (p = table + size; p >= table; p--)
		printf("%d is stored at address %x\n", *p, p);

	return 0;
}
