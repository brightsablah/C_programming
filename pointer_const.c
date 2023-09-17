#include <stdio.h>

/**
* main - Entry point
* Description:
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int a = -11;
	int *p = &a;

	*p = 10;
	printf("%d\n", a);

return (0);

}
