/* Write a C program to check whether a triangle can be formed by the given value for the angles. */

#include <stdio.h>
int main()
{
	int a, b, c, d;
	printf("enter three  angle of triangle:");
	scanf("%d %d %d", &a, &b, &c);
	d = a + b + c;
	if (d == 180)

		printf("the triangle is possible");
	else
		printf("triangle is not possible");
	return 0;
}