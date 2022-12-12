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
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
