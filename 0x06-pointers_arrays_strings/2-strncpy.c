#include "main.h"
#include <string.h>

/**
 * _strncpy -  a function that copies strings.
 * @dest: destination string
 * @src: source string
 * @n: number of char to copy
 * Return: pointer to destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for  (j = 0; j < n ; j++)
	{
		if (src[j])
		{
			dest[j] = src[j];
		}
		else
		{
			dest[j] = '\0';
			break;
		}
	}
	for ( ; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
