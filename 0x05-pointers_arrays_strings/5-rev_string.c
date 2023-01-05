#include "main.h"
#include <string.h>

/**
 * rev_string - a function that prints a string in reverse
 * @s: string to print
 */

void rev_string(char *s)
{
	int i, length;
	char *temp;

	length = strlen(s) - 1;
	for (i = 0; i <= length; i++)
	{
		temp = s[i];
		s[i] = s[length];
		s[length] = temp;
		length--;
	}

}
