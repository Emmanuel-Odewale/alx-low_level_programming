#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: string
 * @accept: string
 * Return: int value of length.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count, i, j;

	count = 1;
	j = 0;
	for (i = 0; i < 1; i++)
	{
		while (s[j] != '\0')
		{
			if (accept[i] == s[j])
			{
				break;
			}
			else
			{
				count += 1;
			}
			j++;
		}
		
	}
	return (count);
}
