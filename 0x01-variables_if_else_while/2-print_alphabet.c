#include <stdio.h>
/**
 * main - prints alphabet in lowercase
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
