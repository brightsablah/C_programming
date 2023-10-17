#include "main.h"
#include <stdio.h>

/**
* main - Entry point
* Description: prints times table of input number
*
* Return: Always 0 (Success)
*/

int main(void)
{

	int num, soln, i;

	printf("Enter a number: ");
	scanf("%d", &num);

	printf("Times Table for %d is below\n", num);
	printf("---------------------------\n");

	for (i = 0; i <= 12; i++)
	{
		soln = num * i;
		printf("%d x %d = %d\n", num, i, soln);
	}

return (0);

}
