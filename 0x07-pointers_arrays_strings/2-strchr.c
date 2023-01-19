#include "main.h"
#include <stddef.h>

/**
 * _strchr - a function that loactes a character in a string
 * @s: string to check
 * @c: character to locate
 * Return: a pointer to s.
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}
	if (c == '\0')
	{
		return (NULL);
	}
	return (NULL);
}
