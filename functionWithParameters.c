#include "main.h"
#include <stdio.h>

void greeting(char name[])
{
        printf("Hello to you %s\n", name);
}

/**
* main - Entry point
* Description:
*
* Return: Always 0 (Success)
*/

int main(void)
{
  
        greeting("Bobby");
        greeting("The Boy");
        printf("all functions have been executed\n");
        
return (0);

}
