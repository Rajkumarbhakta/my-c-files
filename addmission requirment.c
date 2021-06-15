#include<stdio.h>
int main()
{
	int p,c,m;
	printf("enter your mark\n");
	printf("physics:");
	scanf("%d",&p);
	printf("chemistry:");
	scanf("%d",&c);
	printf("math:");
	scanf("%d",&m);
	if(p>=55)
	{
		if(c>=50)
		{
			if(m>=65)
			{
				printf(" your total in three subject is %d and total in math and physics is %d\n",p+c+m,p+m);
				if((p+c+m)>=190 || (m+p)>=140)
				
		
			printf("you are eligible for admission");
			
				
				else
	printf( "you are not eligible for admission");
				}
				else
	printf( "you are not eligible for admission");
			}
		else
	printf( "you are not eligible for admission");
		}
	
	else
	printf( "you are not eligible for admission");
	
	}