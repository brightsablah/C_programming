#include <stdio.h>

/**
* main - Entry point
* Description:
*
* Return: Always 0 (Success)
*/

int main(void)
{
	double salary;
	double* ptr;

	printf("Enter your salary: ");
	scanf("%lf", &salary);

	ptr = &salary;

	printf("%f\n", *ptr);
	*ptr *= 3;

	printf("%f\n", *ptr);

return (0);

}
