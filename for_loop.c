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

	for (; i < 5 && j > 1; i++, j--)
	{
		printf("i = %d j = %d\n", i, j);
	}

return (0);

}
