#include <stdio.h>

int fun1(int);
int fun2(int);

void main()
{
	printf("%d\n", fun1(5));
}

int fun1(int n)
{
	if (n <= 1) return 1;
	else return n * fun2(n - 1);
}

int fun2(int n)
{
	if (n <= 1) return 1;
	else return n * fun1(n - 1);
}
