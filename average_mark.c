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
	float mark[5];
	float avg, total;

	printf("Enter 5 marks: ");

	for (count = 0; count < 5; count++)
	{
		scanf("%f", &mark[count]);
	}

	for (count = 0; count < 5; count++)
	{
		total += mark[count];
	}

	avg = total / 5;

	printf("%f\n", avg);

return (0);

}
