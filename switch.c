#include <stdio.h>

/**
* main - Entry point
* Description: Switch Case statement practice
*
* Return: Always 0 (Success)
*/

int main(void)
{

	char ch;

	printf("Enter Character: ");
	scanf("%c", &ch);

	switch (ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
					{
						printf("Vowel Entered\n");
						break;
					}
		default:
					{
						printf("Not a Vowel\n");
					}
	}

return (0);

}
