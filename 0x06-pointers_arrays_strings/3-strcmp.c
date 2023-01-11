#include "main.h"
#include <string.h>

/**
 * _strcmp - a function that compares two strings.
 * @s1: string one
 * @s2: string two
 * Return: depends on case
 */
int _strcmp(char *s1, char *s2)
{
	int i, rtn;

	rtn = 0;
	for (i = 0; s1[i] != '\0' ||  s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			return (rtn);
		}
		else if (s1[i] > s2[i])
		{
			rtn = 15;
			return (rtn);
		}
		else
		{
			rtn = -15;
			return (rtn);
		}
	}
	return (rtn);
}
