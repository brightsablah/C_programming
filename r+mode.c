#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *fp = NULL;

	fp = fopen("textfile.txt","r+");
	if (fp == NULL)
	{
		printf(" ERROR: File not Opened");
		exit(1);
	}

	fputs("trial", fp);
	fputc('q', fp);
	fclose(fp);
}
