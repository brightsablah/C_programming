#include <stdio.h>

void display()
{
	extern int x;
	printf("this is originated from support.c\n");
	printf("value of x accessed using extern is: %d\n", x);
}
