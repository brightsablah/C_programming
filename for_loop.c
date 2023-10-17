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
	int i = 0;
	int j = 5;
	int k;

	for (; i < 5, j > 1; i++, j--)
	{
		printf("i = %d j = %d\n", i, j);
	}

	/* For loop with semi-colon at end */
	printf("For loop with semicolom result is Below\n");
	printf("---------------------------------------\n");

	for (i = 1, j = 0, k = 3; i <= 5, j <= 6, k > 1; i++, j++, k--);
	{
		printf("i = %d, j = %d, k = %d\n", i, j, k);
	}

	/* For loop without semi-colon at end */
	printf("For loop without semicolom result is Below\n");
	printf("------------------------------------------\n");

	for (i = 1, j = 0, k = 3; i <= 5, j <= 6, k > 1; i++, j++, k--)
	{
		printf("i = %d, j = %d, k = %d\n", i, j, k);
	}


return (0);

}
