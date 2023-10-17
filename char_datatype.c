#include "main.h"
#include <stdio.h>

/**
* main - Entry point
* Description: testing out the limits of character data type
*					int value of character value ranges from -128 to 127 :signed
*					0 - 256 : unsigned char range
* Return: Always 0 (Success)
*/

int main(void)
{
	char a = '#';
	char b = 98;
	char c = 'z';
	char d = 130;
	char e = -130;
	char f = -4;

	printf("Char value a is: %c\n", a);
	printf("Int value of a is: %d\n\n", a);

	printf("Char value b is: %c\n", b);
	printf("Int value of b is: %d\n\n", b);

	printf("Char value c is: %c\n", c);
	printf("Int value of c is: %d\n\n", c);

	printf("Char value d is: %c\n", d);
	printf("Int value of d is: %d\n\n", d);

	printf("Char value e is: %c\n", e);
	printf("Int value of e is: %d\n\n", e);

	printf("Char value f is: %c\n", f);
	printf("Int value of f is: %d\n\n", f);

	printf("Char value f is: %c\n", f);
	printf("Int value of f is: %d\n\n", f);


return (0);
}
