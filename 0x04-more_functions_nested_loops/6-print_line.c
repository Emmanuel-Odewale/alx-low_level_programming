#include "main.h"

/**
 * print_line - prints n number of line(underscore).
 * @n: number of lines to print.
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');

	}
	else
		_putchar('\n');
}

