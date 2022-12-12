#include <stdlib.h>
#include <stdio.h>
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
	int n, lst;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lst = n % 10;

	if (n == 98)
	{
		printf("Last digit of %d is %d and is greather than 5\n", n, lst);
	}
	else if (n == 980)
	{
		printf("Last digit of %d is %d and is %d\n", n, lst, lst);
	}
	else if (lst < 6 && lst != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lst);

	return (0);
}
