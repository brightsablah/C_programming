#include <stdio.h>

/**
* main - Entry point
* Description: program shows diff btn scanf and fget
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char name[100];

	printf("Fgets Prompt: Enter your name\n");
	fgets(name, sizeof(name), stdin);
	printf("Fget Input received is : %s\n", name);

	printf("Scanf Prompt: Enter your name\n");
	scanf("%s", name);
	printf("Scanf Input received is : %s\n", name);

return (0);

}
