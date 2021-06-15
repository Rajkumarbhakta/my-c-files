#include <stdio.h>
#define p printf
#define s scanf

int main()
{
int a,b,c;
 p("enter a:");

 s("%d",&a);

 p("enter b:");
 
 s("%d",&b);
 
 p("enter c:");
 
 s("%d",&c);
 
  if(a>b)
  {
     if(a>c)
     {
     p("a is greater");
     }
     else
      p("c is greater");
  }
  else
  {
  if(b>c)
  p("b is greater");
  else
  p("c greater");
  }
  
	return 0;
}
