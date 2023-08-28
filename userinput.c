#include <stdio.h>

/**
* main - Entry point
* Description: program shows diff btn scanf and fget
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char name[];
	printf("Scanf Prompt: Enter your name\n");
	scanf("%s", name);
	printf("Scanf Input received is : %s\n");

	printf("Fgets Prompt: Enter your name\n");
	fgets("%s", name);
	printf("Fget Input received is : %s\n", name);

return (0);

}
