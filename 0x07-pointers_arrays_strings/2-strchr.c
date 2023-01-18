#include "main.h"
#include <stddef.h>

/**
 * _strchr - a function that loactes a character in a string
 * @s: string
 * @c: character to locate
 * Return: a pointer to string.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else if ((*(s + 1) == '\0' && *s != c) || (int) c == 0)
		{
			return (NULL);
		}
		else
		{
		}
		s++;
	}
	return (s);
}
