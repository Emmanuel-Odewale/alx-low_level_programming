#include "main.h"
#include <string.h>

/**
 * print_rev - a function that prints a string in reverse
 * @s: string to print
 */

void print_rev(char *s)
{
	int i;

	i = strlen(s) - 1;
	for (i = i ; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
