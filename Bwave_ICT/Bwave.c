#include <stdio.h>

/**
* main- this task will collect user inputs
* Return: 0
*/

int main(void)
{
	char name[20];
	int average_score;

	printf("Please enter your Name: ");
	scanf("%s", name);
	printf("please enter your Average Score: ");
	scanf("%d", &average_score);

	printf("Your Name is: %s\n", name);
	printf("Your Average Score is: %d\n", average_score);

	printf("%d / 2\n", average_score);

	if (average_score / 2 >= 80 && average_score / 2 < 168)
	{
		printf("YOU PASS THE PROBATION\n");
	}
	else if (average_score > 168)
	{
		printf("INCORRECT SCORE\n");
	}
	else
	{
		printf("TRY AGAIN NEXT YEAR\n");
	}
	return (0);
}
