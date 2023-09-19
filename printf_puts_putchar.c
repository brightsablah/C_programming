#include <stdio.h>

/**
* main - Entry point
* Description: printf vs puts vs printchar
*
* Return: Always 0 (Success)
*/

int main(void)
{

	/* Book information */
	char title[] = "The Great Gatsby";
	char author[] = "F. Scott Fitzgerald";
	int year = 1925;

	/* Using printf */
	printf("Using printf:\n");
	printf("Title: %s\n", title);
	printf("Author: %s\n", author);
	printf("Year: %d\n", year);
	printf("\n");

	/* Using puts */
	printf("Using puts:\n");
	puts("Title: The Great Gatsby");
	puts("Author: F. Scott Fitzgerald");
	puts("Year: 1925");
	printf("\n");

	/* Using putchar */
	printf("Using putchar:\n");
	char newline = '\n';
	int i = 0;

	while (title[i] != '\0')
	{
		putchar(title[i]);
		i++;
	}
	putchar(newline);

	i = 0;
	while (author[i] != '\0')
	{
		putchar(author[i]);
		i++;
	}
	putchar(newline);

	printf("Year: ");
	int tempYear = year;
	while (tempYear != 0)
	{
		putchar((tempYear % 10) + '0');
		tempYear /= 10;
	}
	putchar(newline);

return (0);

}
