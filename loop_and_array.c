#include <stdio.h>

/**
* main - Entry point
* Description: receives array input and prints output using loops
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	int age[5];

	printf("Enter 5 input values: ");

	for (i = 0; i < 5; ++i)
	{
		scanf("%d", &age[i]);
	}


	for (i = 0; i < 5; ++i)
	{
		printf("%d ", age[i]);
	}

	printf("\n");

return (0);

}
