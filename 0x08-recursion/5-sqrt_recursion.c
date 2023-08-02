#include "main.h"
#include "main.h"

/**
 * guess - Returns natural square root of the number
 *
 * @n: input number
 * @x: guess
 *
 * Return: square root or -1
 */
int guess(int n, int x)
{
	if (x > (n / 2))
	{
		return (-1);
	} else if ((x * x) == n)
	{
		return (x);
	}
	return (guess(n, (x + 1)));
}
/**
 * _sqrt_recursion - Returns natural square root of a number
 *
 * @n: input number
 *
 * Return: squareroot of the number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (guess(n, 2));
}
