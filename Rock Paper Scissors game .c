#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int ran(int n)
{
	srand(time(NULL));
	return rand() % n;
}
int big(int a, int b)
{
	if (a == 2 && b == 1)
	{
		printf("\nYou WIN");
		return 1;
	}
	else if (a == 1 && b == 2)
	{
		printf("\nComputer WIN");
		return 0;
	}
	else if (a == 1 && b == 3)
	{
		printf("\nYou WIN");
		return 1;
	}
	else if (a == 3 && b == 1)
	{
		printf("\nComputer WIN");
		return 0;
	}
	else if (a == 3 && b == 2)
	{
		printf("\nYou WIN");
		return 1;
	}
	else if (a == 2 && b == 3)
	{
		printf("\nComputer WIN");
		return 0;
	}
	else
	{
		printf("\nDraw");
		return -1;
	}
}
void option(int n)
{
	if (n == 1)
		printf("\n Rock");
	if (n == 2)
		printf("\n Paper");
	if (n == 3)
		printf("\n Scissor");
}

int main()
{
	int n, you_option, computer_option;
	int your_score = 0, com_score = 0;
	char x = 'y';
	//	char you[10], computer[10],
	printf("****** WELCOME TO GAME******");
printf("\n\t^^©RKB GAMES^^");
		printf("\n\n");
	while (x == 'Y' || x == 'y')
	{
		for (int i = 0; i < 3; i++)
		{
			printf("\n\n>>Your Turn\n");
			printf("press\n 1 for Rock\n 2 for Paper \n 3 for Scissor\n");
			scanf("%d", &you_option);
			if (you_option > 3)
			{
				printf("INVALID!");
				break;
			}
			printf("You choose:");
			option(you_option);
			printf("\n");
			printf("\n>>Computer's turn\n");
			computer_option = ran(3) + 1;
			printf("Computer choose:");
			option(computer_option);
			printf("\n");
			//	big(you_option, computer_option);
			n = big(you_option, computer_option);
			if (n == 1)
			{
				your_score = your_score + 1;
			}
			else if (n == 0)
			{
				com_score = com_score + 1;
			}
			else if (n == -1)
			{
				your_score = your_score + 1;
				com_score = com_score + 1;
			}
		}
		if (you_option > 3)
			break;
		printf("\n\n**** Score Bord ****\n");
		printf("       You: %d\n", your_score);
		printf("    Computer:%d\n", com_score);
		printf("\n");
		printf("********************************");
		if (your_score > com_score)
			printf("\nCongratulations 🎈! YOU WIN\n");
		else if (com_score > your_score)
			printf("\n***YOU LOOSE!***");
		else
			printf("\n It's a Draw");

		printf("\n**************************");
		printf("\n\n");

		your_score = 0;
		com_score = 0;
		printf("Play again!(Y/N)");
		getchar();
		scanf("%c", &x);
	}
	
	return 0; 
}