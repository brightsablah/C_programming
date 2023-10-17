#include "main.h"
#include <stdio.h>

/**
* main - Entry point
* Description: Simple demonstration of nested loops
*
* Return: Always 0 (Success)
*/

int main(void)
{
        int i, j;
        for (i = 0; i <= 4; i++)
        {
                printf("This is the STARTING of the outer loop %d\n", i);
                        for (j = 0; j <= 4; j++)
                        {
                                printf("Inner Loop with number %d\n", j);
                        }
                printf("This is the Ending of the outer loop %d\n", i);
        }

return (0);

}
