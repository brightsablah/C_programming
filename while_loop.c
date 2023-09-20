#include <stdio.h>

/**
* main - Entry point
* Description: practicing with while loop
*
* Return: Always 0 (Success)
*/

int main(void)
{

/*
* GENERAL SYNTAX OF WHILE LOOP
* while (termination condition)
*	{
*		statements
*		update/modifiy
*/

	int i = 0;

	while (++i)
	{
		printf("%d\n", i);
	}
	printf("End of program");


	int i = 0;

	while (i++)
	{
		printf("%d\n", i);
	}
	printf("End of program");


	char ch = 'a';

	while (ch)
	{
		printf("%c\n", ch);
	}
	printf("End of program");


	char = 'a';

	while (ch)
	{
		printf("%d\n", ch);
	}
	printf("End of program");


	int i = 1;
	char ch = 'a';

	while (ch < 127 && i == 1)
	{
		printf("%d\n", i);
	}
	printf("End of program");

return (0);

}
