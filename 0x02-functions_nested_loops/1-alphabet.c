#include "main.h"
/**
* print_alphabet - a function that prints alphabet a-z in lowercase.
* Description: a function that prints alhabets.
* @void: accepts no argument.
*/
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
