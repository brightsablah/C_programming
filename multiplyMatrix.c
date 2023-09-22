#include <stdio.h>

/**
* main - Entry point
* Description: prints product of two matrix
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int a[3][3], b[3][2], c[3][2], i, j, k, sum;

	printf("Enter first matrix:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	printf("Enter second matrix:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}

	printf("Product of both matrix:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			sum = 0;
			for (k = 0; k < 3; k++)
			{
				sum = sum + (a[i][k] * b[k][j]);
				c[i][j] = sum;
			}
			printf("%d ", sum);
		}
		printf("\n");
	}

return (0);

}
