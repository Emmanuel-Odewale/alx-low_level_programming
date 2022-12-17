#include <ctype.h>

/**
 * _isdigit - checks if a value is digit..
 * @c: parameter it accepts
 * Description:  a function that checks for a digit (0 - 9)..
 * Return: 1 or 0 depending on case.
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
		return (0);
}
