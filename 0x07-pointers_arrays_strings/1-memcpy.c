#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: destination
 * @src: source
 * @n: number of time to fill
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*dest++ = *src++;
		i++;
	}
	return (dest);
}
