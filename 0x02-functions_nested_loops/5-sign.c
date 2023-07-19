#include <stdio.h>
#include "main.h"
/**
 * print_sign -  prints the sign of a number
 * @n: The number to check
 *
 * Return: 1 if n is positive, -1 if negative, 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
	return (0);
}
