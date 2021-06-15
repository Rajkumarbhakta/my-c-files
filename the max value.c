#include <stdio.h>

int main()
{
    int a,b,m;
   printf("enter the frist value=");
   scanf("%d",&a);
   printf("enter the second value=");
   scanf("%d",&b);
   
   m=a>b?a:b;
   printf("the max value is=%d",m);
	return 0;
}
