#include "main.h"

/**
 * reverse_array - function to reverse an array
 * @a: array
 * @n: number of array elements
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	while (i < n)
	{
		temp = a[i];
		a[i] = a[n-1];
		a[n-1] = temp;
		i++;
		n--;
	}
}
