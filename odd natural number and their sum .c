#include <stdio.h>
int main()
{
   int j,i,n=0;
   printf("Enter a number:");
   scanf("%d",&j);
   printf("\n the odd numbers are:");
   for(i=1;i<=j;i+=2)
   {
   	n+=i;
   	printf("\n%d",i);
   	}
   	printf("\nsum of odd numbers=%d",n);
} 
