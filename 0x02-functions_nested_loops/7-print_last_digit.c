#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_last_digit - a function that prints the last digit of a number.
* Description: a function that prints the last digit of a given input.
* @n: param for function.
* Return: returns the absolute value of given input.
*/
int print_last_digit(int n)
{
	int lst;

	lst = n % 10;
	printf("%d", lst);
	return(lst);
}
