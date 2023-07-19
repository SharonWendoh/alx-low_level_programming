#include <stdio.h>

/**
 * main - Prints the sum of the even-valued fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int n1, n2, n3, sum;

	n1 = 1;
	n2 = 2;
	n3 = sum = 0;
	while (n3 <= 4000000)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		if ((n1 % 2) == 0)
		{
			sum += n1;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
