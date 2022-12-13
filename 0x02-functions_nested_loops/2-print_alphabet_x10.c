#include "main.h"
/**
* print_alphabet_x10 - a function that prints alphabet a-z in lowercase.
* Description: a function that prints alphabets in lowver case 10 times.
* @void: accepts no argument.
*/
void print_alphabet_x10(void)
{
	int j;

	for (j = 1; j <= 10; j++)
	{
		char i;

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
