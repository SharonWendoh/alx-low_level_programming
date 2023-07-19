#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *@n: input number as an integer.
 *
 * Return: The last digit
 */
int print_last_digit(int n)
{
	int m;

	if (n < 0)
	{
		n = -n;
	}
	m = n % 10;
	return (m);
}
