#include "main.h"
#include <stdio.h>

/**
* main - Entry point
* Description: void pointer can access value from a memory allocation
*				regardless of its data type. You only need to type cast
*				it before dereferencing it;
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int a = 5;
	float b = 3.41;
	char c = 'o';

	int *ip;/* interger pointer */
	float *fp; /*float pointer */
	char *cp; /*char pointer */
	void *vp; /*void pointer */

	ip = &a;
	fp = &b;
	cp = &c;
	printf("%d\n", *ip);
	printf("%f\n", *fp);
	printf("%c\n", *cp);

	vp = &a;
	printf("%d\n", *(int *)vp);
	vp = &b;
	printf("%f\n", *(float *)vp);
	vp = &c;
	printf("%c\n", *(char *)vp);

return (0);

}
