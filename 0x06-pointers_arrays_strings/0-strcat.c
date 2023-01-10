#include "main.h"
#include <string.h>
/**
 * _strcat -  a function that concatenates two strings.
 * @dest: destination string
 * @src: source string
 * Return: pointer to destination
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++);

	for  (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
