#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: string
 * @b: constant
 * @n: number of time to fill constant
 * Return: pointer to string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
