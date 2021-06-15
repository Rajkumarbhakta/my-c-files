#include <stdio.h>

int main()
{
	int arr1[5];
	int arr2[5];
	int arr3[5];
	int n, mm = 1, ctr = 0;
	int i, j;


	printf("\n\nCount total number of duplicate elements in an array:\n");
	printf("---------------------------------------------------------\n");


	printf("Input %d elements in the array :\n", n);
	for (i = 0; i < 5; i++)
	{
		printf("element - %d : ", i);
		scanf("%d", &arr1[i]);
	}

	for (i = 0; i < 5; i++)
	{
		arr2[i] = arr1[i];
		arr3[i] = 0;
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{

			if (arr1[i] == arr2[j])
			{
				arr3[j] = mm;
				mm++;
			}
		}
		mm = 1;
	}

	for (i = 0; i < 5; i++)
	{
		if (arr3[i] == 2)
		{
			ctr++;
		}
	}
	printf("The total number of duplicate elements found in the array is: %d \n", ctr);

	printf("\n\n");
}
