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

	printf("Enter first operand (integer)");
	scanf("%d", &a);

	print("Enter second operand (integer)");
	scanf("%d", &b);

	switch (operator)
	{
		case '+':
			{
				printf("Sum = %d", a + b);
			}

		case '*':
			{
				printf("Product = %d", a * b);
			}

		case '-':
			{
				printf("Difference = %d", a - b);
			}

		case '/':
			{
				printf("Quotient = %d", a / b);
			}

		default:
			{
				printf("Enter valid operand ( + - * / ): \n");
			}

	}

return (0);
}
