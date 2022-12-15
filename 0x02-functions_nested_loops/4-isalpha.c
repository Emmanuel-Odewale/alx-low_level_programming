#include "main.h"
#include <ctype.h>
/**
* _isalpha - a function to verify if a character is an alphabet.
* @c: parameter for function..
* Description: a function to check if a caharacter / value is an alphabet.
* Return: returns 1 if true else returns 0.
*/
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
		return (0);
}
