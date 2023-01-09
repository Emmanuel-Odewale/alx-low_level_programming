#include "main.h"
#include <string.h>

/**
 * _strcpy - function to copy from source to destination
 * @dest: destination
 * @src: source
 * Return: returns the destination.
 */
char *_strcpy(char *dest, char *src)
{
	int i, ln;

	ln = strlen(src);
	for (i = 0; i <= ln; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
