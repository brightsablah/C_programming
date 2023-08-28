#include <stdio.h>

/**
* arithmetics - computes simple math operations on two integers
* @num1: first number
* @num2: second number
* Description:
* Return: returns void
*/
int arithmetics(int num1, int num2)
{
	int sum = num1 + num2;
	int dividend = num1 / num2;
	int product = num1 * num2;
	int difference = num1 - num2;
	int modulus = num1 % num2;

	printf("You entered %d and %d. Arithmetic solution is below\n", num1, num2);
	printf("----------------------------------------------------------");
	printf("sum = %d\n", sum);
	printf("dividend = %d\n", dividend);
	printf("product = %d\n", product);
	printf("difference = %d\n", difference);
	printf("modulus = %d\n", modulus);
}

/**
* main - Entry point
* Description:
* Return: Always 0 (Success)
*/

int main(void)
{
	arithmetics(12, 21);

return (0);

}
