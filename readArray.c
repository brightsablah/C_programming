#include "main.h"
#include <stdio.h>

/**
* main - Entry point
* Description: initializes array at runtime and prints values
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int a[5], i;

	printf("Enter 5 array elements: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}

	printf("\nPrinting array Elements\n");
	for (i = 0; i < 5; i++)
	{
		printf("array element at index %d is: %d\n", i, a[i]);
	}

	printf("\nPrinting array Elements in Reverse Order\n");
	for (i = 4; i >= 0; i--)
	{
		printf("array element at index %d is: %d\n", i, a[i]);
	}

return (0);

}
