#include <stdio.h>

/**
 * main - Prints the add of the Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int x;
	long int n1, n2, n3;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);
	for (x = 0; x < 48; x++)
	{
		n3 = n1 + n2;
		printf(", %ld", n3);
		n1 = n2;
		n2 = n3;
	}
	printf("\n");
	return (0);
}
