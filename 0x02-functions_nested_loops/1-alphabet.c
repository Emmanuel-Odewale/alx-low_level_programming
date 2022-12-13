#include "main.h"
/**
* main - entry point
* print_alphabet - a function that prints alphabet a-z in lowercase.
* @void: accepts no argument.
* Return: Always return 0
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
