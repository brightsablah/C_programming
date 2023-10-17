#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *fp = NULL;

	fp = fopen("textfile.txt","a+");
	if (fp == NULL)
	{
		printf(" ERROR: File not Opened");
		exit(1);
	}

	fputs("trial", fp);
	fputc('q', fp);
	fclose(fp);
}
