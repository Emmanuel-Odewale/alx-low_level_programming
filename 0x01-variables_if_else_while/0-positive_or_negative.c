#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - program's main function.
* Description: this is where program execution begins and ends.
* @void: accepts no param.
* printf: stdout function to output to the console.
* Return: return value for main function
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
