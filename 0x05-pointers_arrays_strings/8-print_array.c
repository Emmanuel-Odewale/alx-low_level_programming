#include "main.h"
#include <stdio.h>

/**
 * print_array -  a function that prints n elements of an array of integers
 *
 * @a: array name
 * @n: array size
 */
void print_array(int *a, int n)
{
	int size, index;

	size = n - 1;
	for (index = 0; index <= size; index++)
	{
		if (index == size)
		{
			printf("%d", a[index]);
		}
		else
		{	
			printf("%d, ", a[index]);
		}
	}
	printf("\n");
}
