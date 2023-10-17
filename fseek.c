#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *fp = NULL;
	char ch;

	fp = fopen("textfile.txt","r+");
	if (fp == NULL)
	{
		printf(" ERROR: File not Opened");
		exit(1);
	}

	fseek(fp, 23, SEEK_SET);
	ch = fgetc(fp);
	printf("%c\n", ch);

	fseek(fp, -13, SEEK_CUR);
	ch = fgetc(fp);
	printf("%c\n", ch);

	fseek(fp, -25, SEEK_END);
	ch = fgetc(fp);
	printf("%c\n", ch);

	fclose(fp);
}
