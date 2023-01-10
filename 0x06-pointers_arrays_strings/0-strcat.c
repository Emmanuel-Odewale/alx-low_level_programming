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
	int i, length;

	i = 0;
	length = strlen(src);
	while (src[i] != '\0')
	{
		dest[length] = src[i];
		length += 1;
		i += 1;
	}
	return (dest);
}
