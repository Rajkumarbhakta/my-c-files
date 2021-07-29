#include <stdio.h>

int main()
{
int num,rem,reverse_num=0;

   printf("Enter any number:\n");
   scanf("%d",&num);
   int temp=num;

   while(num>=1)
   {
      rem = num % 10;
      reverse_num = reverse_num * 10 + rem;
      num = num / 10;
   }
if(reverse_num==temp)
{
	printf("Pelindrome");
}
else
{
	printf("Not pelindrome");
}
return 0;
}