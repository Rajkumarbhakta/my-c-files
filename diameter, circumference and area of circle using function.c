#include <stdio.h>
double pi = 3.14;
/*C program to find diameter, circumference and area of circle using function*/
double diameter(double r)
{
	return 2 * r;
}
double circumference(double r)
{
	int c;
	c = 2 * pi * r;
	return c;
}
double area(double r)
{
	return pi * r * r;
}

int main()
{
	double radius;
	printf("Enter the radius of circle:");
	scanf("%lf", &radius);
	printf("\n Diameter of the circle is:%.2lf", diameter(radius));
	printf("\n Circumference of the circle is :%.3lf", circumference(radius));
	printf("\n Area of the circle is:%.3lf", area(radius));

	return 0;
}