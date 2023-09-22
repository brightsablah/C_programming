#include <stdio.h>

/**
* main - Entry point
* Description: initializes array at runtime and finds average of values
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int a[5], i, odd = 0, even = 0;

	printf("Enter 5 array elements: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);

		if (a[i] % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}

	printf("You entered %d even numbers and %d odd numbers\n", even, odd);

return (0);

}
