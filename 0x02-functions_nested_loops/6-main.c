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

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}
