#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @str: string to encode
 * Return: a pointer to string
 */
char *leet(char *str)
{
	int i;

	i = 0;
	for ( ; str[i] != '\0'; i++)
	{
		if (str[i] == 'a' || str[i] == 'A')
		{
			str[i] = '4';
		}
		if (str[i] == 'e' || str[i] == 'E')
		{
			str[i] = '3';
		}
		if (str[i] == 'o' || str[i] == 'O')
		{
			str[i] = '0';
		}
		if (str[i] == 'o' || str[i] == 'T')
		{
			str[i] = '7';
		}
		if (str[i] == 'l' || str[i] == 'L')
		{
			str[i] = '1';
		}
	}
	return (str);
}
