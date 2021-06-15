#include <stdio.h>
#include <conio.h>

int main()
{
	
	int day;
	
	printf("enter a number between 1 to 7=");
	scanf("%d",&day);
	
	switch(day){
	case 1:
	printf("sunday");
	break;
	
	case 2:
	printf("monday");
	break;
	
	default:
	printf("enter a valid number");
	break;
	
	}
	
	}
