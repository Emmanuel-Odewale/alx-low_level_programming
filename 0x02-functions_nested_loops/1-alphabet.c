#include "main.h"
/**
* main - entry point
* print_alphabet: function that prints alphabet a-z in lowercase.
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
