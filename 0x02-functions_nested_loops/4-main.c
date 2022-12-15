#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - program's main function.
* Description: this is where program execution begins and ends.
* @void: accepts no param.
* Return: return value for main function
*/
int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
