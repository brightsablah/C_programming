#include <stdio.h>

/**
* main - Entry point
* Description:
*
* Return: Always 0 (Success)
*/

int* mulNumber(int* a, int* b, int* c);

int main(void)
{
	int num1;
	int num2;
	int mul;

	num1 = 13;
	num2 = 9;


int* result = mulNumber(&num1, &num2, &mul);
	printf("%d\n", *result);
	printf("Program End\n");

	return (0);

}

int* mulNumber(int* a, int* b, int* c)
{
	*c = *a * *b;

	return(c);

}
