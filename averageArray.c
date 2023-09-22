#include <stdio.h>

/**
* main - Entry point
* Description: initializes array at runtime and finds average of values
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int a[5], i, sum = 0;
	float average;

	printf("Enter 5 array elements: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}

	for (i = 0; i < 5; i++)
	{
		sum = sum + a[i];
	}

	average = sum / 5;

	printf("Average of scores is: %.2f\n", average);

return (0);

}
