#include <stdio.h>

/**
* main - Entry point
* Description: prints difference of two matrix
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int a[2][3], b[2][3], c[2][3], i, j;

	printf("Enter first matrix:\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	printf("Enter second matrix:\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}

	printf("Sum of both matrix:\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			c[i][j] = a[i][j] - b[i][j];
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}

return (0);

}
