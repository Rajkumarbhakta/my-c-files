#include <stdio.h>
#include<conio.h>
#define p printf
#define s scanf
 
int main()
{
   float a,b,c;
   
   p("enter ther first value=");
   s("%f",&a);
   p("enter the second value=");
   s("%f",&b);
   
   c=a/b;
   
   p ("%f/%f=%f",a,b,c);
	return 0;
}
 
    
