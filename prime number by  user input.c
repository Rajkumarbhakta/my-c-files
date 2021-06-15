#include<stdio.h>
#include<conio.h>
 main()
{
int n,i,c;

do
{
printf("\n Enter a number:");
scanf("%d",&n);
for(i=2;i<=n-1;i++)
{
if(n%i==0)
{
printf("\n The number %d is not prime",n);
break;
}
}
if(n==i)
printf("\n The number %d is prime",n);
printf("\n Do you want to run this program again?");
printf("\n Press 1 to Yes any other number to No:");
scanf("%d",&c);
}while(c==1);

}