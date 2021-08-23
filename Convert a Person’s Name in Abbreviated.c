#include <stdio.h>

int main()
{
	char frist[20], middle[20], last[20];
	printf(" Enter Your name:\n");
	printf("Frist name:");
	scanf("%s", &frist);
	printf("Middle name:");
	scanf("%s", &middle);
	printf("Last Name:");
	scanf("%s", &last);
	printf("Your name is : %s %s %s", frist, middle, last);
	printf("\n \n");
	printf("Abbreviation of your name: %c .%c.%c", frist[0], middle[0], last[0]);
	return 0;
}