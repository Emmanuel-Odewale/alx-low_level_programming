#include <stdio.h>
/**
* main - program's main function.
* Description: this is where program execution begins and ends.
* @void: accepts no param.
* Return: return value for main function
*/
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
