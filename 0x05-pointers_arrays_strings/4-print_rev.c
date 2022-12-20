#include "main.h"
#include <string.h>

/**
 * print_rev - a function that prints a string in reverse
 * @s: sting to print
 *
 *
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
