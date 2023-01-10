#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * Description: and initializes it with a specific char.
 * @size: size of array
 * @c: character to initialize array with
 * Return: pending on case
 */

char *create_array(unsigned int size, char c)
{
	char *array;

	array = malloc(sizeof(*array) * size);
	if (size > 0 && array != NULL)
	{
		array[0] = c;
		return (array);
	}
	if (size == 0)
	{
		return (NULL);
	}
	return (array);
}
