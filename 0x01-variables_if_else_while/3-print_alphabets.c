#include <stdio.h>
/**
 *main - Prints the alphabet in small then capital
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char x = 'a';
	char c = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
