#include "main.h"
#include <stdio.h>

int sum (int);

int main()
{
	int a;
	a = sum(5);
	printf("%d\n", a);

	return (0);
}

int sum(int x)
{
	int s = 0;
	if(x == 1)
	{
		return (x);
	}
	s = x + sum(x -1);
	return (s);
}
