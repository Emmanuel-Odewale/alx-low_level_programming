#include "main.h"
#include <string.h>
/**
 * puts2 - function that prints characters.
 * @str: string to be printed
 */

void puts2(char *str)
{
	int i, t, length;

	length = strlen(str) - 1;
	for (i = 0; i <= length; i++)
	{
		t = (int) str[i];
		if (t == 0 || (t % 2 == 0))
		{
			_putchar(t);
		}

	}
	_putchar('\n');
}
