#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks if a value is in uppercase.
 * @c: parameter it accepts
 * Description:  a function that checks for uppercase character.
 * Return: 1 or 0 depending on case.
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
		return (0);
}
