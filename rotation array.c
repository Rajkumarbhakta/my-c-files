// C program to rotate an array by
// d elements
#include <stdio.h>
/*void getinput (int n,int arr[])
{

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
}

/* Function to left Rotate arr[] of size n by 1*/
void leftRotatebyOne(int arr[], int n);

/*Function to left rotate arr[] of size n by d*/
void leftRotate(int arr[], int d, int n)
{
	int i;
	for (i = 0; i < d; i++)
		leftRotatebyOne(arr, n);
}

void leftRotatebyOne(int arr[], int n)
{
	int temp = arr[0], i;
	for (i = 0; i < n - 1; i++)
		arr[i] = arr[i + 1];
	arr[n - 1] = temp;
}

/* utility function to print an array */
void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
}

/* Driver program to test above functions */

int main()
{
	int arr[100];
	int n,d,T;
	
	scanf("%d",&T);
	while(T>0)
	{
		scanf("%d", &n);
		scanf("%d", &d);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	leftRotate(arr, d, n);
	printArray(arr, n);
	T--;
	printf("\n");
	}
	return 0;
}

