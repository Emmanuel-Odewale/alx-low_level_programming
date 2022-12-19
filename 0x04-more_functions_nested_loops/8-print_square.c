#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line.
 * @size: size of square.
 */

void print_square(int size)
{
	if (size > 0)
	{
		int i, x;

		for (i = 1; i <= size; i++)
		{
			x = 1;
			while (x <= size)
			{
				_putchar('#');
				x++;
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
