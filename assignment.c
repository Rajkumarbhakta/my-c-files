#include <stdio.h>
#include <conio.h>

int main()
{
char  g,ms;
int a;
printf("enter your marrietual status(u for unmarried and m for married):");
scanf("%c",&ms);

if(ms=='m')
    printf("\nYou are eligibale for insurance"); 
else
 {
printf("\n need more details please enter the details");
 	printf("\nenter your gender(M for male and F for female):");
scanf("%s",&g);

printf("\nenter your age:");
scanf("%d",&a);

     if(g=='M')
         {
         	if(a>=30)
         	printf("you are eligibale for insurance");
         	else
         	printf("you are not eligibale for insurance");
         	}
 	   else
 	   {
 	   	if(a>=25)
 	   	printf("you are eligibale for insurance");
 	   	else
 	   	printf("you are not eligibale for insurance");
 	   	
 	   	}
 	        
 	}
	
	return 0;
	}