#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 * @size: size of triangle..
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int i, x;

		for (i = 1; i <= size; i++)
		{
			x = size - 1;
			while (x > 0)
			{
				_putchar(' ');
				x--;
			}
			while (i > 0)
			{
				_putchar('#');
				x--;
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
