#include <stdio.h>

/**
* main - Entry point
* Description: Testing out the limits of signed and unsigned integer
*					values. int range on 64 bit is 2,147,483,647 to -2,147,483,648
* Return: Always 0 (Success)
*/

int main(void)
{
	int number = 2147483648;

	/* Printing number as a signed integer */
	printf("signed integer value returned is: %d\n", number);

	/* Printing number as a unsigned integer */
	printf("unsigned integer value returned is: %u\n", number);

return (0);

}
