#include "main.h"
#include <string.h>
/**
 * _strncpy -  a function that copies strings.
 * @dest: destination string
 * @src: source string
 * @n: number of byte
 * Return: pointer to destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for  (j = 0; src[j] && j < n ; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
