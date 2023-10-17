#include "main.h"
#include <stdio.h>

/**
* main - Entry point
* Description: accepts input into a 2d array dring runtime
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int arr[2][3], i, j;

	printf("Enter 6 numers: ");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &arr[i][j]);
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

return (0);

}
