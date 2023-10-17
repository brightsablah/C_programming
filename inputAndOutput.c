#include "main.h"
#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (sucess)
*/
int main(void)
{
        char f, m, l;
        int age;

        printf("Enter your initials,followed by your age: ");
        scanf("%c %c %c %d", &f, &m, &l, &age);
        printf("My initials are %c%c%c and my age is is %d.\n", f, m, l, age);
        return (0);
}
