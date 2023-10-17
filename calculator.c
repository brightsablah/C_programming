#include "main.h"
#include <stdio.h>

/**
* main - Entry point
* Description: simle calculator using switch statements
* by: BRight
* Return: Always 0 (Success)
*/

int main(void)
{

	int a, b;
	char operator;

	printf("Enter one operator ( + - * / )\n");
	scanf("%c", &operator);

	printf("Enter first operand (integer): ");
	scanf("%d", &a);

	printf("Enter second operand (integer): ");
	scanf("%d", &b);

	switch (operator)
	{
		case '+':
			{
				printf("Sum = %d\n", a + b);
				break;
			}

		case '*':
			{
				printf("Product = %d\n", a * b);
				break;
			}

		case '-':
			{
				printf("Difference = %d\n", a - b);
				break;
			}

		case '/':
			{
				printf("Quotient = %d\n", a / b);
				break;
			}

		default:
			{
				printf("Invalid Operand Entered. Try again with valid operand ( + - * / ): \n");
			}

	}

return (0);
}
