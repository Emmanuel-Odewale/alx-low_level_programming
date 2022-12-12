#include <stdio.h>
/**
* main - program's main function.
* Description: this is where program execution begins and ends.
* @void: accepts no param.
* Return: return value for main function
*/
int main(void)
{
	int i, x;

	for (i = 48; i < 58; i++)
	{
		for (x = 48; x < 58; x++)
		{
			putchar(i);
			putchar(x);
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
