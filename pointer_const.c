#include "main.h"
#include <stdio.h>

/**
* main - Entry point
* Description: will result in error since value of location of a is readonly
*
* Return: Always 0 (Success)
*/

int main(void)
{
	const int a = -11;
	const int *p = &a;

	*p = 10;
	printf("%d\n", a);

return (0);

}
