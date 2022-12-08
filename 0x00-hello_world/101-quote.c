#include <stdio.h>
/**
 * main - program's main function.
 * Description: this is where program execution begins and ends.
 * @void: accepts no param.
 * printf: stdout function to output to the console.
 * Return: return value for main function
 */
int main(void)
{
	char ch[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int n = 0;

	while (ch[n] != '\0')
	{
		putchar(ch[n]);
		n++;
	}
	return (1);
}
