#include "main.h"

/**
 * cap_string -  a function that capitalizes all words of a string.
 * @str: string to capitalize
 * Return: pointer to string
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i - 1] == (' ' || '	' || ',' || ';' || '.' || '!' || '?' || '"' || '(' || ')' || '{') || (str[i - 2] == '\' && str[i - 1] == 'n'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
	}
	return (str);
}
