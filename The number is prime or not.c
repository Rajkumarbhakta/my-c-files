#include<stdio.h>  
int main(){    
int n,i,m=0, check=0;    
printf("Enter the number to check prime:");    
scanf("%d",&n);    
m=n/2;    
for(i=2;i<=m;i++)    
{    
if(n%i==0)    
{    
printf("Number is not prime");    
check=1;    
break;    
}    
}    
if(check==0)    
printf("Number is prime");     
return 0;  
 }    