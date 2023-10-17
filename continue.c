#include "main.h"
#include <stdio.h>

/**
* main - Entry point
* Description: practicing to use continue statement in loops
*					continue can only be used in loops and switch statements
* Return: Always 0 (Success)
*/

int main(void)
{
	int a, i, sum = 0;

	for (i = 0; i <= 5; i++)
	{
		printf("Enter a number: \n");
		scanf("%d", &a);

		if (a < 0)
		{
			continue;
		}

		sum += a;
	}

	printf("Sum of positive integers you entered is: %d\n", sum);

return (0);

}
