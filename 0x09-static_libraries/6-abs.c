#include <stdio.h>
#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: The integer for which the absolute value is to be computed
 *
 * Return: The absolute value of n
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
