/* Write a program in C to calculate and print the Electricity bill of a given 
   customer. The customer id., name and unit consumed by the user should be
   taken from the keyboard and display the total amount to pay to the
   customer. The charge are as follow : Unit Charge/unit upto 199 @1.20 200
   and above but less than 400 @1.50 400 and above but less than 600 @1.80 600 
   and above @2.00 If bill exceeds Rs. 400 then a surcharge of 15% will be
   charged and the minimum bill should be of Rs. 100/- */
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
	int id;
	char name[10];
	float u;
	p("enter your customer id:");
	s("%d", &id);
	p("enter your name:");
	scanf ("\n");
	s("%[^\n]%*c", &name);
	p("enter the bill unit:");
	s("%f", &u);

	p("\n \t \t \tyour bill");

	p("\n customer id: %d", id);
	p("\nName: %s", name);

	if (u <= 199)
	{
		p("\nyou have to pay ₹%10.2f ", u * 1.20);

	}
	else if (u >= 200 && u < 400)
	{
		p("\nyou have to pay ₹%10.2f ", u * 1.50);

	}

	else if (u >= 400 && u <= 600)
	{
		p("\nyou have to pay 15 percentextra for this bill");
		p("\nyou have to pay ₹%10.2f ", (u * 1.80) + ((u * 1.80 * 15) / 100));
	}
	else if (u >= 600)
	{
		p("\nyou have to pay 15 percentextra for this bill");
		p("\nyou have to pay ₹%10.2f ", (u * 2.00) + ((u * 2.00 * 15) / 100));

	}

}
