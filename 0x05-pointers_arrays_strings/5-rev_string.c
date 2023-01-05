#include "main.h"
#include <string.h>

/**
 * rev_string - function that reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i;

	for (i = strlen(s); i >= 0; i--)
	{
		_putchar(s[i]);

	}
	_putchar('\n');
}
