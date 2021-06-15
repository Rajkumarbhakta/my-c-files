#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[])
{
int a;
for (a=1;a<=7;a++)
{
     if (a==5)
     {
     	goto old;
     }
     printf ("\n %d ",a);
     
}
   old:
   printf ("\nRKBWORLD");  
}