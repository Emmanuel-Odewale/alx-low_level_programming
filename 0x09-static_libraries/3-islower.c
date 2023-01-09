#include "main.h"
#include <ctype.h>
/**
* _islower - a function to verify if a character is a lowercase character.
* @c: parameter for the _islower function that takes an integer value.
* Description: a function to check if a character is lower class character.
* Return: returns 1 if true else returns 0.
*/
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
		return (0);
}
