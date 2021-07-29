#include <stdio.h>
#include <string.h>
struct employees
{
	int id;
	char name[40];
	float sallary;
	int experience;
} e1, e2, e3;

int main()
{
	printf(" employe no 1 ");
	printf("enter your id no:");
	scanf("%d", &e1.id);
	printf("enter your name:");
	getchar();
	gets(e1.name);

	printf("enter your sallary:");
	scanf("%f", &e1.sallary);
	printf("enter your work experience in year:");
	scanf("%d", &e1.experience);
	printf("\n%s id is %d work experience is %d year and sallary is %0.3f.", e1.name, e1.id, e1.experience, e1.sallary);

	printf("\n employe no 2 ");
	printf("enter your id no:");
	scanf("%d", &e2.id);
	printf("enter your name:");
	getchar();
	gets(e2.name);
	printf("enter your sallary:");
	scanf("%f", &e2.sallary);
	printf("enter your work experience in year:");
	scanf("%d", &e2.experience);
	printf("\n%s id is %d work experience is %d year and sallary is %0.3f.", e2.name, e2.id, e2.experience, e2.sallary);

	printf(" \nemploye no 3 ");
	printf("enter your id no:");
	scanf("%d", &e3.id);
	printf("enter your name:");
	getchar();
	gets(e3.name);

	printf("enter your sallary:");
	scanf("%f", &e3.sallary);
	printf("enter your work experience in year:");
	scanf("%d", &e3.experience);
	printf("\n%s id is %d work experience is %d year and sallary is %0.3f.", e3.name, e3.id, e3.experience, e3.sallary);
}