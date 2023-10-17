#include "main.h"
#include <stdio.h>

/**
* main - Entry point
* Description:
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int arr[] = {34, 12, 21, 54, 48};
	int largest;
	int i;

	largest = *arr;

	for (i = 0; i < 5; i++)
	{
		if (largest < *(arr + i))
		{
			largest = *(arr + i);
		}
	}

	printf("%d\n", largest);

return (0);

}
