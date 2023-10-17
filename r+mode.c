#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *fp = NULL;
	int line = 1;
	char ch;

	fp = fopen("textfile.txt","r+");
	if (fp == NULL)
	{
		printf(" ERROR: File not Opened");
		exit(1);
	}

	while ((ch = (fgetc(fp))) != EOF)
	{
		if (ch == '\n')
		{
			line++;
		}
	}

	printf("File has %d number of lines\n", line);

	fclose(fp);
}
