#include "main.h"
#include <string.h>

/**
 * puts_half - function to print the right split of a string.
 * @str: string to split print.
 */
void puts_half(char *str)
{
	int x, n, length;

	length = strlen(str) - 1;
	n = strlen(str)  / 2;

	for (x = n; x <= length; x++)
	{
		if (length % 2 == 0)
		{
			_putchar(str[x]);
		}
		else
		{
			n = (strlen(str) - 1) / 2;
			_putchar(str[x]);

		}

	}
	_putchar('\n');
}
