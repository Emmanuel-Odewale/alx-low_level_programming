#include "main.h"

/**
 * more_numbers - prints more numbers.
 */

void more_numbers(void)
{
	int i;
	char j, l;

	for (i = 1; i < 11; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			l = j;
			if (j > 9)
			{
				_putchar('1');
				l = j % 10;
			}
			_putchar('0' + l);
		}
		_putchar('\n');
	}
}
