#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* print_sign - a function that prints a sign if,
* its argument is > 0, == 0 and < 0..
* @n: parameter for function.
* Description: a function that prints a sign if,
* its argument is greater, equal or less than 0..
* Return: returns 1 0 and -1. according depending on the function's argument.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
