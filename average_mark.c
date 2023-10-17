#include <stdio.h>

/**
* main - Entry point
* Description: calculates the average of 5 marks inputed by user
*
* Return: Always 0 (Success)
*/

int main(void)
{

	int count;
	double mark[5];
	double avg, total;

	printf("Enter 5 marks: ");

	for (count = 0; count < 5; count++)
	{
		scanf("%lf", &mark[count]);
	}

	for (count = 0; count < 5; count++)
	{
		total += mark[count];
	}

	avg = total / 5;

	printf("%lf\n", avg);

return (0);

}
