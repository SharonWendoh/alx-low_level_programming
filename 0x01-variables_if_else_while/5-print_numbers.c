#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0,
 *  followed by a new line.
 *
 *  Return: Always 0 (Successful)
 */
int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		printf("%d", x);
		x++;
	}
	printf("\n");
	return (0);
}
