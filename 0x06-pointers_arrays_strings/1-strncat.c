#include "main.h"
#include <string.h>
/**
 * _strncat -  a function that concatenates two strings.
 * @dest: destination string
 * @src: source string
 * @n: number of byte
 * Return: pointer to destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for  (j = 0; src[j] && j < n ; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
