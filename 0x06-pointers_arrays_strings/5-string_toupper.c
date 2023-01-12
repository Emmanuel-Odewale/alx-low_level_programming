#include "main.h"

/**
 * string_toupper - changes lowercase letters of a string to uppercase
 * @str: string to change case
 * Return: pointer to string
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
