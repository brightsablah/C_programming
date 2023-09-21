#include <stdio.h>

/**
* main - Entry point
* Description: practicing to use break statement in loops
*					break can only be used in loops and switch statements
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
			break;
		}

		sum += a;
	}

	printf("Sum: %d\n", sum);

return (0);

}
