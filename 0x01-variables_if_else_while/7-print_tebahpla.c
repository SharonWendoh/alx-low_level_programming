#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse,
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
