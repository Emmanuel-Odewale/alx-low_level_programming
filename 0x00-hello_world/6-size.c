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
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
