#include <stdio.h>

/**
* main - Entry point
* Description: adds arr1 to arr2 and saves result in arr3
*
* Return: Always 0 (Success)
*/

int main(void)
{

	int arr3[5], i;

	int arr1[5] = {23, 55, 98, -23, 90};
	int arr2[5] = {34, 12, -56, 66, -43};

	for (i = 0; i < 5; i++)
	{
		arr3[i] = arr1[i] + arr2[i];

		printf("Array element %d of Array 3 is: %d\n", i, arr3[i]);
	}

return (0);

}
