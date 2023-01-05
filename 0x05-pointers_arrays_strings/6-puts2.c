#include "main.h"
#include <string.h>
/**
 * puts2 - function that prints characters.
 * @str: string to be printed
 */

void puts2(char *str)
{
	int i, k, z, length;

	length = strlen(str) - 1;
	for (k = 1; k < 2; k++)
	{
		for (i = 0; i <= length; i++)
		{
			z = k + i;
			if (z == 1 || (z % 2 == 1))
			{
				_putchar(str[i]);
			}

		}
	}
	_putchar('\n');
}
