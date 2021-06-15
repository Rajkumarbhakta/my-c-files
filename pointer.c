#include <stdio.h>
#include <conio.h>
int main()
{
	int a=10;
	int* p=&a;
	
	printf("value of a =%d  ",a);
	printf("\nvalue in p=%d",*p);
	printf("\nadress of a=%x",p);
	printf("\n adress of pointer=%x",&p);
	return 0;
}