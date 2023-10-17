#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - entry point
* description: prints value of argc
* @argc: argumet count - number of items typed to run the code
* @argv: argument vector - array of strings entered
*			to the comman line to run the code
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int i;

	printf("argc = %d\n", argc);
	printf("Content of argv[]\n");

	for (i = 0; i < argc ; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}

	return (0);
}
