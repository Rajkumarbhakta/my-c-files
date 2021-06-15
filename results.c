#include <stdio.h>
#define p printf
#define s scanf

int main()
{
   int b,e,ps,ls,m,h,g,tm;
   
   p("enter your madhyamik examination marks.\n");
   p("Frist language=");
   s("%d",&b);
   p("second language=");
   s("%d",&e);
   p("mathematics=");
   s("%d",&m);
   p("physical science=");
   s("%d",&ps);
   p("life science=");
    s("%d",&ls);
   p("history=");
    s("%d",&h);
   p("geography=");
    s("%d",&g);
  tm=b+e+ps+ls+m+h+g;
   p("your total mark=%d\n",tm);
     
   p("your grade\n");
   if(tm<=700 && tm>=650)
   
   p("AA");
 
   else if(tm<=649 && tm>=600 )
   p("A+");
   else if(tm<=599 && tm>=550)
   p("A");
   else if(tm<=549 && tm>=400)
   p("B+");
   else if(tm<=399 && tm>=350)
   p("B");
   else if(tm<=349 && tm>=175)
   p("C");
   
  else
   p("D : Fail!!");
	return 0;
}
