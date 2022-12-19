#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * Description: a function that draws a diagonal line on the terminal..
 * @n: nth line.
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, s;

		for (i = 1; i <= n; i++)
		{
			if (i == 1)
			{
				_putchar('\\');
			}
			else
			{
				s = 1;

				while (s < i)
				{
					_putchar(' ');
					s++;
				}
				_putchar('\\');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

