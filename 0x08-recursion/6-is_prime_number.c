/**
 * checker - Checks whether number is prime or not
 *
 * @n: input number
 * @x: guess
 *
 * Return: 1 if prime 0 if not
 */
int checker(int n, int x)
{
	if (x <= 1)
	{
		return (1);
	} else if ((n % x) != 0)
	{
		return (checker(n, (x - 1)));
	}
	return (0);
}
/**
 * is_prime_number - Checks whether number is prime or not
 *
 * @n: input number
 *
 * Return: square root or -1
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	} else if (n == 2)
	{
		return (1);
	}
	return (checker(n, (n - 1)));
}
